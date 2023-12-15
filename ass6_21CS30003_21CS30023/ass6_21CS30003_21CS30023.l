%{
#include <stdio.h>
#include "ass6_21CS30003_21CS30023_translator.h"
#include<cstring>
#include "ass6_21CS30003_21CS30023.tab.h"

// #include "ass6_21CS30003_21CS30023_translator.tab.h"
extern YYSTYPE yylval;
extern void yyerror(const char *);
int lineno=1;
%}



/* Multi-line comment */
%x MULTI_LINE_COMMENT_BODY
/* Single-line comment */
%x SINGLE_LINE_COMMENT_BODY

/*KEYWORDS DIRECTLY DETECTED IN ACTIONs */

/* Identifiers */
IDENTIFIER_NONDIG [A-Za-z_]
DIG    [0-9]
IDENTIFIER     {IDENTIFIER_NONDIG}({IDENTIFIER_NONDIG}|{DIG})*
/* Constant */

/* Integer */
NONZERO_DIG    [1-9]
INTEGER_CONSTANT      {NONZERO_DIG}({DIG})*|"0"
/* Float */
DIG_SEQ        ({DIG})+
SIGN           [+-]
FRAC           ({DIG_SEQ}?"."{DIG_SEQ})|({DIG_SEQ}".")
EXP            ("E"{SIGN}?{DIG_SEQ})|("e"{SIGN}?{DIG_SEQ})
FLOATING_CONSTANT      ({FRAC}{EXP}?)|({DIG_SEQ}{EXP})
/* ENUM */
ENUM_CONST     {IDENTIFIER}
ESCAPSEQ       "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
/* Character */
C_CHAR         {ESCAPSEQ}|[^("\'"|"\\"|"\n")]
C_CHAR_SEQUENCE             {C_CHAR}+
CHARACTER_CONSTANT     \'{C_CHAR_SEQUENCE}\'
CONSTANT        {INT_CONST}|{FLT_CONST}|{ENUM_CONST}|{CHAR_CONST}


/* String Literal */
SCHAR   {ESCAPSEQ}|[^\"\n\\]
SCHARSEQ    {SCHAR}+
STRING_LITERAL    \"({SCHARSEQ}?)\"


/* Space */
WS [ \t\v\f]
NEWLINE [\r?\n]
OTHERS    .


/* Action */
%%



"auto"              {return AUTO;}
"break"             {return BREAK;}
"case"              {return CASE;}
"char"              {return CHAR;}
"const"             {return CONST;}
"continue"          {return CONTINUE;}
"default"           {return DEFAULT;}
"do"                {return DO;}
"double"            {return DOUBLE;}
"else"              {return ELSE;}
"enum"              {return ENUM;}
"extern"            {return EXTERN;}
"register"          {return REGISTER;}
"float"             {return FLOAT;}
"for"               {return FOR;}
"goto"              {return GOTO;}
"if"                {return IF;}
"inline"            {return INLINE;}
"int"               {return INT;}
"long"              {return LONG;}
"restrict"          {return RESTRICT;}
"return"            {return RETURN;}
"short"             {return SHORT;}
"signed"            {return SIGNED;}
"sizeof"            {return SIZEOF;}
"static"            {return STATIC;}
"struct"            {return STRUCT;}
"switch"            {return SWITCH;}
"typedef"           {return TYPEDEF;}
"union"             {return UNION;}
"unsigned"          {return UNSIGNED;}
"void"              {return VOID;}
"volatile"          {return VOLATILE;}
"while"             {return WHILE;}
"_Bool"             {return _BOOL;}
"_Complex"          {return _COMPLEX;}
"_Imaginary"        {return _IMAGINARY;}

{IDENTIFIER}                {
                                yylval.symp = ST->lookup(yytext);
                                return IDENTIFIER;
                            }
{FLOATING_CONSTANT}            {
                                yylval.float_val = atof(yytext);
                                return FLOAT_CONST;
                            }
{INTEGER_CONSTANT}             {
                                yylval.int_val = atoi(yytext);
                                return INTEGER_CONST;
                            }
{CHARACTER_CONSTANT}           {
                                yylval.char_val = yytext;
                                return CHAR_CONST;
                            }
{STRING_LITERAL}            {
                                yylval.char_val = yytext;
                                return STRING_LITERAL;
                            }



"["                 {return OPENSB;}
"]"                 {return CLOSESB;}
"("                 {return OPENRB;}
")"                 {return CLOSERB;}
"{"                 {return OPENCB;}
"}"                 {return CLOSECB;}
"."                 {return DOT;}
"->"                {return RIGHTARROW;}
"++"                {return PLUSPLUS;}
"--"                {return MINUSMINS;}
"&"                 {return BAND;}
"*"                 {return KSTAR;}
"+"                 {return PLUS;}
"-"                 {return MINUS;}
"~"                 {return TILDA;}
"!"                 {return NOT;}
"/"                 {return DIVIDE;}
"%"                 {return MODULO;}
"<<"                {return LEFTS;}
">>"                {return RIGHTS;}
"<"                 {return LESSTHAN;}
">"                 {return GREATERTHAN;}
"<="                {return LESSEQUAL;}
">="                {return GREATEREQUAL;}
"=="                {return EQUALEQUAL;}
"!="                {return NOTEQUAL;}
"^"                 {return XOR;}
"|"                 {return BITWISEOR;}
"&&"                {return AND;}
"||"                {return OR;}
"?"                 {return QUESTIONMARK;}
":"                 {return COLON;}
";"                 {return SEMICOLON;}
"..."               {return DOTDOTDOT;}
"="                 {return EQUAL;}
"*="                {return MULEQUAL;}
"/="                {return DIVEQUAL;}
"%="                {return MODEQUAL;}
"+="                {return PLUSEQUAL;}
"-="                {return MINUSEQUAL;}
"<<="               {return SHIFTLEQUAL;}
">>="               {return SHIFTREQUAL;}
"&="                {return ANDEQUAL;}
"^="                {return XOREQUAL;}
"|="                {return OREQUAL;}
","                 {return COMMA;}
"#"                 {return HASH;}


"/*"                            { BEGIN(MULTI_LINE_COMMENT_BODY); }
<MULTI_LINE_COMMENT_BODY>"*/"   { BEGIN(INITIAL); }
<MULTI_LINE_COMMENT_BODY>.      { }
<MULTI_LINE_COMMENT_BODY>"\n"   { lineno++;  }

"//"                            { BEGIN(SINGLE_LINE_COMMENT_BODY); }
<SINGLE_LINE_COMMENT_BODY>"\n"  { BEGIN(INITIAL); lineno++; }
<SINGLE_LINE_COMMENT_BODY>.     { }

{NEWLINE}           {lineno++;}

{WS}    {}

%%

int yywrap (void) {return 1;}
