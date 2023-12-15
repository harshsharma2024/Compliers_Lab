%{
#include "header.h"
%}


/* SINGLE Line Comments*/
SINGLE_LINE_COMMENT    "//"[^("\n")]*
/* Multi Line Comments*/
MULTI_LINE_COMMENT    "/*"([^*]|"*"[^/])*"*/"

/* Keywords */
KEYWORD1					"auto"|"break"|"case"|"char"|"const"|"continue"
KEYWORD2                    "default"|"do"|"double"|"else"|"enum"|"extern"
KEYWORD3				    "register"|"float"|"for"|"goto"|"if"|"inline"
KEYWORD4					"int"|"long"|"restrict"|"return"|"short"|"signed"
KEYWORD5                    "sizeof"|"static"|"struct"|"switch"|"typedef"|"union"
KEYWORD6 					"unsigned"|"void"|"volatile"|"while"|"_Bool"|"_Complex"|"_Imaginary"
KEYWORD 					{KEYWORD1}|{KEYWORD2}|{KEYWORD3}|{KEYWORD4}|{KEYWORD5}|{KEYWORD6}

/* Identifiers */
IDENTIFIER_NONDIG [A-Za-z_]
DIG    [0-9]
IDENTIFIER     {IDENTIFIER_NONDIG}({IDENTIFIER_NONDIG}|{DIG})*
/* Constant */

/* Integer */
NONZERO_DIG    [1-9]
INT_CONST      {NONZERO_DIG}({DIG})*|0
/* Float */
DIG_SEQ        ({DIG})+
SIGN           [+-]
FRAC           ({DIG_SEQ}?"."{DIG_SEQ})|({DIG_SEQ}".")
EXP            ("E"{SIGN}?{DIG_SEQ})|("e"{SIGN}?{DIG_SEQ})
FLT_CONST      ({FRAC}{EXP}?)|({DIG_SEQ}{EXP})
/* ENUM */
ENUM_CONST     {IDENTIFIER}
ESCAPSEQ	   "\\\'"|"\\\""|"\\?"|"\\\\"|"\\a"|"\\b"|"\\f"|"\\n"|"\\r"|"\\t"|"\\v"
/* Character */
C_CHAR         {ESCAPSEQ}|[^\'\n\\]
C_CHAR_SEQUENCE				{C_CHAR}+
CHAR_CONST     "\'"{C_CHAR_SEQUENCE}"\'"
CONSTANT        {INT_CONST}|{FLT_CONST}|{ENUM_CONST}|{CHAR_CONST}


/* String Literal */
SCHAR   {ESCAPSEQ}|[^\"\n\\]
SCHARSEQ    {SCHAR}+
STRLIT    \"({SCHARSEQ}?)\"

/* Punctuators */
PUNC1					"["|"]"|"("|")"|"{"|"}"|"."|"->"
PUNC2					"++"|"--"|"&"|"*"|"+"|"-"|"~"|"!"
PUNC3					"/"|"%"|"<<"|">>"|"<"|">"|"<="|">="
PUNC4                 "=="|"!="|"^"|"|"|"&&"|"||"|"?"|":"
PUNC5					 ";"|"..."|"="|"*="|"/="|"%="|"+="|"-="
PUNC6					"<<="|">>="|"&="|"^="|"|="|","|"#" 
PUNC 					{PUNC1}|{PUNC2}|{PUNC3}|{PUNC4}|{PUNC5}|{PUNC6}

/* Space */
WS [\t\v\f \r?\n]
OTHERS    .


/* Action */
%%
{SINGLE_LINE_COMMENT}   {return SINGLE_LINE_COMMENT;}
{MULTI_LINE_COMMENT}   {return MULTI_LINE_COMMENT;}
{KEYWORD}   {return KEYWORD;}
{IDENTIFIER} {return IDENTIFIER;}
{INT_CONST}  {return INT_CONST;}
{FLT_CONST}  {return FLT_CONST;}
{CHAR_CONST}  {return CHAR_CONST;}
{STRLIT}    {return STRLIT;}
{PUNC}      {return PUNC;}
{WS}    {}
{OTHERS}    {return OTHERS;}
%%
