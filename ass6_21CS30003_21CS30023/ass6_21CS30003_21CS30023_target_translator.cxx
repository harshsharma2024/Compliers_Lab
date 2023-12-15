#include "ass6_21CS30003_21CS30023_translator.h"

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

extern FILE *yyin;
extern vector<string> stringsToBePrinted;               // by printString meth 

int functionLabelCount=0;							
map<int, int> labelSerialNumber;				                    // map from quad number to label number
ofstream out;								            // asm file stream
vector <quad> Array;						            // quad Array
string asmFileName ="./testcases/output/ass6_21CS30003_21CS30023";		        // asm file name
string testFileName ="./testcases/input/ass6_21CS30003_21CS30023";		// input file name


// take in a string to see if it is a number or not
bool isNumber(string s) {
    if(s.empty())
        return false;

    if(s[0] == '-' || s[0] == '+')
        s = s.substr(1);
    
    if(s.empty())
        return false;

    for(auto u: s)
        if(!isdigit(u)) 
            return false;
        
    return true;
}

void computeActivationRecord(symtable *st) {
    int param_offset = -20;
    int locals_offset = -24;

    for(auto &it: st->symbols) {

        if(it.category == "param") {
            st->ActivationRecord[it.name] = param_offset;
            param_offset += it.size;
        } else if(it.name != "return") {
            st->ActivationRecord[it.name] = locals_offset;
            locals_offset -= it.size;
        }
    }    
    return;
}

inline int getOffset(string arg) {
	return ST->ActivationRecord[arg];
}

// Some helper functions used for optimization
inline bool isPowerOfTwo(int num) {
	return (num&(num - 1)) == 0 && num > 0;
}

int logBaseTwo(int val) {
	int ans = 0;
	while(val != 1) {
		ans++;
		val >>= 1;
	}
	return ans;
}

void generateAsm() {
    // We are generating the .s file here

	// Add the quads for the three address codes
    Array = Q.Array;

    for(auto &u: Array) {
        const auto v = u.op;
        vector<string> operations = {"goto", "<", ">", "<=", ">=", "==", "!="};

        for(auto &operation: operations)
            if(v == operation) {
                int targetLabel = stoi(u.res);
                labelSerialNumber[targetLabel] = 1;
            }
    }

	// Basically we assign a unique map to each unique label using prefix sums
    for(auto it = labelSerialNumber.begin(); it != labelSerialNumber.end(); ++it) {
        if(it != labelSerialNumber.begin()) {
            auto previous = prev(it);
            it->second += previous->second;
        }
    }

    // flatten the global ST
    list<symtable*> tableList;

    for(auto& it: ST->symbols)
        if(it.nested != NULL)
            tableList.push_back(it.nested);

    // compute activation record for each 
    for(auto it: tableList)
        computeActivationRecord(it);
	

    ofstream asmFile;
    asmFile.open(asmFileName + ".s", std::ofstream::out);

    // beginning of the .s file
    asmFile << "\t.file\t";
    asmFile << "\"" << testFileName << ".c\"\n";

    asmFile << "\t.text\n";


    for(auto& it: ST->symbols) {
        if(it.category != "function") {
            if(it.val != "") {
                // no initial value
                if(it.type->type == "char") {
                    asmFile << "\t.globl\t" << it.name << "\n";
                    asmFile << "\t.type\t" << it.name << ", @object\n";
                    asmFile << "\t.size\t" << it.name << ", 1\n";
                    asmFile << it.name << ":\n";
                    asmFile << "\t.byte\t" << it.val << "\n";
                }

                if(it.type->type == "int") {
                    asmFile << "\t.globl\t" << it.name << "\n";
                    asmFile << "\t.data\n";
                    asmFile << "\t.align 4\n";
                    asmFile << "\t.type\t" << it.name << ", @object\n";
                    asmFile << "\t.size\t" << it.name << ", 4\n";
                    asmFile << it.name << ":\n";
                    asmFile << "\t.long\t" << it.val << "\n";
                }	
            } else {
                // initial value specified
                asmFile << "\t.comm\t" << it.name << ", " << it.size << ", " << it.size << "\n";
            }
        }
    }

    // Dealing with the strings to be printed in the program
    if(!stringsToBePrinted.empty()) {
        asmFile << "\t.section\t.rodata\n";
        int cnt = 0;
        for(auto& it: stringsToBePrinted) {
			asmFile << ".LC" << cnt++ << ":\n";
			asmFile << "\t.string\t" << it << "\n";
        }
    }

    // beginning of the text section
    asmFile << "\t.text\n";
    
    vector <string> params;

    int opSerialNumber = 0;

    for(auto it: Array){
        if(labelSerialNumber.count(opSerialNumber))
            asmFile<< ".L"<< labelSerialNumber[opSerialNumber]<<": "<<'\n';

		string op = it.op;
		string arg1 = it.arg1;
		string arg2 = it.arg2;
		string res = it.res;
		string s = arg2;        // change this later
        

        // if param -> add to the param list
		if(op=="param"){
			params.push_back(res);
		} else {

			// Binary Operations
			
			// addition operation
			if (op == "+") {
				// res = arg1 + arg2
				asmFile << "\tmovl \t" << getOffset(arg1) << "(%rbp), " << "%eax" << '\n';
				
				if (isNumber(arg2)) {
					int toAdd = stoi(arg2);
					if(toAdd == 1) {
						// optimization using inc
						asmFile << "\tincl \t"<<"%eax\n";
					} else {
						asmFile << "\taddl \t$" << arg2 << ", " << "%eax\n";
					}
				}
				else {
					asmFile << "\taddl \t" << getOffset(arg2) << "(%rbp), " << "%eax" << '\n';
				}
				asmFile << "\tmovl \t%eax, " << getOffset(res) << "(%rbp)";
			}

			// subtract operation
			else if (op=="-") {
				asmFile << "\tmovl \t" << getOffset(arg1) << "(%rbp), " << "%eax" << '\n';
				asmFile << "\tmovl \t" << getOffset(arg2) << "(%rbp), " << "%edx" << '\n';
				asmFile << "\tsubl \t%edx, %eax\n";
				asmFile << "\tmovl \t%eax, " << getOffset(res) << "(%rbp)";
			}

			// multiplcation operator
			else if (op=="*") {
				asmFile << "\tmovl \t" << getOffset(arg1) << "(%rbp), " << "%eax" << '\n';
                if(isNumber(arg2)) {
					int multiplier = stoi(arg2);
					if(isPowerOfTwo(multiplier)) {
						// strength reduction
						asmFile << "\tsall \t$" << logBaseTwo(multiplier) << ", " << "%eax"<<'\n';
					} else {
                    	asmFile << "\timull \t$" << stoi(arg2) << ", " << "%eax" << endl;
					}
                } else {
                    asmFile  << "\timull \t" << getOffset(arg2) << "(%rbp), " << "%eax" << endl;
                }
                asmFile << "\tmovl \t%eax, " << getOffset(res) << "(%rbp)";			
			}

			// divide operation
			else if(op=="/") {
				// res = arg1 / arg2
				asmFile << "\tmovl \t" << getOffset(arg1) << "(%rbp), " << "%eax" << '\n';
				asmFile << "\tcltd" << '\n';
				asmFile << "\tidivl \t" << getOffset(arg2) << "(%rbp)" << '\n';
				asmFile << "\tmovl \t%eax, " << getOffset(res) << "(%rbp)";  
			}

			// modulo operation
			else if (op=="%") {
				asmFile << "\tmovl \t" << getOffset(arg1) << "(%rbp), " << "%eax" << '\n';
				asmFile << "\tcltd" << '\n';
				asmFile << "\tidivl \t" << getOffset(arg2) << "(%rbp)" << '\n';
				asmFile << "\tmovl \t%edx, " << getOffset(res) << "(%rbp)";		
			}

			// Ignoring bitwise operations
			else if (op=="^")			
				asmFile << "\t"<< res << " = " << arg1 << " ^ " << arg2;
			else if (op=="|")		    
				asmFile << "\t"<< res << " = " << arg1 << " | " << arg2;
			else if (op=="&")		    
				asmFile << "\t"<< res << " = " << arg1 << " & " << arg2;
			
			// Ignoring shift operations
			else if (op=="<<")		    
				asmFile << "\t"<< res << " = " << arg1 << " << " << arg2;
			else if (op==">>")		    
				asmFile << "\t"<< res << " = " << arg1 << " >> " << arg2;

			// assignment
			else if (op=="=")	{
				if (isNumber(arg1))
					asmFile << "\tmovl\t$" << arg1 << ", " << "%eax" << '\n';
				else
					asmFile << "\tmovl\t" << getOffset(arg1) << "(%rbp), " << "%eax" << '\n';
                    
				asmFile << "\tmovl \t%eax, " << getOffset(res) << "(%rbp)";
			}

			// dereferencing
			else if (op=="equalchar")	
				asmFile << "\tmovb\t$" << arg1 << ", " << getOffset(res) << "(%rbp)";

            else if(op=="equalstr")
                asmFile << "\tmovq \t$.LC" << arg1 << ", " << getOffset(res) << "(%rbp)";

			// Relational Operations
			else if (op=="==") {
				asmFile << "\tmovl\t" << getOffset(arg1) << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << getOffset(arg2) << "(%rbp), %eax\n";
				asmFile << "\tje .L" << labelSerialNumber[stoi(res)];
			}

			else if (op=="!=") {
				asmFile << "\tmovl\t" << getOffset(arg1) << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << getOffset(arg2) << "(%rbp), %eax\n";
				asmFile << "\tjne .L" << labelSerialNumber[stoi(res)];
			}
			else if (op=="<") {
				asmFile << "\tmovl\t" << getOffset(arg1) << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << getOffset(arg2) << "(%rbp), %eax\n";
				asmFile << "\tjl .L" << labelSerialNumber[stoi(res)];
			}
			else if (op==">") {
				asmFile << "\tmovl\t" << getOffset(arg1) << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << getOffset(arg2) << "(%rbp), %eax\n";
				asmFile << "\tjg .L" << labelSerialNumber[stoi(res)];
			}
			else if (op==">=") {
				asmFile << "\tmovl\t" << getOffset(arg1) << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << getOffset(arg2) << "(%rbp), %eax\n";
				asmFile << "\tjge .L" << labelSerialNumber[stoi(res)];
			}
			else if (op=="<=") {
				asmFile << "\tmovl\t" << getOffset(arg1) << "(%rbp), %eax\n";
				asmFile << "\tcmpl\t" << getOffset(arg2) << "(%rbp), %eax\n";
				asmFile << "\tjle .L" << labelSerialNumber[stoi(res)];
			}
			else if (op=="goto") {
				asmFile << "\tjmp .L" << labelSerialNumber[stoi(res)];
			}

			// Unary Operators
            // Extracting the address
			else if (op=="=&") {
				asmFile << "\tleaq\t" << getOffset(arg1) << "(%rbp), %rax\n";
				asmFile << "\tmovq \t%rax, " <<  getOffset(res) << "(%rbp)";
			}
            // a = *b
			else if (op=="=*") {
				asmFile << "\tmovq\t" << getOffset(arg1) << "(%rbp), %rax\n";
				asmFile << "\tmovl\t(%rax),%eax\n";
				asmFile << "\tmovl \t%eax, " <<  getOffset(res) << "(%rbp)";	
			}
            // *a = b
			else if (op=="*=") {
				asmFile << "\tmovq\t" << getOffset(res) << "(%rbp), %rax\n";
				asmFile << "\tmovl\t" << getOffset(arg1) << "(%rbp), %edx\n";
				asmFile << "\tmovl\t%edx, (%rax)";
			} 			
            // a = -b
			else if (op=="uminus") {
				if (isNumber(arg1))
					asmFile << "\tmovl\t$" << arg1 << ", " << "%eax" << '\n';
				else
					asmFile << "\tmovl\t" << getOffset(arg1) << "(%rbp), " << "%eax" << '\n';
                    
				asmFile << "\tnegl\t" << "%eax\n";
				asmFile << "\tmovl \t%eax, " << getOffset(res) << "(%rbp)";
			}
            // Ignored for now
			else if (op=="~")		        
				asmFile << res 	<< " = ~" << arg1;
			else if (op=="!")			
				asmFile << res 	<< " = !" << arg1;

			else if (op=="=[]") { 
				asmFile << "\tmovl \t" << getOffset(arg2)<< "(%rbp), "  << "%eax\n";
				asmFile << "\tnegl\t" << "%eax\n";
				asmFile << "\tcltq\n";
				asmFile << "\tmovl \t" << getOffset(arg1) << "(%rbp, %rax, 1), " << "%eax\n";
				asmFile << "\tmovl \t%eax, " <<  getOffset(res) << "(%rbp)";
			}

			else if (op=="[]=") { 
				asmFile << "\tmovl \t" << getOffset(arg2)<< "(%rbp), " << "%edx\n";
				asmFile << "\tmovl \t" << getOffset(arg1) << "(%rbp), "<< "%eax\n";
				asmFile << "\tnegl\t" << "%eax\n";
				asmFile << "\tcltq\n";
				asmFile << "\tmovl \t" << "%edx, " << getOffset(res) << "(%rbp, %rax, 1)";
			}

			else if (op=="return") {
				if(res!="") 
                    asmFile << "\tmovl\t" << getOffset(res) << "(%rbp), "<<"%eax";
				else 
                    asmFile << "\tnop";
			}

			else if (op=="param") {
				params.push_back(res);
			}

			// call a function
			else if (op=="call") {
				// Function Table

				for(int paramCount = 0; paramCount < (int)params.size(); paramCount++) {
					int ourOffset = getOffset(params[paramCount]);

					if(paramCount==0) {
						asmFile << "\tmovq \t" << ourOffset << "(%rbp), " << "%rdi" << '\n';
					}
					else if(paramCount==1) {
						asmFile << "\tmovq \t" << ourOffset << "(%rbp), " << "%rsi" << '\n';
					}
					else if(paramCount==2) {
						asmFile << "\tmovq \t" << ourOffset << "(%rbp), " << "%rdx" << '\n';
					}
					else if(paramCount==3) {
						asmFile << "\tmovq \t" << ourOffset << "(%rbp), " << "%rcx" << '\n';
					}
					else {
						
						asmFile << "\tmovq \t" << ourOffset << "(%rbp), " << "%rdi" << '\n';							
					}
				}

				params.clear();				// Clear parameters after loading

				asmFile << "\tcall\t"<< arg1 << '\n';
				asmFile << "\tmovl\t%eax, " << getOffset(res) << "(%rbp)";
			}

			else if (op=="func") { 

				// prologue of a function
				asmFile << "\t.globl\t" << res << "\n";
				asmFile << "\t.type\t"	<< res << ", @function\n";
				asmFile << res << ": \n";
				asmFile << ".LFB" << functionLabelCount <<":" << '\n';
				asmFile << "\t.cfi_startproc" << '\n';
				asmFile << "\tpushq \t%rbp" << '\n';
				asmFile << "\t.cfi_def_cfa_offset 8" << '\n';
				asmFile << "\t.cfi_offset 5, -8" << '\n';
				asmFile << "\tmovq \t%rsp, %rbp" << '\n';
				asmFile << "\t.cfi_def_cfa_register 5" << '\n';

				ST = globalST->lookup(res)->nested;
				asmFile << "\tsubq\t$" << ST->symbols.back().offset+24 << ", %rsp"<<'\n';
				
				// Function Table

				int paramCount = 0;
                for(auto &symbol: ST->symbols) {
					if (symbol.category== "param") {

						if (paramCount==0)
							asmFile << "\tmovq\t%rdi, " << getOffset(symbol.name) << "(%rbp)";

						else if(paramCount==1)
							asmFile << "\n\tmovq\t%rsi, " << getOffset(symbol.name) << "(%rbp)";

						else if (paramCount==2) 
							asmFile << "\n\tmovq\t%rdx, " << getOffset(symbol.name) << "(%rbp)";
						
						else if(paramCount==3)
							asmFile << "\n\tmovq\t%rcx, " << getOffset(symbol.name) << "(%rbp)";

						paramCount++;
					}
					else 
                        break;
				}
			}
				
			// epilogue of a function
			else if (op=="funcend") { 

				asmFile << "\tleave\n";
				asmFile << "\t.cfi_restore 5\n";
				asmFile << "\t.cfi_def_cfa 4, 4\n";
				asmFile << "\tret\n";
				asmFile << "\t.cfi_endproc" << '\n';
				asmFile << ".LFE" << functionLabelCount++ <<":" << '\n';
				asmFile << "\t.size\t"<< res << ", .-" << res;
			}
			else
			{
				asmFile << "\tnop";
			} 
			
			asmFile << '\n';
		}
        opSerialNumber++;
    }
	asmFile.close();
    
    return;
}



int main(int argc, char *argv[]) {
    label_table.clear();

    table_count = 0;                                                                                    // count of nested table
    globalST=new symtable("Global");                                                                    // Global Symbol Table
    ST = globalST;
	symbolTableSuffix = ".Global";
	lookupInsideParent = true;
	listOffunctions.clear();
    parST = NULL;
    loop_name = "";
	// assert(argc == 2);
	asmFileName = asmFileName + argv[1];
	testFileName = testFileName + argv[1];
    if(yyparse()){
        cout<<"Error while parsing\n";
    }
    else{
        cout<<"All functions\n";
		cout<<listOffunctions.size()<<"\n";
		for(auto funcs: listOffunctions)
		{
			cout<<funcs->name<<"\n";
			flattenFunctionSymbolTable(funcs);
		}
		globalST->update(); 
        cout << "\nSYMBOL TABLES:\n\n";                                                                                // print all Symbol Tables
		globalST->print();                                                                                 // update the global Symbol Table
        cout<<"\n";
        Q.print();                                                                                          // print the three address codes
		
        generateAsm();
    }
}
