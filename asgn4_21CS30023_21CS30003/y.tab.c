/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "asgn4_21CS30023.y"


    #include<stdio.h>
    extern int yylex();
    extern int lineno;
    void yyerror(char *);
    extern char * yytext;

#line 80 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
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

#line 327 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_OTHERS = 3,                     /* OTHERS  */
  YYSYMBOL_AUTO = 4,                       /* AUTO  */
  YYSYMBOL_BREAK = 5,                      /* BREAK  */
  YYSYMBOL_CASE = 6,                       /* CASE  */
  YYSYMBOL_CHAR = 7,                       /* CHAR  */
  YYSYMBOL_CONST = 8,                      /* CONST  */
  YYSYMBOL_CONTINUE = 9,                   /* CONTINUE  */
  YYSYMBOL_DEFAULT = 10,                   /* DEFAULT  */
  YYSYMBOL_DO = 11,                        /* DO  */
  YYSYMBOL_DOUBLE = 12,                    /* DOUBLE  */
  YYSYMBOL_ELSE = 13,                      /* ELSE  */
  YYSYMBOL_ENUM = 14,                      /* ENUM  */
  YYSYMBOL_EXTERN = 15,                    /* EXTERN  */
  YYSYMBOL_REGISTER = 16,                  /* REGISTER  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_FOR = 18,                       /* FOR  */
  YYSYMBOL_GOTO = 19,                      /* GOTO  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_INLINE = 21,                    /* INLINE  */
  YYSYMBOL_INT = 22,                       /* INT  */
  YYSYMBOL_LONG = 23,                      /* LONG  */
  YYSYMBOL_RESTRICT = 24,                  /* RESTRICT  */
  YYSYMBOL_RETURN = 25,                    /* RETURN  */
  YYSYMBOL_SHORT = 26,                     /* SHORT  */
  YYSYMBOL_SIGNED = 27,                    /* SIGNED  */
  YYSYMBOL_SIZEOF = 28,                    /* SIZEOF  */
  YYSYMBOL_STATIC = 29,                    /* STATIC  */
  YYSYMBOL_STRUCT = 30,                    /* STRUCT  */
  YYSYMBOL_SWITCH = 31,                    /* SWITCH  */
  YYSYMBOL_TYPEDEF = 32,                   /* TYPEDEF  */
  YYSYMBOL_UNION = 33,                     /* UNION  */
  YYSYMBOL_UNSIGNED = 34,                  /* UNSIGNED  */
  YYSYMBOL_VOID = 35,                      /* VOID  */
  YYSYMBOL_VOLATILE = 36,                  /* VOLATILE  */
  YYSYMBOL_WHILE = 37,                     /* WHILE  */
  YYSYMBOL__BOOL = 38,                     /* _BOOL  */
  YYSYMBOL__COMPLEX = 39,                  /* _COMPLEX  */
  YYSYMBOL__IMAGINARY = 40,                /* _IMAGINARY  */
  YYSYMBOL_CONSTANT = 41,                  /* CONSTANT  */
  YYSYMBOL_IDENTIFIER = 42,                /* IDENTIFIER  */
  YYSYMBOL_STRING_LITERAL = 43,            /* STRING_LITERAL  */
  YYSYMBOL_INTEGER_CONSTANT = 44,          /* INTEGER_CONSTANT  */
  YYSYMBOL_FLOATING_CONSTANT = 45,         /* FLOATING_CONSTANT  */
  YYSYMBOL_CHARACTER_CONSTANT = 46,        /* CHARACTER_CONSTANT  */
  YYSYMBOL_OPENSB = 47,                    /* OPENSB  */
  YYSYMBOL_CLOSESB = 48,                   /* CLOSESB  */
  YYSYMBOL_OPENRB = 49,                    /* OPENRB  */
  YYSYMBOL_CLOSERB = 50,                   /* CLOSERB  */
  YYSYMBOL_OPENCB = 51,                    /* OPENCB  */
  YYSYMBOL_CLOSECB = 52,                   /* CLOSECB  */
  YYSYMBOL_DOT = 53,                       /* DOT  */
  YYSYMBOL_RIGHTARROW = 54,                /* RIGHTARROW  */
  YYSYMBOL_PLUSPLUS = 55,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINS = 56,                 /* MINUSMINS  */
  YYSYMBOL_BAND = 57,                      /* BAND  */
  YYSYMBOL_KSTAR = 58,                     /* KSTAR  */
  YYSYMBOL_PLUS = 59,                      /* PLUS  */
  YYSYMBOL_MINUS = 60,                     /* MINUS  */
  YYSYMBOL_TILDA = 61,                     /* TILDA  */
  YYSYMBOL_NOT = 62,                       /* NOT  */
  YYSYMBOL_DIVIDE = 63,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 64,                    /* MODULO  */
  YYSYMBOL_LEFTS = 65,                     /* LEFTS  */
  YYSYMBOL_RIGHTS = 66,                    /* RIGHTS  */
  YYSYMBOL_LESSTHAN = 67,                  /* LESSTHAN  */
  YYSYMBOL_GREATERTHAN = 68,               /* GREATERTHAN  */
  YYSYMBOL_LESSEQUAL = 69,                 /* LESSEQUAL  */
  YYSYMBOL_GREATEREQUAL = 70,              /* GREATEREQUAL  */
  YYSYMBOL_EQUALEQUAL = 71,                /* EQUALEQUAL  */
  YYSYMBOL_NOTEQUAL = 72,                  /* NOTEQUAL  */
  YYSYMBOL_XOR = 73,                       /* XOR  */
  YYSYMBOL_BITWISEOR = 74,                 /* BITWISEOR  */
  YYSYMBOL_AND = 75,                       /* AND  */
  YYSYMBOL_OR = 76,                        /* OR  */
  YYSYMBOL_QUESTIONMARK = 77,              /* QUESTIONMARK  */
  YYSYMBOL_COLON = 78,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 79,                 /* SEMICOLON  */
  YYSYMBOL_DOTDOTDOT = 80,                 /* DOTDOTDOT  */
  YYSYMBOL_EQUAL = 81,                     /* EQUAL  */
  YYSYMBOL_MULEQUAL = 82,                  /* MULEQUAL  */
  YYSYMBOL_DIVEQUAL = 83,                  /* DIVEQUAL  */
  YYSYMBOL_MODEQUAL = 84,                  /* MODEQUAL  */
  YYSYMBOL_PLUSEQUAL = 85,                 /* PLUSEQUAL  */
  YYSYMBOL_MINUSEQUAL = 86,                /* MINUSEQUAL  */
  YYSYMBOL_SHIFTLEQUAL = 87,               /* SHIFTLEQUAL  */
  YYSYMBOL_SHIFTREQUAL = 88,               /* SHIFTREQUAL  */
  YYSYMBOL_ANDEQUAL = 89,                  /* ANDEQUAL  */
  YYSYMBOL_XOREQUAL = 90,                  /* XOREQUAL  */
  YYSYMBOL_OREQUAL = 91,                   /* OREQUAL  */
  YYSYMBOL_COMMA = 92,                     /* COMMA  */
  YYSYMBOL_HASH = 93,                      /* HASH  */
  YYSYMBOL_YYACCEPT = 94,                  /* $accept  */
  YYSYMBOL_primary_expression = 95,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 96,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 97,  /* argument_expression_list  */
  YYSYMBOL_unary_expression = 98,          /* unary_expression  */
  YYSYMBOL_unary_operator = 99,            /* unary_operator  */
  YYSYMBOL_cast_expression = 100,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 101, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 102,      /* additive_expression  */
  YYSYMBOL_shift_expression = 103,         /* shift_expression  */
  YYSYMBOL_relational_expression = 104,    /* relational_expression  */
  YYSYMBOL_equality_expression = 105,      /* equality_expression  */
  YYSYMBOL_and_expression = 106,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 107,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 108,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 109,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 110,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 111,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 112,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 113,      /* assignment_operator  */
  YYSYMBOL_expression = 114,               /* expression  */
  YYSYMBOL_constant_expression = 115,      /* constant_expression  */
  YYSYMBOL_declaration = 116,              /* declaration  */
  YYSYMBOL_declaration_specifiers = 117,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 118, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 119,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 120,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 121,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 122,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 123, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 124, /* specifier_qualifier_list_opt  */
  YYSYMBOL_enum_specifier = 125,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 126,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 127,          /* enumerator_list  */
  YYSYMBOL_enumerator = 128,               /* enumerator  */
  YYSYMBOL_type_qualifier = 129,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 130,       /* function_specifier  */
  YYSYMBOL_declarator = 131,               /* declarator  */
  YYSYMBOL_pointer_opt = 132,              /* pointer_opt  */
  YYSYMBOL_direct_declarator = 133,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 134,  /* type_qualifier_list_opt  */
  YYSYMBOL_assignment_expression_opt = 135, /* assignment_expression_opt  */
  YYSYMBOL_identifier_list_opt = 136,      /* identifier_list_opt  */
  YYSYMBOL_pointer = 137,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 138,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 139,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 140,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 141,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 142,          /* identifier_list  */
  YYSYMBOL_type_name = 143,                /* type_name  */
  YYSYMBOL_initializer = 144,              /* initializer  */
  YYSYMBOL_initializer_list = 145,         /* initializer_list  */
  YYSYMBOL_designation_opt = 146,          /* designation_opt  */
  YYSYMBOL_designation = 147,              /* designation  */
  YYSYMBOL_designator_list = 148,          /* designator_list  */
  YYSYMBOL_designator = 149,               /* designator  */
  YYSYMBOL_statement = 150,                /* statement  */
  YYSYMBOL_labeled_statement = 151,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 152,       /* compound_statement  */
  YYSYMBOL_block_item_list = 153,          /* block_item_list  */
  YYSYMBOL_block_item = 154,               /* block_item  */
  YYSYMBOL_expression_statement = 155,     /* expression_statement  */
  YYSYMBOL_selection_statement = 156,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 157,      /* iteration_statement  */
  YYSYMBOL_expression_opt = 158,           /* expression_opt  */
  YYSYMBOL_jump_statement = 159,           /* jump_statement  */
  YYSYMBOL_translation_unit = 160,         /* translation_unit  */
  YYSYMBOL_external_declaration = 161,     /* external_declaration  */
  YYSYMBOL_function_definition = 162,      /* function_definition  */
  YYSYMBOL_declaration_list = 163          /* declaration_list  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   999

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  70
/* YYNRULES -- Number of rules.  */
#define YYNRULES  206
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  340

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   348


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   130,   130,   130,   130,   130,   130,   130,   133,   133,
     133,   133,   133,   133,   133,   133,   133,   133,   136,   136,
     139,   139,   139,   139,   139,   139,   142,   142,   142,   142,
     142,   142,   145,   145,   148,   148,   148,   148,   151,   151,
     151,   154,   154,   154,   157,   157,   157,   157,   157,   160,
     160,   160,   163,   163,   166,   166,   169,   169,   172,   172,
     175,   175,   178,   178,   181,   181,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   187,   187,   190,
     196,   196,   199,   199,   199,   199,   202,   205,   209,   209,
     212,   212,   215,   215,   215,   215,   218,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   218,   221,
     221,   224,   227,   231,   231,   231,   234,   237,   241,   241,
     244,   244,   247,   247,   247,   250,   253,   256,   259,   268,
     269,   270,   271,   272,   273,   274,   275,   280,   283,   287,
     290,   294,   297,   304,   304,   307,   307,   310,   310,   313,
     313,   316,   316,   319,   319,   322,   325,   325,   325,   328,
     328,   329,   330,   334,   337,   337,   340,   340,   346,   346,
     346,   346,   346,   346,   349,   349,   349,   352,   352,   355,
     355,   358,   358,   361,   361,   364,   364,   364,   367,   367,
     367,   367,   370,   373,   377,   377,   377,   377,   377,   383,
     383,   386,   386,   389,   389,   392,   392
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "OTHERS", "AUTO",
  "BREAK", "CASE", "CHAR", "CONST", "CONTINUE", "DEFAULT", "DO", "DOUBLE",
  "ELSE", "ENUM", "EXTERN", "REGISTER", "FLOAT", "FOR", "GOTO", "IF",
  "INLINE", "INT", "LONG", "RESTRICT", "RETURN", "SHORT", "SIGNED",
  "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION", "UNSIGNED",
  "VOID", "VOLATILE", "WHILE", "_BOOL", "_COMPLEX", "_IMAGINARY",
  "CONSTANT", "IDENTIFIER", "STRING_LITERAL", "INTEGER_CONSTANT",
  "FLOATING_CONSTANT", "CHARACTER_CONSTANT", "OPENSB", "CLOSESB", "OPENRB",
  "CLOSERB", "OPENCB", "CLOSECB", "DOT", "RIGHTARROW", "PLUSPLUS",
  "MINUSMINS", "BAND", "KSTAR", "PLUS", "MINUS", "TILDA", "NOT", "DIVIDE",
  "MODULO", "LEFTS", "RIGHTS", "LESSTHAN", "GREATERTHAN", "LESSEQUAL",
  "GREATEREQUAL", "EQUALEQUAL", "NOTEQUAL", "XOR", "BITWISEOR", "AND",
  "OR", "QUESTIONMARK", "COLON", "SEMICOLON", "DOTDOTDOT", "EQUAL",
  "MULEQUAL", "DIVEQUAL", "MODEQUAL", "PLUSEQUAL", "MINUSEQUAL",
  "SHIFTLEQUAL", "SHIFTREQUAL", "ANDEQUAL", "XOREQUAL", "OREQUAL", "COMMA",
  "HASH", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "declaration_specifiers_opt",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "pointer_opt", "direct_declarator",
  "type_qualifier_list_opt", "assignment_expression_opt",
  "identifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "expression_opt",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-266)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-153)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     768,  -266,  -266,  -266,  -266,    32,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
    -266,  -266,  -266,   -28,   768,   768,  -266,   768,   768,   694,
    -266,  -266,   -13,    -9,    25,  -266,   -35,  -266,   254,    -8,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,    75,  -266,
      11,    25,  -266,    11,   333,   770,  -266,   -28,  -266,   653,
    -266,    11,    96,    55,    -4,  -266,  -266,  -266,  -266,    66,
      71,   837,   118,   -32,   457,   168,   177,   172,   594,   859,
     178,   179,   151,  -266,  -266,  -266,  -266,   572,  -266,   881,
     881,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,    86,
      81,   837,  -266,    61,    53,   108,   126,   137,   174,   159,
     160,   158,   134,  -266,  -266,    22,  -266,  -266,  -266,  -266,
     399,  -266,  -266,  -266,  -266,  -266,  -266,    62,  -266,  -266,
    -266,  -266,   187,    69,   731,   837,  -266,    -2,  -266,  -266,
    -266,   161,  -266,   457,   201,   516,   163,   837,  -266,    28,
     572,  -266,   837,   837,   457,   -38,   959,  -266,   959,   190,
     572,  -266,  -266,   837,   792,   202,   203,  -266,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,  -266,
     837,  -266,   837,   837,   837,   837,   837,   837,   837,   837,
     837,   837,   837,   837,   837,   837,   837,   837,   837,   837,
     837,  -266,   837,  -266,  -266,   837,   204,     3,   770,  -266,
     -21,  -266,  -266,    25,   903,    94,  -266,   -39,   193,   197,
     156,  -266,   165,  -266,  -266,  -266,   457,  -266,   206,   167,
     837,   171,  -266,   -34,  -266,   213,   -33,   -30,  -266,  -266,
    -266,  -266,  -266,   815,   214,   -40,  -266,   -29,  -266,  -266,
    -266,  -266,  -266,  -266,  -266,    61,    61,    53,    53,   108,
     108,   108,   108,   126,   126,   137,   174,   159,   160,   158,
       7,  -266,   219,  -266,  -266,   105,  -266,  -266,  -266,   837,
     224,  -266,   225,   837,  -266,  -266,  -266,   294,   209,  -266,
     837,   173,   837,   457,   223,   457,   457,    62,  -266,   223,
    -266,  -266,   837,   837,  -266,  -266,   770,   231,  -266,  -266,
     234,  -266,  -266,  -266,   -27,   837,   205,   272,  -266,  -266,
       4,  -266,  -266,  -266,  -266,  -266,   207,   241,   837,   457,
    -266,   107,  -266,   457,   245,  -266,  -266,  -266,   457,  -266
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    94,    97,   122,   102,   117,    92,    95,   101,   125,
      99,   100,   124,    98,   103,    93,   104,    96,   123,   105,
     106,   107,   202,   128,    87,    87,   108,    87,    87,     0,
     199,   201,   115,     0,   138,    81,     0,    88,    90,     0,
     127,    86,    82,    83,    84,    85,     1,   200,     0,   145,
     143,   137,    80,   128,     0,     0,   205,   128,   204,     0,
     129,   128,   126,   120,     0,   118,   144,   146,    89,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     6,     3,     4,     5,     0,   177,     0,
       0,    26,    27,    28,    29,    30,    31,   183,     8,    20,
      32,     0,    34,    38,    41,    44,    49,    52,    54,    56,
      58,    60,    62,    64,    77,     0,   181,   182,   168,   169,
       0,   179,   170,   171,   172,   173,     2,   162,   156,    91,
     206,   203,     0,   138,   142,     0,   113,     0,   196,    32,
      79,     0,   195,     0,     0,   193,     0,     0,   197,     0,
       0,    24,     0,     0,     0,     0,   112,   155,   112,     0,
       0,    21,    22,     0,     0,     0,     0,    14,    15,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
       0,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   184,     0,   178,   180,     0,     0,     0,     0,   161,
       0,   164,   130,   138,   140,   137,   153,   128,     0,     0,
     147,   149,   141,   121,   114,   119,     0,   176,     0,   192,
     193,     0,   194,     0,   198,     0,     0,     0,   174,     7,
     111,   109,   110,     0,     0,     0,    11,     0,    18,    12,
      13,    65,    35,    36,    37,    39,    40,    42,    43,    45,
      46,    47,    48,    50,    51,    53,    55,    57,    59,    61,
       0,    78,     0,   167,   157,   162,   159,   163,   165,     0,
      27,   139,     0,     0,   151,   136,   135,     0,     0,   175,
       0,     0,   193,     0,    25,     0,     0,   162,    33,     0,
       9,    10,     0,     0,   166,   158,     0,     0,   134,   131,
       0,   148,   150,   154,     0,   193,     0,   185,   187,   188,
       0,    19,    63,   160,   132,   133,     0,     0,   193,     0,
      16,   162,   189,     0,     0,   186,    17,   191,     0,   190
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -266,  -266,  -266,  -266,    -7,  -266,   -92,    27,    37,    15,
      21,   102,   103,   106,   109,   101,  -266,   -68,   -53,  -266,
     -74,  -121,   -23,     0,   104,  -266,   251,  -266,   -50,    44,
     154,  -266,  -266,  -266,   176,   -12,  -266,   -18,  -266,  -266,
    -126,  -266,  -266,   264,   186,  -266,  -266,    35,  -266,  -115,
    -202,    29,  -265,  -266,  -266,   114,   -73,  -266,     9,  -266,
     211,  -266,  -266,  -266,  -212,  -266,  -266,   296,  -266,  -266
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    98,    99,   247,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   180,
     115,   141,    22,    57,    42,    36,    37,    24,    25,   157,
     241,    26,    33,    64,    65,    27,    28,    69,    39,    62,
      50,   282,   218,    40,    51,   219,   220,   221,   222,   159,
     129,   207,   208,   209,   210,   211,   117,   118,   119,   120,
     121,   122,   123,   124,   231,   125,    29,    30,    31,    59
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   144,   128,   140,   149,    38,   276,   214,   300,   181,
     306,  -152,   239,   155,   223,    56,   293,   295,   291,    34,
     296,   301,    49,   326,    41,    41,   205,    41,    41,    23,
      34,   116,   206,     3,    60,   235,   130,   156,  -116,    67,
      63,    61,    48,   132,    52,   244,   143,    58,   136,    12,
     224,    35,   202,  -152,   202,   274,   330,    53,   202,   202,
     277,    18,   202,   302,   139,   202,   306,   140,   131,    34,
     227,   229,   151,   233,    32,   158,   155,     3,   236,   237,
     316,   238,   161,   162,   272,   303,   155,   279,   137,   245,
     252,   253,   254,    12,   139,   275,   331,   116,   213,   202,
     156,   201,     3,   327,   323,    18,   156,   234,   156,   205,
     156,   248,   185,   186,   202,   206,   334,    63,    12,   182,
     202,    49,   230,   283,   183,   184,   270,   251,   139,    43,
      18,    44,    45,   163,   217,   164,   135,   140,   158,   165,
     166,   167,   168,   133,   158,   134,   158,    55,   158,   271,
     138,   298,   205,   289,   205,   128,   229,   305,   206,   336,
     206,   281,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   187,   188,   139,   139,   139,   139,   139,
     139,   139,   139,   139,   139,   139,   139,   139,   139,   139,
     139,   139,   139,   189,   190,   191,   192,   142,   139,   284,
     240,    49,   240,    67,   259,   260,   261,   262,   193,   194,
     199,   200,   255,   256,   263,   264,   314,   145,   229,   146,
     317,   147,   318,   319,   257,   258,   307,   152,   153,   154,
     310,   195,   196,   198,   197,   322,   139,   212,   228,   226,
     243,   229,   232,   285,   249,   250,   273,   286,   287,   321,
     292,   313,   315,   128,   229,   290,   335,   288,     1,   202,
     337,     2,     3,   294,   299,   339,     4,   304,     5,     6,
       7,     8,   308,   309,   297,     9,    10,    11,    12,   324,
      13,    14,   325,    15,   328,   329,   332,   217,    16,    17,
      18,   333,    19,    20,    21,   338,   139,   265,     1,   266,
     269,     2,     3,   267,    68,    54,     4,   268,     5,     6,
       7,     8,   242,   225,    66,     9,    10,    11,    12,   215,
      13,    14,   312,    15,   278,    47,   320,     0,    16,    17,
      18,   204,    19,    20,    21,    55,     0,     1,    70,    71,
       2,     3,    72,    73,    74,     4,     0,     5,     6,     7,
       8,    75,    76,    77,     9,    10,    11,    12,    78,    13,
      14,    79,    15,     0,    80,     0,     0,    16,    17,    18,
      81,    19,    20,    21,   311,    82,    83,    84,    85,    86,
       0,     0,    87,     0,    54,    88,     0,     0,    89,    90,
      91,    92,    93,    94,    95,    96,     0,     0,     0,     0,
       0,     0,     0,     1,    70,    71,     2,     3,    72,    73,
      74,     4,    97,     5,     6,     7,     8,    75,    76,    77,
       9,    10,    11,    12,    78,    13,    14,    79,    15,     0,
      80,     0,     0,    16,    17,    18,    81,    19,    20,    21,
       0,    82,    83,    84,    85,    86,     0,     0,    87,     0,
      54,   203,     0,     0,    89,    90,    91,    92,    93,    94,
      95,    96,    70,    71,     0,     0,    72,    73,    74,     0,
       0,     0,     0,     0,     0,    75,    76,    77,    97,     0,
       0,     0,    78,     0,     0,    79,     0,     0,    80,     0,
       0,     0,     0,     0,    81,     0,     0,     0,     0,    82,
      83,    84,    85,    86,     0,     0,    87,     0,    54,     0,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
       1,     0,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     6,     7,     8,     0,     0,    97,     9,    10,    11,
      12,     0,    13,    14,    79,    15,     0,     0,     0,     0,
      16,    17,    18,     0,    19,    20,    21,     0,   126,    83,
      84,    85,    86,     0,     0,    87,     0,     0,     0,     0,
       0,    89,    90,    91,    92,    93,    94,    95,    96,     2,
       3,     0,     0,     0,     4,     0,     5,     0,     0,     8,
       0,     0,     0,     0,    10,    11,    12,     0,    13,    14,
      79,     0,     0,     0,     0,     0,    16,    17,    18,     0,
      19,    20,    21,     0,   126,    83,    84,    85,    86,     0,
       0,    87,    79,     0,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    95,    96,     0,   126,    83,    84,    85,
      86,     0,     0,    87,     0,     0,     0,     0,     0,    89,
      90,    91,    92,    93,    94,    95,    96,     1,     0,     0,
       2,     3,     0,     0,     0,     4,     0,     5,     6,     7,
       8,     0,     0,   148,     9,    10,    11,    12,     0,    13,
      14,     0,    15,     0,     0,     0,     0,    16,    17,    18,
       0,    19,    20,    21,    46,     0,     0,     0,     1,     0,
       0,     2,     3,     0,    54,     0,     4,     0,     5,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     1,     0,     0,     2,     3,
       0,     0,     0,     4,     0,     5,     6,     7,     8,     0,
       0,     0,     9,    10,    11,    12,     0,    13,    14,     0,
      15,     0,     0,     0,     0,    16,    17,    18,     0,    19,
      20,    21,     1,   216,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     8,     0,     0,     0,     9,
      10,    11,    12,     0,    13,    14,     0,    15,    79,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,     0,   126,    83,    84,    85,    86,     0,     0,    87,
      79,   127,     0,     0,     0,    89,    90,    91,    92,    93,
      94,    95,    96,     0,   126,    83,    84,    85,    86,     0,
       0,    87,   246,    79,     0,     0,     0,    89,    90,    91,
      92,    93,    94,    95,    96,     0,     0,   126,    83,    84,
      85,    86,     0,     0,    87,    79,   297,     0,     0,     0,
      89,    90,    91,    92,    93,    94,    95,    96,     0,   126,
      83,    84,    85,    86,     0,     0,    87,    79,     0,     0,
       0,     0,    89,    90,    91,    92,    93,    94,    95,    96,
       0,   126,    83,    84,    85,    86,     0,     0,   150,    79,
       0,     0,     0,     0,    89,    90,    91,    92,    93,    94,
      95,    96,     0,   126,    83,    84,    85,    86,     0,     0,
     160,    79,     0,     0,     0,     0,    89,    90,    91,    92,
      93,    94,    95,    96,     0,   126,    83,    84,    85,    86,
       0,     0,    87,     0,     0,     0,     0,     0,    89,    90,
      91,   280,    93,    94,    95,    96,     2,     3,     0,     0,
       0,     4,     0,     5,     0,     0,     8,     0,     0,     0,
       0,    10,    11,    12,     0,    13,    14,     0,     0,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    74,    55,    71,    78,    23,   208,   133,    48,   101,
     275,    50,    50,    87,   135,    38,    50,    50,   230,    58,
      50,    50,    34,    50,    24,    25,    47,    27,    28,    29,
      58,    54,    53,     8,    42,   150,    59,    87,    51,    51,
      42,    49,    51,    61,    79,   160,    78,    38,    52,    24,
      52,    79,    92,    92,    92,    52,    52,    92,    92,    92,
      81,    36,    92,    92,    71,    92,   331,   135,    59,    58,
     143,   145,    79,   147,    42,    87,   150,     8,   152,   153,
     292,   154,    89,    90,   205,    78,   160,   213,    92,   163,
     182,   183,   184,    24,   101,    92,    92,   120,    29,    92,
     150,    79,     8,   315,   306,    36,   156,    79,   158,    47,
     160,   164,    59,    60,    92,    53,   328,    42,    24,    58,
      92,   133,   145,    29,    63,    64,   200,   180,   135,    25,
      36,    27,    28,    47,   134,    49,    81,   205,   150,    53,
      54,    55,    56,    47,   156,    49,   158,    81,   160,   202,
      79,   243,    47,   226,    47,   208,   230,    52,    53,    52,
      53,   214,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    65,    66,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,    67,    68,    69,    70,    79,   205,   217,
     156,   213,   158,   215,   189,   190,   191,   192,    71,    72,
      76,    77,   185,   186,   193,   194,   290,    49,   292,    42,
     293,    49,   295,   296,   187,   188,   279,    49,    49,    78,
     283,    57,    73,    75,    74,   303,   243,    50,    37,    78,
      50,   315,    79,    50,    42,    42,    42,    50,    92,   302,
      79,    42,    79,   306,   328,    49,   329,    92,     4,    92,
     333,     7,     8,    50,    50,   338,    12,    48,    14,    15,
      16,    17,    48,    48,    51,    21,    22,    23,    24,    48,
      26,    27,    48,    29,    79,    13,    79,   287,    34,    35,
      36,    50,    38,    39,    40,    50,   303,   195,     4,   196,
     199,     7,     8,   197,    53,    51,    12,   198,    14,    15,
      16,    17,   158,   137,    50,    21,    22,    23,    24,   133,
      26,    27,   287,    29,   210,    29,   297,    -1,    34,    35,
      36,   120,    38,    39,    40,    81,    -1,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    80,    42,    43,    44,    45,    46,
      -1,    -1,    49,    -1,    51,    52,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    79,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    -1,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    49,    -1,
      51,    52,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,     5,     6,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    79,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,
      43,    44,    45,    46,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
       4,    -1,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      14,    15,    16,    17,    -1,    -1,    79,    21,    22,    23,
      24,    -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    35,    36,    -1,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,     7,
       8,    -1,    -1,    -1,    12,    -1,    14,    -1,    -1,    17,
      -1,    -1,    -1,    -1,    22,    23,    24,    -1,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    -1,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    -1,
      -1,    49,    28,    -1,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    42,    43,    44,    45,
      46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,     4,    -1,    -1,
       7,     8,    -1,    -1,    -1,    12,    -1,    14,    15,    16,
      17,    -1,    -1,    79,    21,    22,    23,    24,    -1,    26,
      27,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,    36,
      -1,    38,    39,    40,     0,    -1,    -1,    -1,     4,    -1,
      -1,     7,     8,    -1,    51,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    -1,    38,    39,    40,     4,    -1,    -1,     7,     8,
      -1,    -1,    -1,    12,    -1,    14,    15,    16,    17,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    26,    27,    -1,
      29,    -1,    -1,    -1,    -1,    34,    35,    36,    -1,    38,
      39,    40,     4,    42,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,
      22,    23,    24,    -1,    26,    27,    -1,    29,    28,    -1,
      -1,    -1,    34,    35,    36,    -1,    38,    39,    40,    -1,
      -1,    -1,    42,    43,    44,    45,    46,    -1,    -1,    49,
      28,    51,    -1,    -1,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    42,    43,    44,    45,    46,    -1,
      -1,    49,    50,    28,    -1,    -1,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    -1,    -1,    42,    43,    44,
      45,    46,    -1,    -1,    49,    28,    51,    -1,    -1,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    42,
      43,    44,    45,    46,    -1,    -1,    49,    28,    -1,    -1,
      -1,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    42,    43,    44,    45,    46,    -1,    -1,    49,    28,
      -1,    -1,    -1,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    42,    43,    44,    45,    46,    -1,    -1,
      49,    28,    -1,    -1,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    42,    43,    44,    45,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,     7,     8,    -1,    -1,
      -1,    12,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    23,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    -1,    38,    39,    40
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,     8,    12,    14,    15,    16,    17,    21,
      22,    23,    24,    26,    27,    29,    34,    35,    36,    38,
      39,    40,   116,   117,   121,   122,   125,   129,   130,   160,
     161,   162,    42,   126,    58,    79,   119,   120,   131,   132,
     137,   117,   118,   118,   118,   118,     0,   161,    51,   129,
     134,   138,    79,    92,    51,    81,   116,   117,   152,   163,
      42,    49,   133,    42,   127,   128,   137,   129,   120,   131,
       5,     6,     9,    10,    11,    18,    19,    20,    25,    28,
      31,    37,    42,    43,    44,    45,    46,    49,    52,    55,
      56,    57,    58,    59,    60,    61,    62,    79,    95,    96,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   114,   116,   150,   151,   152,
     153,   154,   155,   156,   157,   159,    42,    51,   112,   144,
     116,   152,   131,    47,    49,    81,    52,    92,    79,    98,
     111,   115,    79,    78,   150,    49,    42,    49,    79,   114,
      49,    98,    49,    49,    78,   114,   122,   123,   129,   143,
      49,    98,    98,    47,    49,    53,    54,    55,    56,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
     113,   100,    58,    63,    64,    59,    60,    65,    66,    67,
      68,    69,    70,    71,    72,    57,    73,    74,    75,    76,
      77,    79,    92,    52,   154,    47,    53,   145,   146,   147,
     148,   149,    50,    29,   134,   138,    42,   117,   136,   139,
     140,   141,   142,   115,    52,   128,    78,   150,    37,   114,
     116,   158,    79,   114,    79,   143,   114,   114,   150,    50,
     123,   124,   124,    50,   143,   114,    50,    97,   112,    42,
      42,   112,   100,   100,   100,   101,   101,   102,   102,   103,
     103,   103,   103,   104,   104,   105,   106,   107,   108,   109,
     114,   112,   115,    42,    52,    92,   144,    81,   149,   134,
      58,   112,   135,    29,   131,    50,    50,    92,    92,   150,
      49,   158,    79,    50,    50,    50,    50,    51,   100,    50,
      48,    50,    92,    78,    48,    52,   146,   112,    48,    48,
     112,    80,   141,    42,   114,    79,   158,   150,   150,   150,
     145,   112,   111,   144,    48,    48,    50,   158,    79,    13,
      52,    92,    79,    50,   158,   150,    52,   150,    50,   150
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    95,    95,    95,    95,    95,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    97,    97,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
      99,    99,   100,   100,   101,   101,   101,   101,   102,   102,
     102,   103,   103,   103,   104,   104,   104,   104,   104,   105,
     105,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     116,   116,   117,   117,   117,   117,   118,   118,   119,   119,
     120,   120,   121,   121,   121,   121,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   129,   130,   131,   132,   132,   133,
     133,   133,   133,   133,   133,   133,   133,   134,   134,   135,
     135,   136,   136,   137,   137,   138,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   143,   144,   144,   144,   145,
     145,   146,   146,   147,   148,   148,   149,   149,   150,   150,
     150,   150,   150,   150,   151,   151,   151,   152,   152,   153,
     153,   154,   154,   155,   155,   156,   156,   156,   157,   157,
     157,   157,   158,   158,   159,   159,   159,   159,   159,   160,
     160,   161,   161,   162,   162,   163,   163
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     3,     2,     2,     6,     7,     1,     3,
       1,     2,     2,     2,     2,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     5,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     2,     2,     2,     2,     2,     1,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     0,     5,     6,     2,     1,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     0,     1,
       3,     5,     6,     6,     5,     4,     4,     1,     0,     1,
       0,     1,     0,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     3,     4,     2,
       4,     1,     0,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     3,     2,     3,     1,
       2,     1,     1,     1,     2,     5,     7,     5,     5,     7,
       9,     8,     1,     0,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 7: /* primary_expression: OPENRB expression CLOSERB  */
#line 130 "asgn4_21CS30023.y"
                                                                                                                                         { printf("PRIMARY_EXPRESSION\n");}
#line 1870 "y.tab.c"
    break;

  case 17: /* postfix_expression: OPENRB type_name CLOSERB OPENCB initializer_list COMMA CLOSECB  */
#line 133 "asgn4_21CS30023.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                 {printf("found POSTFIX_EXPRESSION\n");}
#line 1876 "y.tab.c"
    break;

  case 19: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 136 "asgn4_21CS30023.y"
                                                                                                        { printf("found ARGUMENT_EXPRESSION_LIST\n");}
#line 1882 "y.tab.c"
    break;

  case 25: /* unary_expression: SIZEOF OPENRB type_name CLOSERB  */
#line 139 "asgn4_21CS30023.y"
                                                                                                                                                                                            {printf("UNARY_EXPRESSION\n");}
#line 1888 "y.tab.c"
    break;

  case 31: /* unary_operator: NOT  */
#line 142 "asgn4_21CS30023.y"
                                                          {printf("found UNARY_OPERATOR\n");}
#line 1894 "y.tab.c"
    break;

  case 33: /* cast_expression: OPENRB type_name CLOSERB cast_expression  */
#line 145 "asgn4_21CS30023.y"
                                                                              {printf("found CAST_EXPRESSION\n");}
#line 1900 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 148 "asgn4_21CS30023.y"
                                                                                                                                                                                                    {printf("found MULTIPLICATIVE_EXPRESSION\n");}
#line 1906 "y.tab.c"
    break;

  case 40: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 151 "asgn4_21CS30023.y"
                                                                                                                                                           {printf("found ADDITIVE_EXPRESSION\n");}
#line 1912 "y.tab.c"
    break;

  case 43: /* shift_expression: shift_expression RIGHTS additive_expression  */
#line 154 "asgn4_21CS30023.y"
                                                                                                                                  {printf("found SHIFT_EXPRESSION\n");}
#line 1918 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression GREATEREQUAL shift_expression  */
#line 157 "asgn4_21CS30023.y"
                                                                                                                                                                                                                                                         {printf("found RELATIONAL_EXPRESSION\n");}
#line 1924 "y.tab.c"
    break;

  case 51: /* equality_expression: equality_expression NOTEQUAL relational_expression  */
#line 160 "asgn4_21CS30023.y"
                                                                                                                                                        {printf("found EQUALITY_EXPRESSION\n");}
#line 1930 "y.tab.c"
    break;

  case 53: /* and_expression: and_expression BAND equality_expression  */
#line 163 "asgn4_21CS30023.y"
                                                                               {printf("found AND_EXPRESSION\n");}
#line 1936 "y.tab.c"
    break;

  case 55: /* exclusive_or_expression: exclusive_or_expression XOR and_expression  */
#line 166 "asgn4_21CS30023.y"
                                                                                      {printf("found EXCLUSIVE_OR_EXPRESSION \n");}
#line 1942 "y.tab.c"
    break;

  case 57: /* inclusive_or_expression: inclusive_or_expression BITWISEOR exclusive_or_expression  */
#line 169 "asgn4_21CS30023.y"
                                                                                                              {printf("found INCLUSIVE_OR_EXPRESSION\n");}
#line 1948 "y.tab.c"
    break;

  case 59: /* logical_and_expression: logical_and_expression AND inclusive_or_expression  */
#line 172 "asgn4_21CS30023.y"
                                                                                                      {printf("found LOGICAL_AND_EXPRESSION\n");}
#line 1954 "y.tab.c"
    break;

  case 61: /* logical_or_expression: logical_or_expression OR logical_and_expression  */
#line 175 "asgn4_21CS30023.y"
                                                                                                 {printf("found LOGICAL_OR_EXPRESSION \n");}
#line 1960 "y.tab.c"
    break;

  case 63: /* conditional_expression: logical_or_expression QUESTIONMARK expression COLON conditional_expression  */
#line 178 "asgn4_21CS30023.y"
                                                                                                                            {printf("found CONDITIONAL_EXPRESSION\n");}
#line 1966 "y.tab.c"
    break;

  case 65: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 181 "asgn4_21CS30023.y"
                                                                                                            {printf("found ASSIGNMENT_EXPRESSION \n");}
#line 1972 "y.tab.c"
    break;

  case 76: /* assignment_operator: OREQUAL  */
#line 184 "asgn4_21CS30023.y"
                                                                                                                                                 {printf("found ASSIGNMENT_OPERATOR\n");}
#line 1978 "y.tab.c"
    break;

  case 78: /* expression: expression COMMA assignment_expression  */
#line 187 "asgn4_21CS30023.y"
                                                                            {printf("found EXPRESSION\n");}
#line 1984 "y.tab.c"
    break;

  case 79: /* constant_expression: conditional_expression  */
#line 190 "asgn4_21CS30023.y"
                                             {printf("found CONSTANT_EXPRESSION\n");}
#line 1990 "y.tab.c"
    break;

  case 81: /* declaration: declaration_specifiers SEMICOLON  */
#line 196 "asgn4_21CS30023.y"
                                                                                                        {printf("found DECLARATION\n");}
#line 1996 "y.tab.c"
    break;

  case 85: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 199 "asgn4_21CS30023.y"
                                                                                                                                                                                                                   {printf("found DECLARATION_SPECIFIERS\n");}
#line 2002 "y.tab.c"
    break;

  case 86: /* declaration_specifiers_opt: declaration_specifiers  */
#line 203 "asgn4_21CS30023.y"
                                { printf("declaration_specifiers_op\n"); }
#line 2008 "y.tab.c"
    break;

  case 87: /* declaration_specifiers_opt: %empty  */
#line 205 "asgn4_21CS30023.y"
                                { printf("epsilon\n"); }
#line 2014 "y.tab.c"
    break;

  case 89: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 209 "asgn4_21CS30023.y"
                                                                                    {printf("found INIT_DECLARATOR_LIST\n");}
#line 2020 "y.tab.c"
    break;

  case 91: /* init_declarator: declarator EQUAL initializer  */
#line 212 "asgn4_21CS30023.y"
                                                            {printf("found INIT_DECLARATOR\n");}
#line 2026 "y.tab.c"
    break;

  case 95: /* storage_class_specifier: REGISTER  */
#line 215 "asgn4_21CS30023.y"
                                                            {printf("found STORAGE_CLASS_SPECIFIER\n");}
#line 2032 "y.tab.c"
    break;

  case 108: /* type_specifier: enum_specifier  */
#line 218 "asgn4_21CS30023.y"
                                                                                                                                        {printf("found TYPE_SPECIFIER\n");}
#line 2038 "y.tab.c"
    break;

  case 110: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 221 "asgn4_21CS30023.y"
                                                                                                                     {printf("found SPECIFIER_QUALIFIER_LIST\n");}
#line 2044 "y.tab.c"
    break;

  case 111: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 225 "asgn4_21CS30023.y"
                                    { printf("specifier_qualifier_list \n"); }
#line 2050 "y.tab.c"
    break;

  case 112: /* specifier_qualifier_list_opt: %empty  */
#line 227 "asgn4_21CS30023.y"
                                    { printf("epsilon \n"); }
#line 2056 "y.tab.c"
    break;

  case 115: /* enum_specifier: ENUM IDENTIFIER  */
#line 231 "asgn4_21CS30023.y"
                                                                                                                                                 {printf("found ENUM_SPECIFIER\n");}
#line 2062 "y.tab.c"
    break;

  case 116: /* identifier_opt: IDENTIFIER  */
#line 235 "asgn4_21CS30023.y"
                    { printf("identifier \n"); }
#line 2068 "y.tab.c"
    break;

  case 117: /* identifier_opt: %empty  */
#line 237 "asgn4_21CS30023.y"
                    { printf("epsilon"); }
#line 2074 "y.tab.c"
    break;

  case 119: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 241 "asgn4_21CS30023.y"
                                                                {printf("found ENUMERATOR_LIST\n");}
#line 2080 "y.tab.c"
    break;

  case 121: /* enumerator: IDENTIFIER EQUAL constant_expression  */
#line 244 "asgn4_21CS30023.y"
                                                               {printf("found ENUMERATOR\n");}
#line 2086 "y.tab.c"
    break;

  case 124: /* type_qualifier: RESTRICT  */
#line 247 "asgn4_21CS30023.y"
                                             {printf("found TYPE_QUAIFIER \n");}
#line 2092 "y.tab.c"
    break;

  case 125: /* function_specifier: INLINE  */
#line 250 "asgn4_21CS30023.y"
                            {printf("found FUNCTION_SPECIFIER\n");}
#line 2098 "y.tab.c"
    break;

  case 126: /* declarator: pointer_opt direct_declarator  */
#line 253 "asgn4_21CS30023.y"
                                           {printf("found DECLARATOR\n");}
#line 2104 "y.tab.c"
    break;

  case 127: /* pointer_opt: pointer  */
#line 257 "asgn4_21CS30023.y"
                { printf("pointer \n"); }
#line 2110 "y.tab.c"
    break;

  case 128: /* pointer_opt: %empty  */
#line 259 "asgn4_21CS30023.y"
                { printf("epsilon\n"); }
#line 2116 "y.tab.c"
    break;

  case 136: /* direct_declarator: direct_declarator OPENRB identifier_list_opt CLOSERB  */
#line 276 "asgn4_21CS30023.y"
                        { printf("direct_declarator\n"); }
#line 2122 "y.tab.c"
    break;

  case 137: /* type_qualifier_list_opt: type_qualifier_list  */
#line 281 "asgn4_21CS30023.y"
                            { printf("type_qualifier_list \n"); }
#line 2128 "y.tab.c"
    break;

  case 138: /* type_qualifier_list_opt: %empty  */
#line 283 "asgn4_21CS30023.y"
                            { printf("epsilon\n"); }
#line 2134 "y.tab.c"
    break;

  case 139: /* assignment_expression_opt: assignment_expression  */
#line 288 "asgn4_21CS30023.y"
                                { printf("assignment_expression\n"); }
#line 2140 "y.tab.c"
    break;

  case 140: /* assignment_expression_opt: %empty  */
#line 290 "asgn4_21CS30023.y"
                                { printf("epsilon\n"); }
#line 2146 "y.tab.c"
    break;

  case 141: /* identifier_list_opt: identifier_list  */
#line 295 "asgn4_21CS30023.y"
                        { printf("identifier_list \n"); }
#line 2152 "y.tab.c"
    break;

  case 142: /* identifier_list_opt: %empty  */
#line 297 "asgn4_21CS30023.y"
                        { printf("epsilon\n"); }
#line 2158 "y.tab.c"
    break;

  case 144: /* pointer: KSTAR type_qualifier_list_opt pointer  */
#line 304 "asgn4_21CS30023.y"
                                                                                {printf("found POINTER\n");}
#line 2164 "y.tab.c"
    break;

  case 146: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 307 "asgn4_21CS30023.y"
                                                                          {printf("found TYPE_QUALIFIER_LIST\n");}
#line 2170 "y.tab.c"
    break;

  case 148: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 310 "asgn4_21CS30023.y"
                                                                      {printf("found PARAMETER_TYPE_LIST\n");}
#line 2176 "y.tab.c"
    break;

  case 150: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 313 "asgn4_21CS30023.y"
                                                                                    {printf("found PARAMETER_LIST\n");}
#line 2182 "y.tab.c"
    break;

  case 152: /* parameter_declaration: declaration_specifiers  */
#line 316 "asgn4_21CS30023.y"
                                                                                   {printf("found PARAMETER_DECLARATION\n");}
#line 2188 "y.tab.c"
    break;

  case 154: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 319 "asgn4_21CS30023.y"
                                                               {printf("found IDENTIFIER_LIST\n");}
#line 2194 "y.tab.c"
    break;

  case 155: /* type_name: specifier_qualifier_list  */
#line 322 "asgn4_21CS30023.y"
                                     {printf("found TYPE_NAME\n");}
#line 2200 "y.tab.c"
    break;

  case 158: /* initializer: OPENCB initializer_list COMMA CLOSECB  */
#line 325 "asgn4_21CS30023.y"
                                                                                                              {printf("found INITIALIZER\n");}
#line 2206 "y.tab.c"
    break;

  case 160: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 328 "asgn4_21CS30023.y"
                                                                                                    {printf("found INITIALIZER_LIST\n");}
#line 2212 "y.tab.c"
    break;

  case 163: /* designation: designator_list EQUAL  */
#line 334 "asgn4_21CS30023.y"
                                   {printf("found DESIGNATION\n");}
#line 2218 "y.tab.c"
    break;

  case 165: /* designator_list: designator_list designator  */
#line 337 "asgn4_21CS30023.y"
                                                          {printf("found DESIGNATOR_LIST\n");}
#line 2224 "y.tab.c"
    break;

  case 167: /* designator: DOT IDENTIFIER  */
#line 340 "asgn4_21CS30023.y"
                                                                 {printf("found DESIGNATOR\n");}
#line 2230 "y.tab.c"
    break;

  case 173: /* statement: jump_statement  */
#line 346 "asgn4_21CS30023.y"
                                                                                                                                       {printf("found STATEMENT\n");}
#line 2236 "y.tab.c"
    break;

  case 176: /* labeled_statement: DEFAULT COLON statement  */
#line 349 "asgn4_21CS30023.y"
                                                                                                                    {printf("found LABELED_STATMENT\n");}
#line 2242 "y.tab.c"
    break;

  case 178: /* compound_statement: OPENCB block_item_list CLOSECB  */
#line 352 "asgn4_21CS30023.y"
                                                                     {printf("found COMPOUND_STATEMENT\n");}
#line 2248 "y.tab.c"
    break;

  case 180: /* block_item_list: block_item_list block_item  */
#line 355 "asgn4_21CS30023.y"
                                                          {printf("found BLOCK_ITEM_LIST\n");}
#line 2254 "y.tab.c"
    break;

  case 182: /* block_item: statement  */
#line 358 "asgn4_21CS30023.y"
                                     {printf("found BLOCK_ITEM\n");}
#line 2260 "y.tab.c"
    break;

  case 184: /* expression_statement: expression SEMICOLON  */
#line 361 "asgn4_21CS30023.y"
                                                        {printf("found EXPRESSION_STATEMENT\n");}
#line 2266 "y.tab.c"
    break;

  case 187: /* selection_statement: SWITCH OPENRB expression CLOSERB statement  */
#line 364 "asgn4_21CS30023.y"
                                                                                                                                                                  {printf("found SELECTION_STATEMENT\n");}
#line 2272 "y.tab.c"
    break;

  case 191: /* iteration_statement: FOR OPENRB declaration expression_opt SEMICOLON expression_opt CLOSERB statement  */
#line 367 "asgn4_21CS30023.y"
                                                                                                                                                                                                                                                                                                            {printf("found ITERATION_STATEMENT\n");}
#line 2278 "y.tab.c"
    break;

  case 192: /* expression_opt: expression  */
#line 371 "asgn4_21CS30023.y"
                    { printf("expression\n"); }
#line 2284 "y.tab.c"
    break;

  case 193: /* expression_opt: %empty  */
#line 373 "asgn4_21CS30023.y"
                    { printf("epsilon\n"); }
#line 2290 "y.tab.c"
    break;

  case 198: /* jump_statement: RETURN expression SEMICOLON  */
#line 377 "asgn4_21CS30023.y"
                                                                                                                                   {printf("found JUMP_STATEMENT\n");}
#line 2296 "y.tab.c"
    break;

  case 200: /* translation_unit: translation_unit external_declaration  */
#line 383 "asgn4_21CS30023.y"
                                                                                {printf("found TRANSLATION_UNIT\n");}
#line 2302 "y.tab.c"
    break;

  case 202: /* external_declaration: declaration  */
#line 386 "asgn4_21CS30023.y"
                                                         {printf("found EXTERNAL_DECLARATION\n");}
#line 2308 "y.tab.c"
    break;

  case 204: /* function_definition: declaration_specifiers declarator compound_statement  */
#line 389 "asgn4_21CS30023.y"
                                                                                                                                                   {printf("found FUNCTION DEFINITION\n");}
#line 2314 "y.tab.c"
    break;

  case 206: /* declaration_list: declaration_list declaration  */
#line 392 "asgn4_21CS30023.y"
                                                              {printf("found DECLARATION LIST\n");}
#line 2320 "y.tab.c"
    break;


#line 2324 "y.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 393 "asgn4_21CS30023.y"


void yyerror(char *err)
{
  printf("error::%s, line no.=%d, TEXT: %s \n", err,lineno,yytext);
}
