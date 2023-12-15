%{

    #include<stdio.h>
    extern int yylex();
    extern int lineno;
    void yyerror(char *);
    extern char * yytext;
%}

%union {
    int intVal;
    float floatVal;
    char *charVal;
    char *stringVal;
    char *identifierVal;
}

%start translation_unit



// Keywords

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

%token CONSTANT

%token IDENTIFIER

%token STRING_LITERAL

%token<stringVal> IDENTIFIER
%token<intVal> INTEGER_CONSTANT
%token<floatVal> FLOATING_CONSTANT
%token<charVal> CHARACTER_CONSTANT
%token<stringVal> STRING_LITERAL

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


%start translation_unit

%%
//1. Expressions
// Primary Expression
primary_expression : IDENTIFIER | INTEGER_CONSTANT | FLOATING_CONSTANT | CHARACTER_CONSTANT | STRING_LITERAL | OPENRB expression CLOSERB { printf("PRIMARY_EXPRESSION\n");};

// Postfix Expression
postfix_expression : primary_expression | postfix_expression OPENSB expression CLOSESB | postfix_expression OPENRB argument_expression_list CLOSERB| postfix_expression OPENRB CLOSERB  | postfix_expression DOT IDENTIFIER | postfix_expression RIGHTARROW IDENTIFIER | postfix_expression PLUSPLUS | postfix_expression MINUSMINS | OPENRB type_name CLOSERB OPENCB initializer_list CLOSECB |  OPENRB type_name CLOSERB OPENCB initializer_list COMMA CLOSECB {printf("found POSTFIX_EXPRESSION\n");};

// Argument Expression List
argument_expression_list : assignment_expression | argument_expression_list COMMA assignment_expression { printf("found ARGUMENT_EXPRESSION_LIST\n");};

// Unary Expression
unary_expression : postfix_expression | PLUSPLUS unary_expression | MINUSMINS unary_expression | unary_operator cast_expression | SIZEOF unary_expression | SIZEOF OPENRB type_name CLOSERB {printf("UNARY_EXPRESSION\n");};

// Unary Operator
unary_operator: BAND | KSTAR | PLUS | MINUS | TILDA | NOT {printf("found UNARY_OPERATOR\n");};

// Cast expression
cast_expression : unary_expression | OPENRB type_name CLOSERB cast_expression {printf("found CAST_EXPRESSION\n");};

// Multiplicative expression
multiplicative_expression : cast_expression | multiplicative_expression KSTAR cast_expression | multiplicative_expression DIVIDE cast_expression | multiplicative_expression MODULO cast_expression {printf("found MULTIPLICATIVE_EXPRESSION\n");};

// Additive Expression
additive_expression : multiplicative_expression | additive_expression PLUS multiplicative_expression | additive_expression MINUS multiplicative_expression {printf("found ADDITIVE_EXPRESSION\n");};

// Shift Expression
shift_expression : additive_expression | shift_expression LEFTS additive_expression | shift_expression RIGHTS additive_expression {printf("found SHIFT_EXPRESSION\n");};

// Relational Expression
relational_expression : shift_expression | relational_expression LESSTHAN shift_expression | relational_expression GREATERTHAN shift_expression | relational_expression LESSEQUAL shift_expression | relational_expression GREATEREQUAL shift_expression {printf("found RELATIONAL_EXPRESSION\n");};

// Equality Expression
equality_expression : relational_expression | equality_expression EQUALEQUAL relational_expression | equality_expression NOTEQUAL relational_expression {printf("found EQUALITY_EXPRESSION\n");};

// And Expression
and_expression : equality_expression | and_expression BAND equality_expression {printf("found AND_EXPRESSION\n");};

// Xor Expression
exclusive_or_expression : and_expression | exclusive_or_expression XOR and_expression {printf("found EXCLUSIVE_OR_EXPRESSION \n");}; 

// Or expression
inclusive_or_expression : exclusive_or_expression | inclusive_or_expression BITWISEOR exclusive_or_expression {printf("found INCLUSIVE_OR_EXPRESSION\n");};

// Logical AND expression
logical_and_expression : inclusive_or_expression | logical_and_expression AND inclusive_or_expression {printf("found LOGICAL_AND_EXPRESSION\n");};

// Logical OR expression
logical_or_expression : logical_and_expression | logical_or_expression OR logical_and_expression {printf("found LOGICAL_OR_EXPRESSION \n");};

// Conditional expression
conditional_expression : logical_or_expression | logical_or_expression QUESTIONMARK expression COLON conditional_expression {printf("found CONDITIONAL_EXPRESSION\n");};

// Assignment expression
assignment_expression : conditional_expression | unary_expression assignment_operator assignment_expression {printf("found ASSIGNMENT_EXPRESSION \n");};

// Assignment operator
assignment_operator : EQUAL| MULEQUAL | DIVEQUAL | MODEQUAL | PLUSEQUAL | MINUSEQUAL | SHIFTLEQUAL | SHIFTREQUAL | ANDEQUAL | XOREQUAL | OREQUAL {printf("found ASSIGNMENT_OPERATOR\n");};

// Expression
expression : assignment_expression | expression COMMA assignment_expression {printf("found EXPRESSION\n");};

// Constant Expression
constant_expression : conditional_expression {printf("found CONSTANT_EXPRESSION\n");};

// 2.DECLARATIONS


// declaration
declaration :  declaration_specifiers init_declarator_list SEMICOLON | declaration_specifiers SEMICOLON {printf("found DECLARATION\n");};

// Declaration Specifiers
declaration_specifiers : storage_class_specifier declaration_specifiers_opt | type_specifier declaration_specifiers_opt |type_qualifier declaration_specifiers_opt | function_specifier declaration_specifiers_opt {printf("found DECLARATION_SPECIFIERS\n");};

declaration_specifiers_opt:
                            declaration_specifiers
                                { printf("declaration_specifiers_op\n"); }
                            |
                                { printf("epsilon\n"); }
                            ;

// Init declarator list
init_declarator_list : init_declarator | init_declarator_list COMMA init_declarator {printf("found INIT_DECLARATOR_LIST\n");};

// Init Declarator
init_declarator : declarator | declarator EQUAL initializer {printf("found INIT_DECLARATOR\n");};

// Storage Class Specifier
storage_class_specifier : EXTERN | STATIC | AUTO | REGISTER {printf("found STORAGE_CLASS_SPECIFIER\n");};

// Type Specifier
type_specifier : VOID | CHAR | SHORT | INT | LONG | FLOAT | DOUBLE | SIGNED | UNSIGNED | _BOOL | _COMPLEX | _IMAGINARY | enum_specifier {printf("found TYPE_SPECIFIER\n");};

// Specifier Qualifier List
specifier_qualifier_list : type_specifier specifier_qualifier_list_opt | type_qualifier specifier_qualifier_list_opt {printf("found SPECIFIER_QUALIFIER_LIST\n");};

specifier_qualifier_list_opt:
                                specifier_qualifier_list
                                    { printf("specifier_qualifier_list \n"); }
                                | 
                                    { printf("epsilon \n"); }
                                ;

// Enum Specifier
enum_specifier : ENUM identifier_opt OPENCB enumerator_list CLOSECB | ENUM identifier_opt OPENCB enumerator_list COMMA CLOSECB | ENUM IDENTIFIER {printf("found ENUM_SPECIFIER\n");};

identifier_opt:
                IDENTIFIER 
                    { printf("identifier \n"); }
                | 
                    { printf("epsilon"); }
                ;

// Enumerator List
enumerator_list : enumerator | enumerator_list COMMA enumerator {printf("found ENUMERATOR_LIST\n");};

// Enumerator
enumerator : IDENTIFIER | IDENTIFIER EQUAL constant_expression {printf("found ENUMERATOR\n");};

// Type Qualifier
type_qualifier : CONST | VOLATILE | RESTRICT {printf("found TYPE_QUAIFIER \n");};

// Function Specifier
function_specifier : INLINE {printf("found FUNCTION_SPECIFIER\n");};

// Declarator
declarator : pointer_opt direct_declarator {printf("found DECLARATOR\n");};

pointer_opt:
            pointer
                { printf("pointer \n"); }
            |
                { printf("epsilon\n"); }
            ;





// Direct Declarator
direct_declarator:
                    IDENTIFIER 
                    | OPENRB declarator CLOSERB
                    | direct_declarator OPENSB type_qualifier_list_opt assignment_expression_opt CLOSESB
                    | direct_declarator OPENSB STATIC type_qualifier_list_opt assignment_expression CLOSESB
                    | direct_declarator OPENSB type_qualifier_list STATIC assignment_expression CLOSESB
                    | direct_declarator OPENSB type_qualifier_list_opt KSTAR CLOSESB
                    | direct_declarator OPENRB parameter_type_list CLOSERB
                    | direct_declarator OPENRB identifier_list_opt CLOSERB
                        { printf("direct_declarator\n"); }
                    ;

type_qualifier_list_opt:
                        type_qualifier_list
                            { printf("type_qualifier_list \n"); }
                        |
                            { printf("epsilon\n"); }
                        ;

assignment_expression_opt:
                            assignment_expression
                                { printf("assignment_expression\n"); }
                            |
                                { printf("epsilon\n"); }
                            ;

identifier_list_opt:
                    identifier_list
                        { printf("identifier_list \n"); }
                    |
                        { printf("epsilon\n"); }
                    ;




// Pointer
pointer : KSTAR type_qualifier_list_opt | KSTAR type_qualifier_list_opt pointer {printf("found POINTER\n");};

// Type Qualifier List
type_qualifier_list : type_qualifier | type_qualifier_list type_qualifier {printf("found TYPE_QUALIFIER_LIST\n");};

// Parameter Type List
parameter_type_list : parameter_list | parameter_list COMMA DOTDOTDOT {printf("found PARAMETER_TYPE_LIST\n");};

// Parameter List
parameter_list : parameter_declaration | parameter_list COMMA parameter_declaration {printf("found PARAMETER_LIST\n");};

// Parameter Declaration
parameter_declaration : declaration_specifiers declarator | declaration_specifiers {printf("found PARAMETER_DECLARATION\n");};

// Identifier List
identifier_list: IDENTIFIER | identifier_list COMMA IDENTIFIER {printf("found IDENTIFIER_LIST\n");};

// Type Name
type_name : specifier_qualifier_list {printf("found TYPE_NAME\n");};

// Initializer
initializer : assignment_expression | OPENCB initializer_list CLOSECB | OPENCB initializer_list COMMA CLOSECB {printf("found INITIALIZER\n");};

// Initializer List
initializer_list : designation_opt initializer | initializer_list COMMA designation_opt initializer {printf("found INITIALIZER_LIST\n");};
designation_opt : designation
                  |
                  ;

// Designation
designation : designator_list EQUAL{printf("found DESIGNATION\n");};

// Designator List
designator_list : designator | designator_list designator {printf("found DESIGNATOR_LIST\n");};

// Designator
designator : OPENSB constant_expression CLOSESB | DOT IDENTIFIER {printf("found DESIGNATOR\n");};


// 3.STATEMENTS

// Statement
statement : labeled_statement | compound_statement | expression_statement | selection_statement | iteration_statement | jump_statement {printf("found STATEMENT\n");} ;

// Labeled Statement
labeled_statement : IDENTIFIER COLON statement | CASE constant_expression COLON statement | DEFAULT COLON statement {printf("found LABELED_STATMENT\n");};

// Compound Statement
compound_statement : OPENCB CLOSECB | OPENCB block_item_list CLOSECB {printf("found COMPOUND_STATEMENT\n");};

// Block Item List
block_item_list : block_item | block_item_list block_item {printf("found BLOCK_ITEM_LIST\n");};

// Block Item
block_item : declaration | statement {printf("found BLOCK_ITEM\n");};

// Expression Statemt
expression_statement : SEMICOLON | expression SEMICOLON {printf("found EXPRESSION_STATEMENT\n");};

// Selection Statement
selection_statement : IF OPENRB expression CLOSERB statement | IF OPENRB expression CLOSERB statement ELSE statement | SWITCH OPENRB expression CLOSERB statement {printf("found SELECTION_STATEMENT\n");};

// Looping Statements
iteration_statement : WHILE OPENRB expression CLOSERB statement | DO statement WHILE OPENRB expression CLOSERB SEMICOLON | FOR OPENRB expression_opt SEMICOLON expression_opt SEMICOLON expression_opt CLOSERB statement | FOR OPENRB declaration expression_opt SEMICOLON expression_opt CLOSERB statement {printf("found ITERATION_STATEMENT\n");};

expression_opt:
                expression
                    { printf("expression\n"); }
                |
                    { printf("epsilon\n"); }
                ;

// Jump Statements
jump_statement : GOTO IDENTIFIER SEMICOLON | CONTINUE SEMICOLON | BREAK SEMICOLON | RETURN SEMICOLON | RETURN expression SEMICOLON {printf("found JUMP_STATEMENT\n");} ;


// 4.EXTERNAL DEFINITIONS

// Translation Unit
translation_unit : external_declaration | translation_unit external_declaration {printf("found TRANSLATION_UNIT\n");};

// External Declaration
external_declaration : function_definition | declaration {printf("found EXTERNAL_DECLARATION\n");};

// Function Definition
function_definition : declaration_specifiers declarator declaration_list compound_statement | declaration_specifiers declarator compound_statement {printf("found FUNCTION DEFINITION\n");};

// Declartation List
declaration_list : declaration | declaration_list declaration {printf("found DECLARATION LIST\n");};
%%

void yyerror(char *err)
{
  printf("error::%s, line no.=%d, TEXT: %s \n", err,lineno,yytext);
}