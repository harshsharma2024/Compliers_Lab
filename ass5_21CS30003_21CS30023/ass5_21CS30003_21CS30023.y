/*Declarations*/
%{
    #include <bits/stdc++.h>
    #include <sstream>
    #include "ass5_21CS30003_21CS30023_translator.h"
    extern int yylex();
    void yyerror(string s);
    extern string var_type;
    extern vector<label> label_table;
    extern int line;
    using namespace std;
%}



%token OTHERS
%token AUTO
%token BREAK
%token CASE
%token CHAR
%token CONST
%token CONTINUE
%token DEFAULT
%token DO
%token DOUBLE
%token ELSE
%token ENUM
%token EXTERN
%token REGISTER
%token FLOAT
%token FOR
%token GOTO
%token IF
%token INLINE
%token INT
%token LONG
%token RESTRICT
%token RETURN
%token SHORT
%token SIGNED
%token SIZEOF
%token STATIC
%token STRUCT
%token SWITCH
%token TYPEDEF
%token UNION
%token UNSIGNED
%token VOID
%token VOLATILE
%token WHILE
%token _BOOL
%token _COMPLEX
%token _IMAGINARY



%token <symp> IDENTIFIER
%token <int_val> INTEGER_CONST
%token <char_val> CHAR_CONST
%token <float_val> FLOAT_CONST
%token <char_val> STRING_LITERAL

//PUNCTUATORS
%token OPENSB
%token CLOSESB
%token OPENRB
%token CLOSERB
%token OPENCB
%token CLOSECB
%token DOT
%token RIGHTARROW
%token PLUSPLUS
%token MINUSMINS
%token BAND
%token KSTAR
%token PLUS
%token MINUS
%token TILDA
%token NOT
%token DIVIDE
%token MODULO
%token LEFTS
%token RIGHTS
%token LESSTHAN
%token GREATERTHAN
%token LESSEQUAL
%token GREATEREQUAL
%token EQUALEQUAL
%token NOTEQUAL
%token XOR
%token BITWISEOR
%token AND
%token OR
%token QUESTIONMARK
%token COLON
%token SEMICOLON
%token DOTDOTDOT
%token EQUAL
%token MULEQUAL
%token DIVEQUAL
%token MODEQUAL
%token PLUSEQUAL
%token MINUSEQUAL
%token SHIFTLEQUAL
%token SHIFTREQUAL
%token ANDEQUAL
%token XOREQUAL
%token OREQUAL
%token COMMA
%token HASH

%union {
    char unaryOp;       // unary
    int int_val;        // integer
    char* char_val;     // char
    float float_val;    // float
    int num_params;     // parameters number
    int instr_number;   // instruction number
    Expression* expr;   // Expression
    Statement* stat;    // Statement
    symboltype* sym_type;   // symbol type
    sym* symp;          // symp
    Array* A;           // Array type
}

%start translation_unit

%right "then" ELSE

//unary operator
%type <unaryOp> unary_operator

//number of parameters
%type <num_params> argument_expression_list argument_expression_list_opt


//Expressions
%type <expr>
	expression
    constant
	primary_expression 
	multiplicative_expression
	additive_expression
	shift_expression
	relational_expression
	equality_expression
	and_expression
	exclusive_or_expression
	inclusive_or_expression
	logical_and_expression
	logical_or_expression
	conditional_expression
	assignment_expression
	expression_statement

//Statements
%type <stat>  statement
	compound_statement
	loop_statement
	selection_statement
	iteration_statement
	labeled_statement 
	jump_statement
	block_item
	block_item_list
	block_item_list_opt

//symbol type
%type <sym_type> pointer

//symbol
%type <symp> initializer
%type <symp> direct_declarator init_declarator declarator

//arr1s
%type <A> postfix_expression
	unary_expression
	cast_expression

//Auxillary non-terminals M and N
%type <instr_number> M
%type <stat> N

/*Rules*/
%%



changetable: %empty 
	{    
        // Utility to change the table
		parST = ST;                                                               

        // If nested call recursively on the nested table
		if(currSymbolPtr->nested==NULL) {
			changeTable(new symtable(""));	                                           
		}
		else {
			changeTable(currSymbolPtr ->nested);						               
			Q.emit("label", ST->name);
		}
	}
	;



constant:
                    INTEGER_CONST { 
                        // Here we are creating a new instance and storing it
                        $$=new Expression();	
                        string p=convertIntToString($1);
                        $$->loc=gentemp(new symboltype("int"),p);
                        Q.emit("=",$$->loc->name,p);
                    }
                    | FLOAT_CONST
                    {                                                                         
                        $$=new Expression();
                        string p=convertFloatToString($1);
                        $$->loc=gentemp(new symboltype("float"),p);
                        Q.emit("=",$$->loc->name,p);
                    }
                    | CHAR_CONST
                    {                                                                        
                        $$=new Expression();
                        $$->loc=gentemp(new symboltype("char"),$1);
                        Q.emit("=",$$->loc->name,string($1));
                    }
                    | STRING_LITERAL
                    {                                                                        
                        $$=new Expression();
                        $$->loc=gentemp(new symboltype("pointer"),$1);
                        Q.emit("=",$$->loc->name,string($1));
                    }
                    ;

primary_expression:
                    IDENTIFIER
                    {
                        $$=new Expression();                                                  
                        $$->loc=$1;
                        $$->type="not-boolean";
                    }
                    | constant
                    { 
                        $$ = $1; 
                    }
                    | OPENRB expression CLOSERB
                    {                                                                        
                        $$=$2;
                    }
                    ;


postfix_expression:
                    primary_expression
                    {
                        $$=new Array();	
                        $$->Array=$1->loc;	

                        $$->type=$1->loc->type;	
                        $$->loc=$$->Array;
                    }
                    | postfix_expression OPENSB expression CLOSESB
                    {                                                                                                	
                        
                        $$=new Array();
                        $$->type=$1->type->arrtype;                 
                        $$->Array=$1->Array;                       
                        $$->loc=gentemp(new symboltype("int"));     
                        $$->atype="arr";                           

                        // Recursive definition is crucial here
                        if($1->atype=="arr") {			                               
                            sym* t=gentemp(new symboltype("int"));
                            int p=computeSize($$->type);
                            string str=convertIntToString(p);
                            Q.emit("*",t->name,$3->loc->name,str);
                            Q.emit("+",$$->loc->name,$1->loc->name,t->name);
                        }
                        else {                        
                            int p=computeSize($$->type);	
                            string str=convertIntToString(p);
                            Q.emit("*",$$->loc->name,$3->loc->name,str);
                        }
                    }
                    | postfix_expression OPENRB argument_expression_list_opt CLOSERB
                    {
                        // Calling the function with a variable number of arguments
                        $$=new Array();	
                        $$->Array=gentemp($1->type);

                        string str=convertIntToString($3);
                        Q.emit("call",$$->Array->name,$1->Array->name,str);
                    }
                    | postfix_expression DOT IDENTIFIER
                    { 

                    }
                    | postfix_expression RIGHTARROW IDENTIFIER
                    { 

                    }
                    | postfix_expression PLUSPLUS
                    { 
                        // We generate a temporary instance and add 1 to it
                        $$=new Array();	
                        $$->Array=gentemp($1->Array->type);
                        Q.emit("=",$$->Array->name,$1->Array->name);
                        Q.emit("+",$1->Array->name,$1->Array->name,"1");
                    }
                    | postfix_expression MINUSMINS
                    {
                        // We generate a temporary instance and subtract 1 from it
                        $$=new Array();	
                        $$->Array=gentemp($1->Array->type);

                        Q.emit("=",$$->Array->name,$1->Array->name);
                        Q.emit("-",$1->Array->name,$1->Array->name,"1");	
                    }
                    | OPENRB type_name CLOSERB OPENCB initializer_list CLOSECB
                    { }
                    | OPENRB type_name CLOSERB OPENCB initializer_list COMMA CLOSECB     
                    { }
                    ;  

argument_expression_list:
                    assignment_expression
                    {
                        $$=1;                                      //Simple assignment
                        Q.emit("param",$1->loc->name);	
                    }
                    | argument_expression_list COMMA assignment_expression   
                    {
                        $$=$1+1;                                  //Add 1 here
                        Q.emit("param",$3->loc->name);
                    }
                    ;

argument_expression_list_opt:
                    argument_expression_list
                    {
                        $$=$1; // Simple assignment here
                    }
                    | %empty
                    { 
                        $$ = 0; // defaults to 0
                    }
                    ;

unary_expression:
                    postfix_expression
                    { 
                        $$=$1; /* assign $$ =  $1*/
                    } 
                    | PLUSPLUS unary_expression
                    {  	
                        Q.emit("+",$2->Array->name,$2->Array->name,"1");		// we just add 1 here
                        $$=$2;
                    }
                    | MINUSMINS unary_expression
                    {
                        Q.emit("-",$2->Array->name,$2->Array->name,"1");        // we just subtract 1 here
                        $$=$2;
                    }
                    | unary_operator cast_expression
                    {   
                        $$=new Array();
                        // We need to do case work here
                        switch($1) {	  

                            case '&':                                                  // This is ampersand, indicating address value
                                $$->Array=gentemp(new symboltype("ptr"));
                                $$->Array->type->arrtype=$2->Array->type; 
                                Q.emit("=&",$$->Array->name,$2->Array->name);
                                break;

                            case '*':                                                   // Dereferencing operator here
                                $$->atype="ptr";
                                $$->loc=gentemp($2->Array->type->arrtype);
                                $$->Array=$2->Array;
                                Q.emit("=*",$$->loc->name,$2->Array->name);
                                break;

                            case '+':  
                                $$=$2;
                                break;                 // Stays same as +a = a

                            case '-':				   // Just make a temporary vaiable with negative value
                                $$->Array=gentemp(new symboltype($2->Array->type->type));
                                Q.emit("uminus",$$->Array->name,$2->Array->name);
                                break;
                                
                            case '~':                   // The bitwise not
                                $$->Array=gentemp(new symboltype($2->Array->type->type));
                                Q.emit("~",$$->Array->name,$2->Array->name);
                                break;

                            case '!':				// The logical not, again we create a temporary and do our work
                                $$->Array=gentemp(new symboltype($2->Array->type->type));
                                Q.emit("!",$$->Array->name,$2->Array->name);
                                break;
                        }
                    }
                    | SIZEOF unary_expression
                    { 

                    }
                    | SIZEOF OPENRB type_name CLOSERB  
                    { 

                    }
                    ;    


unary_operator: 
                    BAND
                    { 
                        $$ = '&'; 
                    }
                    | KSTAR
                    { 
                        $$ = '*'; 
                    }
                    | PLUS
                    { 
                        $$ = '+'; 
                    }
                    | MINUS
                    { 
                        $$ = '-'; 
                    }
                    |  TILDA 
                    { 
                        $$ = '~'; 
                    }
                    |  NOT 
                    { 
                        $$ = '!'; 
                    }
                    ;

cast_expression:
                    unary_expression
                    { 
                        $$ = $1; 
                    }
                    | OPENRB type_name CLOSERB cast_expression
                    { 
                        $$=new Array();	
                        $$->Array=convertType($4->Array,var_type);             // Convert and assign
                    }
                    ;

multiplicative_expression:
                    cast_expression
                    {
                        $$ = new Expression();             

                        // We handle casting by checking types and doing necessary conversions
                        if($1->atype=="arr") {
                            $$->loc = gentemp($1->loc->type);	
                            Q.emit("=[]", $$->loc->name, $1->Array->name, $1->loc->name);     
                        }

                        else if($1->atype=="ptr") { 
                            $$->loc = $1->loc;        
                        }
                        else {
                            $$->loc = $1->Array;
                        }
                    }
                    | multiplicative_expression KSTAR cast_expression
                    { 
                        if(!compareSymbolType($1->loc, $3->Array)) {
                            // Types are not same
                            cout<<"Line: "<<line<<"\n";
                            yyerror("There is a type error in our program!");
                            return 1;
                        }    
                        else {
                            // Simply assign here
                            $$ = new Expression();	
                            $$->loc = gentemp(new symboltype($1->loc->type->type));
                            Q.emit("*", $$->loc->name, $1->loc->name, $3->Array->name);
                        }
                    }
                    | multiplicative_expression DIVIDE cast_expression
                    {
                        //Types are not same
                        if(!compareSymbolType($1->loc, $3->Array)){ 
                            cout << "There is a type error in our Program"<< endl;
                        }
                        else {
                            // Just do the operation
                            $$ = new Expression();
                            $$->loc = gentemp(new symboltype($1->loc->type->type));
                            Q.emit("/", $$->loc->name, $1->loc->name, $3->Array->name);
                        }
                    }
                    | multiplicative_expression MODULO cast_expression     
                    {
                        // Incompatible types
                        if(!compareSymbolType($1->loc, $3->Array)) 
                            cout << "There is a type error in our Program"<< endl;		
                        else {
                            // Just do the operation
                            $$ = new Expression();

                            $$->loc = gentemp(new symboltype($1->loc->type->type));
                            Q.emit("%", $$->loc->name, $1->loc->name, $3->Array->name);	
                        }
                    }
                    ;


additive_expression:        
                    multiplicative_expression
                    { 
                        $$=$1;
                    }
                    | additive_expression PLUS multiplicative_expression
                    {
                        // Incompatible types
                        if(!compareSymbolType($1->loc, $3->loc))
                            cout << "There is a type error in our Program"<< endl;
                        else {
                            // Continue with the operation
                            $$ = new Expression();	

                            $$->loc = gentemp(new symboltype($1->loc->type->type));
                            Q.emit("+", $$->loc->name, $1->loc->name, $3->loc->name);
                        }
                    }
                    | additive_expression MINUS multiplicative_expression
                    {
                        // Check and do the operation
                        if(!compareSymbolType($1->loc, $3->loc))
                            cout << "There is a type error in our Program"<< endl;		
                        else        
                        {	
                            $$ = new Expression();	

                            $$->loc = gentemp(new symboltype($1->loc->type->type));
                            Q.emit("-", $$->loc->name, $1->loc->name, $3->loc->name);
                        }
                    }
                    ;

shift_expression:
                    additive_expression
                    { 
                        $$=$1;
                    }
                    | shift_expression LEFTS additive_expression
                    { 
                        if(!($3->loc->type->type == "int"))
                            cout << "There is a type error in our Program"<< endl; 		
                        else {		
                            $$ = new Expression();		

                            $$->loc = gentemp(new symboltype("int"));
                            Q.emit("<<", $$->loc->name, $1->loc->name, $3->loc->name);		
                        }
                    }
                    | shift_expression RIGHTS additive_expression
                    { 	
                        // Check and carry out operation
                        if(!($3->loc->type->type == "int")) {
                            cout << "There is a type Error in our Program"<< endl; 		
                        }
                        else {			
                            $$ = new Expression();	

                            $$->loc = gentemp(new symboltype("int"));
                            Q.emit(">>", $$->loc->name, $1->loc->name, $3->loc->name);			
                        }
                    }
                    ;

relational_expression:
                    shift_expression
                    { 
                        $$=$1;
                    }
                    | relational_expression LESSTHAN shift_expression
                    {
                        // Check and do the operation
                        if(!compareSymbolType($1->loc, $3->loc)) {
                            yyerror("There is a type error in our Program");
                        }
                        else 
                        {      
                            $$ = new Expression();

                            $$->type = "bool";                         
                            // Need to update truelist and falselist since type is boolean
                            $$->truelist = makelist(nextinstr());     
                            $$->falselist = makelist(nextinstr()+1);
                            
                            Q.emit("<", "", $1->loc->name, $3->loc->name);     
                            Q.emit("goto", "");	
                        }
                    }
                    | relational_expression  GREATERTHAN  shift_expression
                    {
                        // Check and carry out conversions and generate reqd attributed for bool type
                        if(!compareSymbolType($1->loc, $3->loc)) {
                            yyerror("There is a type error in our program");
                        }
                        else {	
                            $$ = new Expression();		

                            $$->type = "bool";
                            // Need to update truelist and falselist since type is boolean
                            $$->truelist = makelist(nextinstr());
                            $$->falselist = makelist(nextinstr()+1);

                            Q.emit(">", "", $1->loc->name, $3->loc->name);
                            Q.emit("goto", "");
                        }	
                    }
                    | relational_expression  LESSEQUAL  shift_expression
                    {
                        // Compare and carry out operation
                        if(!compareSymbolType($1->loc, $3->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {			
                            $$ = new Expression();		

                            $$->type = "bool";
                            // Need to update the attributes
                            $$->truelist = makelist(nextinstr());
                            $$->falselist = makelist(nextinstr()+1);

                            Q.emit("<=", "", $1->loc->name, $3->loc->name);
                            Q.emit("goto", "");
                        }		
                    }
                    | relational_expression GREATEREQUAL shift_expression
                    {
                        // Compare and carry out operation
                        if(!compareSymbolType($1->loc, $3->loc)){
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {	
                            $$ = new Expression();	
                            
                            $$->type = "bool";
                            // Need to update the attributes for boolean data type
                            $$->truelist = makelist(nextinstr());
                            $$->falselist = makelist(nextinstr()+1);

                            Q.emit(">=", "", $1->loc->name, $3->loc->name);
                            Q.emit("goto", "");
                        }
                    }
                    ;

equality_expression:
                    relational_expression
                    { 
                        $$=$1;
                    }
                    | equality_expression EQUALEQUAL relational_expression
                    {
                        // Check and assign
                        if(!compareSymbolType($1->loc, $3->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {
                            // We need to convert here
                            convertBoolToInt($1);                  
                            convertBoolToInt($3);

                            $$ = new Expression();

                            $$->type = "bool";
                            $$->truelist = makelist(nextinstr());            
                            $$->falselist = makelist(nextinstr()+1); 

                            Q.emit("==", "", $1->loc->name, $3->loc->name);      
                            Q.emit("goto", "");				
                        }
                    }
                    | equality_expression NOTEQUAL relational_expression
                    {
                        // Similar to last one, just that we check for inequality here
                        if(!compareSymbolType($1->loc, $3->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {			
                            convertBoolToInt($1);
                            convertBoolToInt($3);

                            $$ = new Expression();                 

                            $$->type = "bool";
                            $$->truelist = makelist(nextinstr());
                            $$->falselist = makelist(nextinstr()+1);

                            Q.emit("!=", "", $1->loc->name, $3->loc->name);
                            Q.emit("goto", "");
                        }
                    }
                    ;

and_expression:
                    equality_expression
                    { 
                        $$=$1;
                    }
                    | and_expression BAND equality_expression
                    {
                        // Check and assign similar to last one, but since it is not boolean,
                        // we just update the loc (its only int)
                        if(!compareSymbolType($1->loc, $3->loc)){		
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {              
                            convertBoolToInt($1);                             
                            convertBoolToInt($3);			

                            $$ = new Expression();

                            $$->type = "not-boolean";                   
                            $$->loc = gentemp(new symboltype("int"));

                            Q.emit("&", $$->loc->name, $1->loc->name, $3->loc->name);               
                        }
                    }
                    ;

exclusive_or_expression:
                    and_expression
                    { 
                        $$=$1;
                    }
                    | exclusive_or_expression XOR and_expression
                    {
                        // Similar to the last one, check, assign loc if alright and emit quad
                        if(!compareSymbolType($1->loc, $3->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {
                            convertBoolToInt($1);
                            convertBoolToInt($3);

                            $$ = new Expression();

                            $$->type = "not-boolean";
                            $$->loc = gentemp(new symboltype("int"));

                            Q.emit("^", $$->loc->name, $1->loc->name, $3->loc->name);
                        }
                    }
                    ;

inclusive_or_expression:
                    exclusive_or_expression
                    { 
                        $$=$1;
                    }
                    | inclusive_or_expression BITWISEOR exclusive_or_expression
                    { 
                        // Again same as the last one, convert to int, asign loc and emit quad
                        if(!compareSymbolType($1->loc, $3->loc)) { 
                            yyerror("There is a type error in our program"); 
                        }
                        else {
                            convertBoolToInt($1);		
                            convertBoolToInt($3);

                            $$ = new Expression();

                            $$->type = "not-boolean";
                            $$->loc = gentemp(new symboltype("int"));

                            Q.emit("|", $$->loc->name, $1->loc->name, $3->loc->name);
                        } 
                    }
                    ;

logical_and_expression:
                    inclusive_or_expression
                    { 
                        $$=$1;
                    }
                    | logical_and_expression AND M inclusive_or_expression
                    { 
                        // Converto to bool before the logical operation
                        convertIntToBool($4);                                  
                        convertIntToBool($1);                                 

                        // Generate new boolean expression
                        $$ = new Expression();                               
                        $$->type = "bool";
                        
                        // Do the backpatching and generate the attributes
                        backpatch($1->truelist, $3);                        
                        $$->truelist = $4->truelist;                       
                        $$->falselist = merge($1->falselist, $4->falselist);   
                    }
                    ;

logical_or_expression:
                    logical_and_expression
                    { 
                        $$=$1;
                    }
                    | logical_or_expression OR M logical_and_expression
                    { 
                        // Similar to last one
                        convertIntToBool($4);			 
                        convertIntToBool($1);			

                        $$ = new Expression();	
                        $$->type = "bool";

                        // As per requirement
                        backpatch($1->falselist, $3);		
                        $$->truelist = merge($1->truelist, $4->truelist);		
                        $$->falselist = $4->falselist;		 	
                    }
                    ;

conditional_expression:
                    logical_or_expression
                    { $$=$1;/* Simple assign */ }
                    | logical_or_expression QUESTIONMARK expression COLON conditional_expression
                    {
                        //normal conversion method to get conditional expressions
                        $$->loc = gentemp($3->loc->type);       //generate temporary for expression
                        $$->loc->update($3->loc->type);
                        
                        backpatch($1->truelist, nextinstr());           // $1 true goes to expression
                        Q.emit("=", $$->loc->name, $3->loc->name);      // make it equal to first expression
                        list<int> l = makelist(nextinstr());            //makelist next instruction
                        Q.emit("goto", "");                             //prevent fallthrough

                        backpatch($1->falselist, nextinstr());          // $1 false goes to conditional expression
                        Q.emit("=", $$->loc->name, $5->loc->name);      // Second Expression

                        backpatch(l, nextinstr());                      // fallthrough, go to next instruction
                    }
                    ;

assignment_expression:
                    conditional_expression
                    { $$=$1;/* Simple assign */ }
                    | unary_expression assignment_operator assignment_expression
                    {
                        if($1->atype=="arr")                                            // if type is arr, Check and convert then Q.emit as []=
                        {
                            $3->loc = convertType($3->loc, $1->type->type);
                            Q.emit("[]=", $1->Array->name, $1->loc->name, $3->loc->name);		
                        }
                        else if($1->atype=="ptr")                                       // if type is ptr, simply Q.emit as *=
                        {
                            Q.emit("*=", $1->Array->name, $3->loc->name);	
                        }
                        else                                                            // otherwise simple assignment
                        {
                            $3->loc = convertType($3->loc, $1->Array->type->type);
                            Q.emit("=", $1->Array->name, $3->loc->name);
                        }
                        
                        $$ = $3;
                    }
                    ;


assignment_operator:
                    EQUAL
                    {  }
                    | MULEQUAL
                    {  }
                    | DIVEQUAL
                    {  }
                    | MODEQUAL
                    {  }
                    | PLUSEQUAL
                    {  }
                    | MINUSEQUAL
                    {  }
                    | SHIFTLEQUAL
                    {  }
                    | SHIFTREQUAL
                    {  }
                    | ANDEQUAL
                    {  }
                    | XOREQUAL
                    {  }
                    | OREQUAL
                    {  }

expression:
                    assignment_expression
                    { $$ = $1; }
                    | expression COMMA assignment_expression
                    {  }
                    ;

constant_expression:
                    conditional_expression
                    {  }
                    ;

declaration:
                    declaration_specifiers init_declarator_list_opt SEMICOLON
                    {  }
                    ;

init_declarator_list_opt:
                    init_declarator_list {  }
                    | %empty{  }
                    ;

declaration_specifiers:
                    storage_class_specifier declaration_specifiers_opt
                    {  }
                    | type_specifier declaration_specifiers_opt
                    {  }
                    | type_qualifier declaration_specifiers_opt
                    {  }
                    | function_specifier declaration_specifiers_opt
                    {  }
                    ;

declaration_specifiers_opt:
                    declaration_specifiers { }
                    | %empty {  }
                    ;

init_declarator_list:
                    init_declarator
                    {  }
                    | init_declarator_list COMMA init_declarator
                    {  }
                    ;

init_declarator:
                    declarator
                    { 
                        $$ = $1;                            // Simple Assign 
                    }
                    | declarator EQUAL initializer
                    {
                        if($3->val != ""){
                            $1->val=$3->val;                // get the initial value
                        }
                        Q.emit("=", $1->name, $3->name);	// emit that initial value with Assign operator
                    }
                    ;

storage_class_specifier:
                    EXTERN
                    {  }
                    | STATIC
                    {  }
                    | AUTO
                    {  }
                    | REGISTER
                    {  }
                    ;

type_specifier:
                    VOID
                    { var_type="void"; /* Store the latest var type */ }
                    | CHAR
                    { var_type="char"; /* Store the latest var type */ }
                    | SHORT
                    {  }
                    | INT
                    { var_type="int"; /* Store the latest var type */ }
                    | LONG
                    {  }
                    | FLOAT
                    { var_type="float"; /* Store the latest var type */ }
                    | DOUBLE
                    {  }
                    | SIGNED
                    {  }
                    | UNSIGNED
                    {  }
                    | _BOOL
                    {  }
                    | _COMPLEX
                    {  }
                    | _IMAGINARY
                    {  }
                    | enum_specifier
                    {  }
                    | struct_or_union_specifier
                    {  }
                    ;

specifier_qualifier_list:
                    type_specifier specifier_qualifier_list_opt
                    {  }
                    | type_qualifier specifier_qualifier_list_opt
                    {  }
                    ;

specifier_qualifier_list_opt:
                    specifier_qualifier_list {  }
                    | %empty {  }
                    ;

struct_or_union_specifier:
                    struct_or_union OPENCB struct_declaration_list CLOSECB
                    {  }
                    | struct_or_union IDENTIFIER OPENCB struct_declaration_list CLOSECB
                    {  }
                    | struct_or_union IDENTIFIER
                    {  }
                    ;

struct_or_union:
                    STRUCT
                    {  }
                    | UNION
                    {  }
                    ;

struct_declaration_list: 
                    struct_declaration
                    {  }
                    | struct_declaration_list struct_declaration
                    {  }
                    ;

struct_declaration:
                    specifier_qualifier_list SEMICOLON
                    {  }
                    | specifier_qualifier_list struct_declarator_list SEMICOLON
                    {  }
                    ;

struct_declarator_list:
                    struct_declarator
                    {  }
                    | struct_declarator_list COMMA struct_declarator
                    {  }
                    ;
struct_declarator:
                    COLON constant_expression
                    {  }
                    | declarator COLON constant_expression
                    {  }
                    | declarator
                    {  }
                    ;

enum_specifier:
                    ENUM identifier_opt OPENCB enumerator_list CLOSECB
                    {  }
                    | ENUM identifier_opt OPENCB enumerator_list COMMA CLOSECB
                    {  }
                    | ENUM IDENTIFIER
                    {  }
                    ;

identifier_opt:
                    IDENTIFIER {  }
                    | %empty {  }
                    ;

enumerator_list:
                    enumerator
                    {  }
                    | enumerator_list COMMA enumerator
                    {  }
                    ;


enumerator:
                    IDENTIFIER
                    {  }
                    | IDENTIFIER EQUAL constant_expression
                    {  }
                    ;
                

type_qualifier:
                    CONST
                    { /* NOT to be modelled */ }
                    | RESTRICT
                    {  }
                    | VOLATILE
                    {  }
                    ;

function_specifier:
                    INLINE
                    {  }
                    ;

declarator:
                    pointer direct_declarator 
                    {
                        symboltype *t = $1;
                        while(t->arrtype!=NULL)
                        {
                            t = t->arrtype;                                         // Recursively get to the base Array
                        }   
                        t->arrtype = $2->type;                                      // add the base type 
                        
                        $$ = $2->update($1);                                        // update the symbol type
                    }
                    | direct_declarator {   }
                    ;



direct_declarator:
                    IDENTIFIER                 
                    {
                        //if ID, simply add a new variable of var_type
                        $$ = $1->update(new symboltype(var_type));                                      // update the symbol type to latest type specifier
                        currSymbolPtr = $$;	                                                            // store the latest Symbol
                    }
                    | OPENRB declarator CLOSERB {$$=$2;}                                                       // simply assign
                    | direct_declarator OPENSB type_qualifier_list assignment_expression CLOSESB {	}
                    | direct_declarator OPENSB type_qualifier_list CLOSESB {	}
                    | direct_declarator OPENSB assignment_expression CLOSESB 
                    {
                        symboltype *t = $1 -> type;
                        symboltype *prev = NULL;                                                        // prev initialized to NULL
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;                                                             // recursively find the base type
                        }
                        if(prev==NULL) 
                        {
                            int temp = atoi($3->loc->val.c_str());                                      // temp = string(value)
                            symboltype* s = new symboltype("arr", $1->type, temp);                      // Create a new symbol with the initial value
                            $$ = $1->update(s);                                                         // Update the symbol type
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, atoi($3->loc->val.c_str()));      // similar arguments as above		
                            $$ = $1->update($1->type);
                        }
                    }
                    | direct_declarator OPENSB CLOSESB 
                    {
                        symboltype *t = $1 -> type;
                        symboltype *prev = NULL;                                    // initialize prev to NULL
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;                                         // Recursively find the base type
                        }
                        if(prev==NULL) 
                        {
                            symboltype* s = new symboltype("arr", $1->type, 0);     // no initial values, simply keep 0
                            $$ = $1->update(s);                                     // Update the symboltype of $$
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, 0);
                            $$ = $1->update($1->type);
                        }
                    }
                    | direct_declarator OPENSB STATIC type_qualifier_list assignment_expression CLOSESB {	}
                    | direct_declarator OPENSB STATIC assignment_expression CLOSESB {	}
                    | direct_declarator OPENSB type_qualifier_list KSTAR CLOSESB {	}
                    | direct_declarator OPENSB KSTAR CLOSESB {	}
                    | direct_declarator OPENRB changetable parameter_type_list CLOSERB 
                    {
                        ST->name = $1->name;	                    // change the ST name to fun
                        if($1->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");          // lookup for return value	
                            s->update($1->type);		            // update return type
                        }
                        $1->nested=ST;                              // link nested Symbol Table 
                        ST->parent = globalST;                      // link parent Symbol Table
                        
                        changeTable(globalST);				        // Come back to globalsymbol table
                        currSymbolPtr = $$;
                    }
                    | direct_declarator OPENRB identifier_list CLOSERB {	}
                    | direct_declarator OPENRB changetable CLOSERB 
                    {        //similar as above
                        ST->name = $1->name;
                        if($1->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");
                            s->update($1->type);            // update return type
                        }
                        $1->nested=ST;                      // link nested Symbol table
                        ST->parent = globalST;              // Set parent to Global Symbol table
                        
                        changeTable(globalST);				// Go back to global Symbol table
                        currSymbolPtr = $$;
                    }
                    ;

type_qualifier_list_opt:
                    type_qualifier_list { }
                    | %empty {  }
                    ;


pointer:
                    KSTAR type_qualifier_list_opt 
                    { 
                        $$ = new symboltype("ptr");   //create a new pointer symbol
                    }
                    | KSTAR type_qualifier_list_opt pointer
                    { 
                        $$ = new symboltype("ptr",$3); // create the symboltype with $3 symbol type
                    }
                    ;

type_qualifier_list:
                    type_qualifier
                    {  }
                    | type_qualifier_list type_qualifier
                    {  }
                    ;

parameter_type_list:
                    parameter_list
                    {  }
                    | parameter_list COMMA DOTDOTDOT
                    {  }
                    ;                       

parameter_list:
                    parameter_declaration
                    {  }
                    | parameter_list COMMA parameter_declaration
                    {  }
                    ;

parameter_declaration:
                    declaration_specifiers declarator
                    {  }
                    | declaration_specifiers
                    {  }
                    ;

identifier_list:
                    IDENTIFIER
                    {  }
                    | identifier_list COMMA IDENTIFIER
                    {  }
                    ;

type_name:
                    specifier_qualifier_list
                    {  }
                    ;

initializer:
                    assignment_expression
                    { $$=$1->loc; /* assignment */  }
                    | OPENCB initializer_list CLOSECB
                    {  }
                    | OPENCB initializer_list COMMA CLOSECB
                    {  }
                    ;

initializer_list:
                    designation_opt initializer
                    {  }
                    | initializer_list COMMA designation_opt initializer
                    {  }
                    ;

designation_opt:
                    designation { }
                    | %empty { }
                    ;

designation:
                    designator_list EQUAL
                    {  }
                    ;

designator_list:
                    designator
                    {  }
                    | designator_list designator
                    {  }
                    ;

designator:
                    OPENSB constant_expression CLOSESB
                    {  }
                    | DOT IDENTIFIER
                    {  }
                    ;

statement:
                    labeled_statement
                    {  }
                    | compound_statement
                    { $$=$1; }
                    | expression_statement
                    { 
                        $$=new Statement();              //create new statement with same nextlist
                        $$->nextlist=$1->nextlist; 
                    }
                    | selection_statement
                    { $$=$1; }
                    | iteration_statement
                    { $$=$1; }
                    | jump_statement
                    { $$=$1; }
                    ;

loop_statement: 
                    labeled_statement   {  }
                    | expression_statement   
                    { 
                        $$=new Statement();                         // create new statement with same nextlist
                        $$->nextlist=$1->nextlist;                  // assign the nextlist
                    }
                    | selection_statement   { $$=$1; }
                    | iteration_statement   { $$=$1; }
                    | jump_statement   { $$=$1; }
                    ;
labeled_statement:
                    IDENTIFIER COLON M statement
                    {  
                        $$ = $4;
                        label *s = find_label($1->name);
                        if(s!=nullptr){
                            s->addr = $3;
                            backpatch(s->nextlist,s->addr);
                        }else{
                            s = new label($1->name);
                            s->addr = nextinstr();
                            s->nextlist = makelist($3);
                            label_table.push_back(*s);
                        }
                    }
                    | CASE constant_expression COLON statement
                    { /* Not to be modelled */ }
                    | DEFAULT COLON statement
                    {  }
                    ;

compound_statement:
                    OPENCB X changetable block_item_list_opt CLOSECB
                    { 
                        $$=$4;                           // Compound Statement = blockItemList
                        changeTable(ST->parent);         // Change Symbol Table
                    }
                    ;

block_item_list:
                    block_item
                    { $$=$1; /* Simple assign */}
                    | block_item_list M block_item
                    { 
                        $$=$3;
                        backpatch($1->nextlist,$2);     //after $1, move to block_item via $2
                    }
                    ;

block_item_list_opt:
                    block_item_list
                    { $$=$1 ;/* simple assign */}
                    | %empty 
                    { $$=new Statement(); /* Create new statement */} 
                    ;

block_item:
                    declaration
                    { $$=new Statement(); /* Create new statement */} 
                    | statement
                    { $$=$1; /* Simple assign */}
                    ;

expression_statement:
                    SEMICOLON
                    { $$ = new Expression(); /* new Expression */ }
                    | expression SEMICOLON
                    { $$=$1; /* Simple assign */}
                    ;

selection_statement:
                    IF OPENRB expression N CLOSERB M statement N %prec "then"
                    {
                        // if without else
                        backpatch($4->nextlist, nextinstr());                   // After we hit N we go to next instr
                        convertIntToBool($3);                                   // expression in IF is converted to bool

                        $$ = new Statement();                                   
                        backpatch($3->truelist, $6);                            // We do the backpatch here

                        list<int> temp = merge($3->falselist, $7->nextlist);    // If it is false, we just escape the inner statement
                        $$->nextlist = merge($8->nextlist, temp);
                    }
                    | IF OPENRB expression N CLOSERB M statement N ELSE M statement
                    {
                        // if with else
                        backpatch($4->nextlist, nextinstr());		            // After we hit N we go to next instr
                        convertIntToBool($3);                                   // convert expression to bool 

                        $$ = new Statement();                                   
                        backpatch($3->truelist, $6);                            // If true, we access the first part
                        backpatch($3->falselist, $10);                          // Else the second prt

                        list<int> temp = merge($7->nextlist, $8->nextlist);       // Then we merge with the nextlists of both statements
                        $$->nextlist = merge($11->nextlist,temp);	
                    }
                    | SWITCH OPENRB expression CLOSERB statement
                    { /* Not asked in question */ }
                    ;

iteration_statement:
                    WHILE W OPENRB X changetable M expression CLOSERB M loop_statement
                    {	
                        // while statement
                        $$ = new Statement();                                  
                        convertIntToBool($7);                                 
                        
                        // Proper backpatching
                        backpatch($10->nextlist, $6);	            // M1 to go back to expression again
                        backpatch($7->truelist, $9);	            // M2 to go to statement if the expression is true
                        $$->nextlist = $7->falselist;               // If expression is false, Exit loop

                        // Q.emit to prevent fallthrough
                        string str=convertIntToString($6);		
                        Q.emit("goto",str);	
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    | WHILE W OPENRB X changetable M expression CLOSERB OPENCB M block_item_list_opt CLOSECB     
                    {	
                        //while statement
                        $$ = new Statement();                   // create statement
                        convertIntToBool($7);                   // convert expression to bool
                        
                        // Proper Backpatching
                        backpatch($11->nextlist, $6);	        // M1 to go back to expression again
                        backpatch($7->truelist, $10);	        // M2 to go to statement if the expression is true
                        $$->nextlist = $7->falselist;           // If expression is false, then exit loop
                        
                        // Q.emit to prevent fallthrough
                        string str=convertIntToString($6);		
                        Q.emit("goto",str);	
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    | DO D M loop_statement M WHILE OPENRB expression CLOSERB SEMICOLON
                    {
                        //do statement
                        $$ = new Statement();                               //create statement	
                        convertIntToBool($8);                               //convert to bool
                        
                        // proper Backpatching
                        backpatch($8->truelist, $3);						// M1 to go back to statement if expression is true
                        backpatch($4->nextlist, $5);						// M2 to go to check expression if statement is complete
                        
                        $$->nextlist = $8->falselist;                       // Exit loop if statement is false
                        loop_name = "";
                    }
                    | DO D OPENCB M block_item_list_opt CLOSECB M WHILE OPENRB expression CLOSERB SEMICOLON      
	                {
                        //do statement
		                $$ = new Statement();     //create statement	
		                convertIntToBool($10);      //convert to bool
		                
                        backpatch($10->truelist, $4);						// M1 to go back to statement if expression is true
		                backpatch($5->nextlist, $7);						// M2 to go to check expression if statement is complete
		                
                        $$->nextlist = $10->falselist;                       // Exit loop if statement is false
		                loop_name = "";
	                }
                    | FOR F OPENRB X changetable declaration M expression_statement M expression N CLOSERB M loop_statement     
                    {
                        //for loop
                        $$ = new Statement();		            // create new statement
                        convertIntToBool($8);                   // convert check expression to boolean
                        
                        // Proper Backpatching
                        backpatch($8->truelist, $13);	        // if expression is true, go to M2
                        backpatch($11->nextlist, $7);	        // after N, go back to M1
                        backpatch($14->nextlist, $9);	        // statement go back to expression
                        
                        
                        string str=convertIntToString($9);
                        Q.emit("goto", str);				    // Emit goto
                        $$->nextlist = $8->falselist;	        // Exit loop if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    | FOR F OPENRB X changetable expression_statement M expression_statement M expression N CLOSERB M loop_statement     
                    {
                        //for loop
                        $$ = new Statement();		 //create new statement
                        convertIntToBool($8);  //convert check expression to boolean
                        
                        // Proper Backpatching
                        backpatch($8->truelist, $13);	                // if expression is true, go to M2
                        backpatch($11->nextlist, $7);	                // after N, go back to M1
                        backpatch($14->nextlist, $9);	                // statement go back to expression
                        
                        
                        string str=convertIntToString($9);
                        Q.emit("goto", str);				            //  emit goto str
                        $$->nextlist = $8->falselist;	                // Exit loop if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    | FOR F OPENRB X changetable declaration M expression_statement M expression N CLOSERB M OPENCB block_item_list_opt CLOSECB      
                    {
                        //for loop
                        $$ = new Statement();		                    // create new statement
                        convertIntToBool($8);                           // convert check expression to boolean

                        // Correctly backpatch lists
                        backpatch($8->truelist, $13);	                // if expression is true, then go to M2
                        backpatch($11->nextlist, $7);	                // after N, go back to M1
                        backpatch($15->nextlist, $9);	                //statement go back to expression
                        
                        
                        string str=convertIntToString($9);
                        Q.emit("goto", str);				            //prevent fallthrough
                        $$->nextlist = $8->falselist;	                // Exit loop if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
                    | FOR F OPENRB X changetable expression_statement M expression_statement M expression N CLOSERB M OPENCB block_item_list_opt CLOSECB
                    {	
                        $$ = new Statement();		                    // create new statement
                        convertIntToBool($8);                           // convert expression to boolean
                        
                        // proper backpatching
                        backpatch($8->truelist, $13);	                // backpatch &13
                        backpatch($11->nextlist, $7);	                // after N, go back to M1
                        backpatch($15->nextlist, $9);	                // statement go back to expression
                        
                        string str=convertIntToString($9);
                        Q.emit("goto", str);				            // Emit goto Str
                        $$->nextlist = $8->falselist;	                // Exit if statement is false
                        loop_name = "";
                        changeTable(ST->parent);                        
                    }
                    ;

jump_statement:
                    GOTO IDENTIFIER SEMICOLON
                    { 
                        $$ = new Statement();
                        label *l = find_label($2->name);
                        if(l){
                            Q.emit("goto","");
                            list<int>lst = makelist(nextinstr());
                            l->nextlist = merge(l->nextlist,lst);
                            if(l->addr!=-1)
                                backpatch(l->nextlist,l->addr);
                        } else {
                            l = new label($2->name);
                            l->nextlist = makelist(nextinstr());
                            Q.emit("goto","");
                            label_table.push_back(*l);
                        }
                    }  
                    | CONTINUE SEMICOLON
                    { $$ = new Statement(); }	
                    | BREAK SEMICOLON
                    { $$ = new Statement(); }
                    | RETURN expression SEMICOLON
                    {
                        $$ = new Statement();	
                        Q.emit("return",$2->loc->name);             
                    }
                    | RETURN SEMICOLON
                    {
                        $$ = new Statement();	
                        Q.emit("return","");                         
                    }
                    ;

translation_unit:
                    external_declaration
                    {  }
                    | translation_unit external_declaration
                    {  }
                    ;

external_declaration:
                    function_definition
                    {  }
                    | declaration
                    {  }
                    ;

function_definition:
                    declaration_specifiers declarator declaration_list_opt changetable OPENCB block_item_list_opt CLOSECB 
                    {
                        int next_instr=0;	 	
                        ST->parent=globalST;
                        $2->updateFuntionStatus(true);
                        // Add a function name
                        table_count = 0;
                        label_table.clear();                        

                        changeTable(globalST);                     // Change the table again to Global ST
                    }
                    ;

declaration_list_opt:
                    declaration_list { }
                    | %empty { }
                    ;

declaration_list:
                    declaration
                    {  }
                    | declaration_list declaration
                    {  }
                    ;

M: %empty 
	{
        // Used in backpatching
		$$ = nextinstr();
	}   
	;

F: %empty 
	{
		// Beginning of the for statement
		loop_name = "FOR";
	}   
	;

W: %empty 
	{
		// Beginning of the while statement
		loop_name = "WHILE";
	}   
	;

D: %empty 
	{
		// Beginning of the do while statement
		loop_name = "DO_WHILE";
	}   
	;

X: %empty 
	{
		string name = ST->name+"."+loop_name+"$"+to_string(table_count);
		table_count++; 

        // First an entry is created
		sym* s = ST->lookup(name); 
		s->nested = new symtable(name);
		s->nested->parent = ST;
		s->name = name;
		s->update(new symboltype("block"));

		currSymbolPtr = s;          // updating the current symbol
	}   
	;

N: %empty
	{
        /*
            This is also useful in backpatching
        */
		$$ = new Statement();
		$$->nextlist=makelist(nextinstr());

		Q.emit("goto","");
	}
	;
%%

/*Auxiliaries*/
void yyerror(string s) {
    // print error
    cout<<s<<endl;
}