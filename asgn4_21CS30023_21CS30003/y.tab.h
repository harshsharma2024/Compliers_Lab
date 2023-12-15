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
    CONSTANT = 296,                /* CONSTANT  */
    IDENTIFIER = 297,              /* IDENTIFIER  */
    STRING_LITERAL = 298,          /* STRING_LITERAL  */
    INTEGER_CONSTANT = 299,        /* INTEGER_CONSTANT  */
    FLOATING_CONSTANT = 300,       /* FLOATING_CONSTANT  */
    CHARACTER_CONSTANT = 301,      /* CHARACTER_CONSTANT  */
    OPENSB = 302,                  /* OPENSB  */
    CLOSESB = 303,                 /* CLOSESB  */
    OPENRB = 304,                  /* OPENRB  */
    CLOSERB = 305,                 /* CLOSERB  */
    OPENCB = 306,                  /* OPENCB  */
    CLOSECB = 307,                 /* CLOSECB  */
    DOT = 308,                     /* DOT  */
    RIGHTARROW = 309,              /* RIGHTARROW  */
    PLUSPLUS = 310,                /* PLUSPLUS  */
    MINUSMINS = 311,               /* MINUSMINS  */
    BAND = 312,                    /* BAND  */
    KSTAR = 313,                   /* KSTAR  */
    PLUS = 314,                    /* PLUS  */
    MINUS = 315,                   /* MINUS  */
    TILDA = 316,                   /* TILDA  */
    NOT = 317,                     /* NOT  */
    DIVIDE = 318,                  /* DIVIDE  */
    MODULO = 319,                  /* MODULO  */
    LEFTS = 320,                   /* LEFTS  */
    RIGHTS = 321,                  /* RIGHTS  */
    LESSTHAN = 322,                /* LESSTHAN  */
    GREATERTHAN = 323,             /* GREATERTHAN  */
    LESSEQUAL = 324,               /* LESSEQUAL  */
    GREATEREQUAL = 325,            /* GREATEREQUAL  */
    EQUALEQUAL = 326,              /* EQUALEQUAL  */
    NOTEQUAL = 327,                /* NOTEQUAL  */
    XOR = 328,                     /* XOR  */
    BITWISEOR = 329,               /* BITWISEOR  */
    AND = 330,                     /* AND  */
    OR = 331,                      /* OR  */
    QUESTIONMARK = 332,            /* QUESTIONMARK  */
    COLON = 333,                   /* COLON  */
    SEMICOLON = 334,               /* SEMICOLON  */
    DOTDOTDOT = 335,               /* DOTDOTDOT  */
    EQUAL = 336,                   /* EQUAL  */
    MULEQUAL = 337,                /* MULEQUAL  */
    DIVEQUAL = 338,                /* DIVEQUAL  */
    MODEQUAL = 339,                /* MODEQUAL  */
    PLUSEQUAL = 340,               /* PLUSEQUAL  */
    MINUSEQUAL = 341,              /* MINUSEQUAL  */
    SHIFTLEQUAL = 342,             /* SHIFTLEQUAL  */
    SHIFTREQUAL = 343,             /* SHIFTREQUAL  */
    ANDEQUAL = 344,                /* ANDEQUAL  */
    XOREQUAL = 345,                /* XOREQUAL  */
    OREQUAL = 346,                 /* OREQUAL  */
    COMMA = 347,                   /* COMMA  */
    HASH = 348                     /* HASH  */
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
#define CONSTANT 296
#define IDENTIFIER 297
#define STRING_LITERAL 298
#define INTEGER_CONSTANT 299
#define FLOATING_CONSTANT 300
#define CHARACTER_CONSTANT 301
#define OPENSB 302
#define CLOSESB 303
#define OPENRB 304
#define CLOSERB 305
#define OPENCB 306
#define CLOSECB 307
#define DOT 308
#define RIGHTARROW 309
#define PLUSPLUS 310
#define MINUSMINS 311
#define BAND 312
#define KSTAR 313
#define PLUS 314
#define MINUS 315
#define TILDA 316
#define NOT 317
#define DIVIDE 318
#define MODULO 319
#define LEFTS 320
#define RIGHTS 321
#define LESSTHAN 322
#define GREATERTHAN 323
#define LESSEQUAL 324
#define GREATEREQUAL 325
#define EQUALEQUAL 326
#define NOTEQUAL 327
#define XOR 328
#define BITWISEOR 329
#define AND 330
#define OR 331
#define QUESTIONMARK 332
#define COLON 333
#define SEMICOLON 334
#define DOTDOTDOT 335
#define EQUAL 336
#define MULEQUAL 337
#define DIVEQUAL 338
#define MODEQUAL 339
#define PLUSEQUAL 340
#define MINUSEQUAL 341
#define SHIFTLEQUAL 342
#define SHIFTREQUAL 343
#define ANDEQUAL 344
#define XOREQUAL 345
#define OREQUAL 346
#define COMMA 347
#define HASH 348

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 10 "asgn4_21CS30023.y"

    int intVal;
    float floatVal;
    char *charVal;
    char *stringVal;
    char *identifierVal;

#line 261 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
