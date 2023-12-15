/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    OTHERS = 258,                  /* OTHERS  */
    AUTO = 259,                    /* AUTO  */
    BREAK = 260,                   /* BREAK  */
    CASE = 261,                    /* CASE  */
    CHAR = 262,                    /* CHAR  */
    CONST = 263,                   /* CONST  */
    CONTINUE = 264,                /* CONTINUE  */
    DEFAULT = 265,                 /* DEFAULT  */
    DO = 266,                      /* DO  */
    DOUBLE = 267,                  /* DOUBLE  */
    ELSE = 268,                    /* ELSE  */
    ENUM = 269,                    /* ENUM  */
    EXTERN = 270,                  /* EXTERN  */
    REGISTER = 271,                /* REGISTER  */
    FLOAT = 272,                   /* FLOAT  */
    FOR = 273,                     /* FOR  */
    GOTO = 274,                    /* GOTO  */
    IF = 275,                      /* IF  */
    INLINE = 276,                  /* INLINE  */
    INT = 277,                     /* INT  */
    LONG = 278,                    /* LONG  */
    RESTRICT = 279,                /* RESTRICT  */
    RETURN = 280,                  /* RETURN  */
    SHORT = 281,                   /* SHORT  */
    SIGNED = 282,                  /* SIGNED  */
    SIZEOF = 283,                  /* SIZEOF  */
    STATIC = 284,                  /* STATIC  */
    STRUCT = 285,                  /* STRUCT  */
    SWITCH = 286,                  /* SWITCH  */
    TYPEDEF = 287,                 /* TYPEDEF  */
    UNION = 288,                   /* UNION  */
    UNSIGNED = 289,                /* UNSIGNED  */
    VOID = 290,                    /* VOID  */
    VOLATILE = 291,                /* VOLATILE  */
    WHILE = 292,                   /* WHILE  */
    _BOOL = 293,                   /* _BOOL  */
    _COMPLEX = 294,                /* _COMPLEX  */
    _IMAGINARY = 295,              /* _IMAGINARY  */
    IDENTIFIER = 296,              /* IDENTIFIER  */
    INTEGER_CONST = 297,           /* INTEGER_CONST  */
    CHAR_CONST = 298,              /* CHAR_CONST  */
    FLOAT_CONST = 299,             /* FLOAT_CONST  */
    STRING_LITERAL = 300,          /* STRING_LITERAL  */
    OPENSB = 301,                  /* OPENSB  */
    CLOSESB = 302,                 /* CLOSESB  */
    OPENRB = 303,                  /* OPENRB  */
    CLOSERB = 304,                 /* CLOSERB  */
    OPENCB = 305,                  /* OPENCB  */
    CLOSECB = 306,                 /* CLOSECB  */
    DOT = 307,                     /* DOT  */
    RIGHTARROW = 308,              /* RIGHTARROW  */
    PLUSPLUS = 309,                /* PLUSPLUS  */
    MINUSMINS = 310,               /* MINUSMINS  */
    BAND = 311,                    /* BAND  */
    KSTAR = 312,                   /* KSTAR  */
    PLUS = 313,                    /* PLUS  */
    MINUS = 314,                   /* MINUS  */
    TILDA = 315,                   /* TILDA  */
    NOT = 316,                     /* NOT  */
    DIVIDE = 317,                  /* DIVIDE  */
    MODULO = 318,                  /* MODULO  */
    LEFTS = 319,                   /* LEFTS  */
    RIGHTS = 320,                  /* RIGHTS  */
    LESSTHAN = 321,                /* LESSTHAN  */
    GREATERTHAN = 322,             /* GREATERTHAN  */
    LESSEQUAL = 323,               /* LESSEQUAL  */
    GREATEREQUAL = 324,            /* GREATEREQUAL  */
    EQUALEQUAL = 325,              /* EQUALEQUAL  */
    NOTEQUAL = 326,                /* NOTEQUAL  */
    XOR = 327,                     /* XOR  */
    BITWISEOR = 328,               /* BITWISEOR  */
    AND = 329,                     /* AND  */
    OR = 330,                      /* OR  */
    QUESTIONMARK = 331,            /* QUESTIONMARK  */
    COLON = 332,                   /* COLON  */
    SEMICOLON = 333,               /* SEMICOLON  */
    DOTDOTDOT = 334,               /* DOTDOTDOT  */
    EQUAL = 335,                   /* EQUAL  */
    MULEQUAL = 336,                /* MULEQUAL  */
    DIVEQUAL = 337,                /* DIVEQUAL  */
    MODEQUAL = 338,                /* MODEQUAL  */
    PLUSEQUAL = 339,               /* PLUSEQUAL  */
    MINUSEQUAL = 340,              /* MINUSEQUAL  */
    SHIFTLEQUAL = 341,             /* SHIFTLEQUAL  */
    SHIFTREQUAL = 342,             /* SHIFTREQUAL  */
    ANDEQUAL = 343,                /* ANDEQUAL  */
    XOREQUAL = 344,                /* XOREQUAL  */
    OREQUAL = 345,                 /* OREQUAL  */
    COMMA = 346,                   /* COMMA  */
    HASH = 347                     /* HASH  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define OTHERS 258
#define AUTO 259
#define BREAK 260
#define CASE 261
#define CHAR 262
#define CONST 263
#define CONTINUE 264
#define DEFAULT 265
#define DO 266
#define DOUBLE 267
#define ELSE 268
#define ENUM 269
#define EXTERN 270
#define REGISTER 271
#define FLOAT 272
#define FOR 273
#define GOTO 274
#define IF 275
#define INLINE 276
#define INT 277
#define LONG 278
#define RESTRICT 279
#define RETURN 280
#define SHORT 281
#define SIGNED 282
#define SIZEOF 283
#define STATIC 284
#define STRUCT 285
#define SWITCH 286
#define TYPEDEF 287
#define UNION 288
#define UNSIGNED 289
#define VOID 290
#define VOLATILE 291
#define WHILE 292
#define _BOOL 293
#define _COMPLEX 294
#define _IMAGINARY 295
#define IDENTIFIER 296
#define INTEGER_CONST 297
#define CHAR_CONST 298
#define FLOAT_CONST 299
#define STRING_LITERAL 300
#define OPENSB 301
#define CLOSESB 302
#define OPENRB 303
#define CLOSERB 304
#define OPENCB 305
#define CLOSECB 306
#define DOT 307
#define RIGHTARROW 308
#define PLUSPLUS 309
#define MINUSMINS 310
#define BAND 311
#define KSTAR 312
#define PLUS 313
#define MINUS 314
#define TILDA 315
#define NOT 316
#define DIVIDE 317
#define MODULO 318
#define LEFTS 319
#define RIGHTS 320
#define LESSTHAN 321
#define GREATERTHAN 322
#define LESSEQUAL 323
#define GREATEREQUAL 324
#define EQUALEQUAL 325
#define NOTEQUAL 326
#define XOR 327
#define BITWISEOR 328
#define AND 329
#define OR 330
#define QUESTIONMARK 331
#define COLON 332
#define SEMICOLON 333
#define DOTDOTDOT 334
#define EQUAL 335
#define MULEQUAL 336
#define DIVEQUAL 337
#define MODEQUAL 338
#define PLUSEQUAL 339
#define MINUSEQUAL 340
#define SHIFTLEQUAL 341
#define SHIFTREQUAL 342
#define ANDEQUAL 343
#define XOREQUAL 344
#define OREQUAL 345
#define COMMA 346
#define HASH 347

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 112 "ass5_21CS30003_21CS30023.y"

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

#line 265 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
