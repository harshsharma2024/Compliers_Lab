#include <stdio.h>
#include "header.h"
extern int yylex();
extern int yylineno;
extern char *yytext;

int main()
{
    int vtoken;
    while (vtoken = yylex())
    {
        switch (vtoken)
        {
        // case WS:break;
        case KEYWORD:
            printf("KEYWORD                 :: TEXT : %s ,   Token Number : %d \n", yytext, vtoken);
            break;

        case IDENTIFIER:
            printf("IDENTIFIER              :: TEXT : %s ,  Token Number : %d \n", yytext, vtoken);
            break;
        case INT_CONST:
            printf("INTEGER CONSTANT        :: TEXT : %s ,  Token Number : %d \n", yytext, vtoken);
            break;
        case FLT_CONST:
            printf("FLOATING POINT CONSTANT :: TEXT : %s ,  Token Number : %d \n", yytext, vtoken);
            break;
        case CHAR_CONST:
            printf("CHARACTER CONSTANT      :: TEXT : %s ,  Token Number : %d \n", yytext, vtoken);
            break;
        case STRLIT:
            printf("STRING LITERAL          :: TEXT : %s , Token Number : %d \n", yytext, vtoken);
            break;
        case PUNC:
            printf("PUNCTUATOR              :: TEXT : %s , Token Number : %d  \n", yytext, vtoken);
            break;
        case SINGLE_LINE_COMMENT:
			printf("  SINGLE LINE COMMENT   :: Token Number : %d , TEXT : %s  \n", vtoken, yytext);
			break;
		case MULTI_LINE_COMMENT:
			printf("MULTI LINE COMMENT :: Token Number : %d , TEXT : %s  \n", vtoken, yytext);
			break;
        
        case OTHERS:
            printf("ERROR :: syntax error at line %d , found: %s \n", yylineno, yytext);
            break;
        }
    }
}