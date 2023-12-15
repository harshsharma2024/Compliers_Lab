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
#line 2 "ass5_21CS30003_21CS30023.y"

    #include <bits/stdc++.h>
    #include <sstream>
    #include "ass5_21CS30003_21CS30023_translator.h"
    extern int yylex();
    void yyerror(string s);
    extern string var_type;
    extern vector<label> label_table;
    extern int line;
    using namespace std;

#line 83 "y.tab.c"

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

#line 334 "y.tab.c"

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
  YYSYMBOL_IDENTIFIER = 41,                /* IDENTIFIER  */
  YYSYMBOL_INTEGER_CONST = 42,             /* INTEGER_CONST  */
  YYSYMBOL_CHAR_CONST = 43,                /* CHAR_CONST  */
  YYSYMBOL_FLOAT_CONST = 44,               /* FLOAT_CONST  */
  YYSYMBOL_STRING_LITERAL = 45,            /* STRING_LITERAL  */
  YYSYMBOL_OPENSB = 46,                    /* OPENSB  */
  YYSYMBOL_CLOSESB = 47,                   /* CLOSESB  */
  YYSYMBOL_OPENRB = 48,                    /* OPENRB  */
  YYSYMBOL_CLOSERB = 49,                   /* CLOSERB  */
  YYSYMBOL_OPENCB = 50,                    /* OPENCB  */
  YYSYMBOL_CLOSECB = 51,                   /* CLOSECB  */
  YYSYMBOL_DOT = 52,                       /* DOT  */
  YYSYMBOL_RIGHTARROW = 53,                /* RIGHTARROW  */
  YYSYMBOL_PLUSPLUS = 54,                  /* PLUSPLUS  */
  YYSYMBOL_MINUSMINS = 55,                 /* MINUSMINS  */
  YYSYMBOL_BAND = 56,                      /* BAND  */
  YYSYMBOL_KSTAR = 57,                     /* KSTAR  */
  YYSYMBOL_PLUS = 58,                      /* PLUS  */
  YYSYMBOL_MINUS = 59,                     /* MINUS  */
  YYSYMBOL_TILDA = 60,                     /* TILDA  */
  YYSYMBOL_NOT = 61,                       /* NOT  */
  YYSYMBOL_DIVIDE = 62,                    /* DIVIDE  */
  YYSYMBOL_MODULO = 63,                    /* MODULO  */
  YYSYMBOL_LEFTS = 64,                     /* LEFTS  */
  YYSYMBOL_RIGHTS = 65,                    /* RIGHTS  */
  YYSYMBOL_LESSTHAN = 66,                  /* LESSTHAN  */
  YYSYMBOL_GREATERTHAN = 67,               /* GREATERTHAN  */
  YYSYMBOL_LESSEQUAL = 68,                 /* LESSEQUAL  */
  YYSYMBOL_GREATEREQUAL = 69,              /* GREATEREQUAL  */
  YYSYMBOL_EQUALEQUAL = 70,                /* EQUALEQUAL  */
  YYSYMBOL_NOTEQUAL = 71,                  /* NOTEQUAL  */
  YYSYMBOL_XOR = 72,                       /* XOR  */
  YYSYMBOL_BITWISEOR = 73,                 /* BITWISEOR  */
  YYSYMBOL_AND = 74,                       /* AND  */
  YYSYMBOL_OR = 75,                        /* OR  */
  YYSYMBOL_QUESTIONMARK = 76,              /* QUESTIONMARK  */
  YYSYMBOL_COLON = 77,                     /* COLON  */
  YYSYMBOL_SEMICOLON = 78,                 /* SEMICOLON  */
  YYSYMBOL_DOTDOTDOT = 79,                 /* DOTDOTDOT  */
  YYSYMBOL_EQUAL = 80,                     /* EQUAL  */
  YYSYMBOL_MULEQUAL = 81,                  /* MULEQUAL  */
  YYSYMBOL_DIVEQUAL = 82,                  /* DIVEQUAL  */
  YYSYMBOL_MODEQUAL = 83,                  /* MODEQUAL  */
  YYSYMBOL_PLUSEQUAL = 84,                 /* PLUSEQUAL  */
  YYSYMBOL_MINUSEQUAL = 85,                /* MINUSEQUAL  */
  YYSYMBOL_SHIFTLEQUAL = 86,               /* SHIFTLEQUAL  */
  YYSYMBOL_SHIFTREQUAL = 87,               /* SHIFTREQUAL  */
  YYSYMBOL_ANDEQUAL = 88,                  /* ANDEQUAL  */
  YYSYMBOL_XOREQUAL = 89,                  /* XOREQUAL  */
  YYSYMBOL_OREQUAL = 90,                   /* OREQUAL  */
  YYSYMBOL_COMMA = 91,                     /* COMMA  */
  YYSYMBOL_HASH = 92,                      /* HASH  */
  YYSYMBOL_93_then_ = 93,                  /* "then"  */
  YYSYMBOL_YYACCEPT = 94,                  /* $accept  */
  YYSYMBOL_changetable = 95,               /* changetable  */
  YYSYMBOL_constant = 96,                  /* constant  */
  YYSYMBOL_primary_expression = 97,        /* primary_expression  */
  YYSYMBOL_postfix_expression = 98,        /* postfix_expression  */
  YYSYMBOL_argument_expression_list = 99,  /* argument_expression_list  */
  YYSYMBOL_argument_expression_list_opt = 100, /* argument_expression_list_opt  */
  YYSYMBOL_unary_expression = 101,         /* unary_expression  */
  YYSYMBOL_unary_operator = 102,           /* unary_operator  */
  YYSYMBOL_cast_expression = 103,          /* cast_expression  */
  YYSYMBOL_multiplicative_expression = 104, /* multiplicative_expression  */
  YYSYMBOL_additive_expression = 105,      /* additive_expression  */
  YYSYMBOL_shift_expression = 106,         /* shift_expression  */
  YYSYMBOL_relational_expression = 107,    /* relational_expression  */
  YYSYMBOL_equality_expression = 108,      /* equality_expression  */
  YYSYMBOL_and_expression = 109,           /* and_expression  */
  YYSYMBOL_exclusive_or_expression = 110,  /* exclusive_or_expression  */
  YYSYMBOL_inclusive_or_expression = 111,  /* inclusive_or_expression  */
  YYSYMBOL_logical_and_expression = 112,   /* logical_and_expression  */
  YYSYMBOL_logical_or_expression = 113,    /* logical_or_expression  */
  YYSYMBOL_conditional_expression = 114,   /* conditional_expression  */
  YYSYMBOL_assignment_expression = 115,    /* assignment_expression  */
  YYSYMBOL_assignment_operator = 116,      /* assignment_operator  */
  YYSYMBOL_expression = 117,               /* expression  */
  YYSYMBOL_constant_expression = 118,      /* constant_expression  */
  YYSYMBOL_declaration = 119,              /* declaration  */
  YYSYMBOL_init_declarator_list_opt = 120, /* init_declarator_list_opt  */
  YYSYMBOL_declaration_specifiers = 121,   /* declaration_specifiers  */
  YYSYMBOL_declaration_specifiers_opt = 122, /* declaration_specifiers_opt  */
  YYSYMBOL_init_declarator_list = 123,     /* init_declarator_list  */
  YYSYMBOL_init_declarator = 124,          /* init_declarator  */
  YYSYMBOL_storage_class_specifier = 125,  /* storage_class_specifier  */
  YYSYMBOL_type_specifier = 126,           /* type_specifier  */
  YYSYMBOL_specifier_qualifier_list = 127, /* specifier_qualifier_list  */
  YYSYMBOL_specifier_qualifier_list_opt = 128, /* specifier_qualifier_list_opt  */
  YYSYMBOL_struct_or_union_specifier = 129, /* struct_or_union_specifier  */
  YYSYMBOL_struct_or_union = 130,          /* struct_or_union  */
  YYSYMBOL_struct_declaration_list = 131,  /* struct_declaration_list  */
  YYSYMBOL_struct_declaration = 132,       /* struct_declaration  */
  YYSYMBOL_struct_declarator_list = 133,   /* struct_declarator_list  */
  YYSYMBOL_struct_declarator = 134,        /* struct_declarator  */
  YYSYMBOL_enum_specifier = 135,           /* enum_specifier  */
  YYSYMBOL_identifier_opt = 136,           /* identifier_opt  */
  YYSYMBOL_enumerator_list = 137,          /* enumerator_list  */
  YYSYMBOL_enumerator = 138,               /* enumerator  */
  YYSYMBOL_type_qualifier = 139,           /* type_qualifier  */
  YYSYMBOL_function_specifier = 140,       /* function_specifier  */
  YYSYMBOL_declarator = 141,               /* declarator  */
  YYSYMBOL_direct_declarator = 142,        /* direct_declarator  */
  YYSYMBOL_type_qualifier_list_opt = 143,  /* type_qualifier_list_opt  */
  YYSYMBOL_pointer = 144,                  /* pointer  */
  YYSYMBOL_type_qualifier_list = 145,      /* type_qualifier_list  */
  YYSYMBOL_parameter_type_list = 146,      /* parameter_type_list  */
  YYSYMBOL_parameter_list = 147,           /* parameter_list  */
  YYSYMBOL_parameter_declaration = 148,    /* parameter_declaration  */
  YYSYMBOL_identifier_list = 149,          /* identifier_list  */
  YYSYMBOL_type_name = 150,                /* type_name  */
  YYSYMBOL_initializer = 151,              /* initializer  */
  YYSYMBOL_initializer_list = 152,         /* initializer_list  */
  YYSYMBOL_designation_opt = 153,          /* designation_opt  */
  YYSYMBOL_designation = 154,              /* designation  */
  YYSYMBOL_designator_list = 155,          /* designator_list  */
  YYSYMBOL_designator = 156,               /* designator  */
  YYSYMBOL_statement = 157,                /* statement  */
  YYSYMBOL_loop_statement = 158,           /* loop_statement  */
  YYSYMBOL_labeled_statement = 159,        /* labeled_statement  */
  YYSYMBOL_compound_statement = 160,       /* compound_statement  */
  YYSYMBOL_block_item_list = 161,          /* block_item_list  */
  YYSYMBOL_block_item_list_opt = 162,      /* block_item_list_opt  */
  YYSYMBOL_block_item = 163,               /* block_item  */
  YYSYMBOL_expression_statement = 164,     /* expression_statement  */
  YYSYMBOL_selection_statement = 165,      /* selection_statement  */
  YYSYMBOL_iteration_statement = 166,      /* iteration_statement  */
  YYSYMBOL_jump_statement = 167,           /* jump_statement  */
  YYSYMBOL_translation_unit = 168,         /* translation_unit  */
  YYSYMBOL_external_declaration = 169,     /* external_declaration  */
  YYSYMBOL_function_definition = 170,      /* function_definition  */
  YYSYMBOL_declaration_list_opt = 171,     /* declaration_list_opt  */
  YYSYMBOL_declaration_list = 172,         /* declaration_list  */
  YYSYMBOL_M = 173,                        /* M  */
  YYSYMBOL_F = 174,                        /* F  */
  YYSYMBOL_W = 175,                        /* W  */
  YYSYMBOL_D = 176,                        /* D  */
  YYSYMBOL_X = 177,                        /* X  */
  YYSYMBOL_N = 178                         /* N  */
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
#define YYFINAL  54
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1284

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  85
/* YYNRULES -- Number of rules.  */
#define YYNRULES  240
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  423

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
       0,   189,   189,   208,   215,   222,   228,   237,   243,   247,
     255,   263,   286,   295,   299,   303,   311,   320,   322,   327,
     332,   340,   344,   351,   355,   360,   365,   404,   408,   416,
     420,   424,   428,   432,   436,   443,   447,   455,   472,   487,
     500,   517,   521,   534,   550,   554,   565,   581,   585,   604,
     622,   640,   661,   665,   686,   709,   713,   735,   739,   760,
     764,   785,   789,   807,   811,   828,   830,   849,   851,   874,
     876,   878,   880,   882,   884,   886,   888,   890,   892,   894,
     898,   900,   905,   910,   915,   916,   920,   922,   924,   926,
     931,   932,   936,   938,   943,   947,   957,   959,   961,   963,
     968,   970,   972,   974,   976,   978,   980,   982,   984,   986,
     988,   990,   992,   994,   999,  1001,  1006,  1007,  1011,  1013,
    1015,  1020,  1022,  1027,  1029,  1034,  1036,  1041,  1043,  1047,
    1049,  1051,  1056,  1058,  1060,  1065,  1066,  1070,  1072,  1078,
    1080,  1086,  1088,  1090,  1095,  1100,  1111,  1117,  1123,  1124,
    1125,  1126,  1147,  1167,  1168,  1169,  1170,  1171,  1185,  1186,
    1203,  1204,  1209,  1213,  1220,  1222,  1227,  1229,  1234,  1236,
    1241,  1243,  1248,  1250,  1255,  1260,  1262,  1264,  1269,  1271,
    1276,  1277,  1281,  1286,  1288,  1293,  1295,  1300,  1302,  1304,
    1309,  1311,  1313,  1318,  1319,  1324,  1325,  1326,  1329,  1343,
    1345,  1350,  1358,  1360,  1368,  1370,  1375,  1377,  1382,  1384,
    1389,  1401,  1414,  1419,  1436,  1453,  1466,  1478,  1496,  1514,
    1532,  1551,  1568,  1570,  1572,  1577,  1585,  1587,  1592,  1594,
    1599,  1613,  1614,  1618,  1620,  1624,  1631,  1638,  1645,  1652,
    1668
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
  "IDENTIFIER", "INTEGER_CONST", "CHAR_CONST", "FLOAT_CONST",
  "STRING_LITERAL", "OPENSB", "CLOSESB", "OPENRB", "CLOSERB", "OPENCB",
  "CLOSECB", "DOT", "RIGHTARROW", "PLUSPLUS", "MINUSMINS", "BAND", "KSTAR",
  "PLUS", "MINUS", "TILDA", "NOT", "DIVIDE", "MODULO", "LEFTS", "RIGHTS",
  "LESSTHAN", "GREATERTHAN", "LESSEQUAL", "GREATEREQUAL", "EQUALEQUAL",
  "NOTEQUAL", "XOR", "BITWISEOR", "AND", "OR", "QUESTIONMARK", "COLON",
  "SEMICOLON", "DOTDOTDOT", "EQUAL", "MULEQUAL", "DIVEQUAL", "MODEQUAL",
  "PLUSEQUAL", "MINUSEQUAL", "SHIFTLEQUAL", "SHIFTREQUAL", "ANDEQUAL",
  "XOREQUAL", "OREQUAL", "COMMA", "HASH", "\"then\"", "$accept",
  "changetable", "constant", "primary_expression", "postfix_expression",
  "argument_expression_list", "argument_expression_list_opt",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier",
  "identifier_opt", "enumerator_list", "enumerator", "type_qualifier",
  "function_specifier", "declarator", "direct_declarator",
  "type_qualifier_list_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "loop_statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item_list_opt", "block_item",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "declaration_list_opt", "declaration_list", "M",
  "F", "W", "D", "X", "N", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-318)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-233)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1104,  -318,  -318,  -318,  -318,   -13,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,    79,  1104,  1104,  -318,    37,
    -318,  1104,  1104,  1067,  -318,  -318,    -7,    25,  -318,    79,
      90,    33,    68,  -318,   301,    44,   -24,  -318,  -318,  -318,
      85,  1138,  -318,  -318,  -318,  -318,   157,   158,  -318,   160,
      90,  -318,    79,  1139,  -318,    79,  -318,  1104,   777,   173,
      44,  1138,  1138,   148,   991,  -318,  1138,   141,   -29,  -318,
    -318,  -318,  -318,  -318,   151,  1181,  -318,  -318,  -318,  -318,
    -318,   739,   124,  1202,  1202,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,   344,   197,  1223,  -318,   103,   198,   199,
     205,   221,   182,   171,   177,   179,   193,  -318,  -318,  -318,
     209,  -318,   853,  -318,   208,   214,   815,  -318,   957,   -35,
    1026,  -318,  -318,  1223,  -318,    34,  -318,   188,  -318,  -318,
    -318,  1223,  -318,    87,   739,  -318,  -318,   -30,  -318,   226,
    1223,   252,   -14,  1139,  -318,    24,  -318,   739,  -318,  -318,
    1223,  1223,   254,   259,  -318,  -318,  -318,  -318,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,  -318,  -318,  1223,  -318,  -318,
    1223,  1223,  1223,  1223,  1223,  1223,  1223,  1223,  1223,  1223,
    1223,  1223,  1223,  1223,  1223,  1223,  -318,  -318,  1223,   396,
     255,   853,  -318,  -318,  -318,   265,   267,  -318,    79,   270,
     229,  -318,  -318,   280,  -318,  -318,  -318,  -318,   133,  1223,
    -318,  -318,  -318,   277,  -318,  1223,  1160,   282,  -318,  -318,
     194,  -318,  -318,  -318,   283,   -32,   247,   297,  -318,  -318,
    -318,  -318,  -318,  -318,  -318,   103,   103,   198,   198,   199,
     199,   199,   199,   205,   205,   221,   182,   171,  1223,  1223,
     -28,   269,  1223,   271,   273,  -318,  -318,   307,   304,   874,
     306,  -318,   278,  -318,  -318,    80,  -318,  -318,  -318,  -318,
     308,   309,  -318,  -318,  -318,  -318,  -318,  -318,   311,  -318,
    -318,  -318,  -318,   349,  -318,  -318,  -318,   312,  -318,   124,
    -318,  -318,  -318,  1139,   312,  -318,  1223,  -318,   177,   179,
    1223,  -318,   291,  -318,   511,   319,   326,   299,  1223,  -318,
      91,  1223,   332,  -318,  -318,  -318,   396,  -318,  -318,  -318,
    -318,   -11,  -318,  -318,  -318,   511,  -318,  -318,   682,  -318,
    -318,   295,  -318,   -18,  -318,   511,   396,  -318,  -318,   196,
    -318,   396,  -318,  -318,  -318,  -318,  -318,  -318,  -318,   342,
     511,  -318,  -318,   343,  -318,   358,   356,   454,  -318,  -318,
    -318,  -318,  -318,   347,  -318,  -318,   511,  1223,   405,  1223,
     899,   899,  -318,   -17,   395,   -10,  -318,  -318,   432,   397,
    1223,   370,  1223,  1223,  -318,  -318,   682,    -8,  -318,   295,
     295,   511,   396,  -318,   371,   410,   411,  -318,   412,  -318,
    -318,  -318,  -318,   568,   625,   396,  -318,   396,  -318,   413,
     414,  -318,  -318
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    98,   101,   141,   106,   136,    96,    99,   105,   144,
     103,   104,   142,   102,   107,    97,   121,   122,   108,   100,
     143,   109,   110,   111,   229,    85,    91,    91,   113,     0,
     112,    91,    91,     0,   226,   228,   134,     0,   147,     0,
     161,     0,    84,    92,    94,   146,     0,    90,    86,    87,
     120,     0,    88,    89,     1,   227,     0,     0,   164,   162,
     160,    83,     0,     0,   233,    85,     2,   231,     0,     2,
     145,     0,   117,     0,     0,   123,   117,   139,     0,   137,
     148,   163,   165,    93,    94,     0,     7,     3,     5,     4,
       6,     0,   181,     0,     0,    29,    30,    31,    32,    33,
      34,     8,    10,    23,    35,     0,    37,    41,    44,    47,
      52,    55,    57,    59,    61,    63,    65,    67,   175,    95,
       0,   234,     0,   152,    30,     0,     0,   172,     0,     0,
       0,   116,   114,     0,   125,     0,   127,   131,   118,   124,
     115,     0,   132,     0,     0,    27,    80,     0,   174,     0,
       0,     0,     0,     0,   180,     0,   183,     0,    24,    25,
       0,    22,     0,     0,    15,    16,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,     0,    35,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   235,   235,     0,   205,
       0,     0,   156,   151,   150,    30,     0,   159,   171,     0,
     166,   168,   158,     0,   119,    82,   129,   126,     0,     0,
     140,   133,   138,     0,     9,     0,     0,     0,   186,   176,
     181,   178,   182,   184,     0,     0,    21,     0,    19,    13,
      14,    68,    38,    39,    40,    42,    43,    45,    46,    48,
      49,    50,    51,    53,    54,    56,    58,    60,     0,     0,
       0,     0,     0,     0,     0,   238,   236,     0,     0,     0,
       0,   237,     7,   239,   208,     0,   206,   207,   187,   188,
     235,     0,   202,   189,   190,   191,   192,   154,     0,   155,
     149,   170,   157,     0,   173,   128,   130,    28,    81,   181,
      36,   185,   177,     0,     0,    11,     0,    12,    62,    64,
       0,   223,     0,   222,     0,   235,     0,     0,     0,   225,
       0,     0,     0,   235,     2,   209,     0,   230,   153,   167,
     169,     0,   179,    20,    66,     0,   200,   235,     0,   239,
     221,   240,   224,     0,   239,     0,   205,   203,    17,   181,
     199,   205,   235,   193,   194,   195,   196,   197,     2,     0,
       0,     2,   198,     0,    18,     0,     0,     0,   235,   212,
     235,   201,   235,     0,   235,   235,     0,     0,     0,     0,
       0,     0,   240,     0,     0,     0,   235,   235,   210,   235,
       0,     0,     0,     0,   235,   235,     0,     0,   215,   240,
     240,     0,   205,   213,     0,     0,     0,   211,     0,   216,
     235,   235,   214,     0,     0,   205,   217,   205,   218,     0,
       0,   219,   220
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -318,   -64,  -318,  -318,  -318,  -318,  -318,   -40,  -318,   -96,
     115,   121,   155,   119,   274,   279,   284,   227,   213,  -318,
    -125,   -62,  -318,   -89,  -130,     0,  -318,     3,    19,  -318,
     424,  -318,    31,   -49,   415,  -318,  -318,   429,   -61,  -318,
     285,  -318,  -318,  -318,   361,   132,  -318,   -21,   455,  -318,
     446,   -56,  -318,  -318,   225,  -318,    55,  -146,   207,  -220,
    -318,  -318,   352,  -288,  -296,  -317,  -318,  -318,  -178,   200,
    -147,  -290,  -280,  -219,  -318,   486,  -318,  -318,  -318,  -159,
    -318,  -318,  -318,  -177,  -198
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   120,   101,   102,   103,   236,   237,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   146,   177,   275,   216,   276,    41,    65,    48,    42,
      43,    26,    27,    73,   132,    28,    29,    74,    75,   135,
     136,    30,    37,    78,    79,    31,    32,    84,    45,    59,
      46,    60,   209,   210,   211,   129,   149,   119,   152,   153,
     154,   155,   156,   277,   352,   278,   279,   280,   281,   282,
     283,   284,   285,   286,    33,    34,    35,    66,    67,   258,
     316,   322,   315,   324,   359
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   118,   147,    25,    44,   128,   125,   231,   215,   179,
     303,   220,   126,   139,   212,   305,   215,    38,    57,   224,
     227,   353,   142,   131,    39,   215,   336,   131,    36,    47,
      47,   360,   389,    24,    47,    47,    25,   229,   259,   391,
     348,   404,   148,  -135,    64,   145,    49,   350,   355,   310,
      52,    53,   137,   158,   159,   147,   213,   362,   356,   225,
     200,   225,   143,   225,   206,   178,   201,   121,   147,   139,
     150,   235,   369,   225,   225,    56,   151,   230,    50,   353,
     349,   225,    72,   225,   242,   243,   244,    51,   382,   296,
      68,   118,    69,   178,   215,   148,   353,   353,     3,   238,
     403,   178,    72,    72,   232,    72,   355,    72,   148,   260,
     178,    61,   217,   407,    12,   241,   356,   416,   418,   357,
      38,   326,    72,   355,   355,   218,    20,    39,    77,   303,
     300,   208,   312,   356,   356,    71,    40,   215,   221,   288,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,   338,   332,   325,    62,
     180,    72,   358,   298,   345,   181,   182,   361,   363,   342,
     150,   225,    58,   365,    38,    72,   151,   357,   351,   178,
     320,    39,   225,    76,   388,   334,   178,   291,    72,    38,
      40,   354,    82,   366,   357,   357,    39,   137,    77,   223,
      58,   405,   406,    76,    76,    40,    76,    80,    76,   376,
     133,   377,   234,   378,   127,   380,   381,    40,   178,   178,
     375,   141,   178,    76,   408,   133,   134,   392,   393,   341,
     396,    63,   343,   386,   387,   401,   402,   419,   193,   420,
     150,   118,   150,   194,   333,   302,   151,   364,   151,   354,
     195,   413,   414,   196,    58,   202,   183,   184,    82,   199,
     346,   203,    76,   185,   186,   219,   354,   354,   197,   198,
     178,   187,   188,   189,   190,   226,    76,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   383,    76,
     385,   191,   192,   228,   367,   239,   208,   370,   245,   246,
     240,   397,   287,   399,   400,     1,   247,   248,     2,     3,
     253,   254,   289,     4,   290,     5,     6,     7,     8,   292,
     293,   294,     9,    10,    11,    12,   297,    13,    14,   301,
      15,    16,   304,    82,    17,    18,    19,    20,   306,    21,
      22,    23,   249,   250,   251,   252,   307,   311,   317,   313,
     314,  -232,   318,     1,   321,   323,     2,     3,   328,  -204,
     327,     4,   299,     5,     6,     7,     8,   374,   335,   337,
       9,    10,    11,    12,   339,    13,    14,   340,    15,    16,
     344,    63,    17,    18,    19,    20,   225,    21,    22,    23,
     160,   368,   161,   373,   371,   379,   162,   163,   164,   165,
       1,   261,   262,     2,     3,   263,   264,   265,     4,   372,
       5,     6,     7,     8,   266,   267,   268,     9,    10,    11,
      12,   269,    13,    14,    85,    15,    16,   270,   329,    17,
      18,    19,    20,   271,    21,    22,    23,   272,    87,    88,
      89,    90,   384,   390,    91,   394,   273,   395,   398,   409,
      93,    94,    95,    96,    97,    98,    99,   100,     1,   410,
     411,     2,     3,   412,   421,   422,     4,   255,     5,     6,
       7,     8,   309,   256,   274,     9,    10,    11,    12,   257,
      13,    14,    85,    15,    16,   308,    83,    17,    18,    19,
      20,   140,    21,    22,    23,    86,    87,    88,    89,    90,
     130,    70,    91,   295,   222,    81,   331,   233,    93,    94,
      95,    96,    97,    98,    99,   100,   261,   262,   330,    55,
     263,   264,   265,     0,     0,     0,   347,     0,     0,   266,
     267,   268,   274,     0,     0,     0,   269,     0,     0,    85,
       0,     0,   270,     0,     0,     0,     0,     0,   271,     0,
       0,     0,   272,    87,    88,    89,    90,     0,     0,    91,
       0,   273,     0,     0,     0,    93,    94,    95,    96,    97,
      98,    99,   100,   261,   262,     0,     0,   263,   264,   265,
       0,     0,     0,     0,     0,     0,   266,   267,   268,   274,
       0,     0,     0,   269,     0,     0,    85,     0,     0,   270,
       0,     0,     0,     0,     0,   271,     0,     0,     0,   272,
      87,    88,    89,    90,     0,     0,    91,     0,   415,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    99,   100,
     261,   262,     0,     0,   263,   264,   265,     0,     0,     0,
       0,     0,     0,   266,   267,   268,   274,     0,     0,     0,
     269,     0,     0,    85,     0,     0,   270,     0,     0,     0,
       0,     0,   271,     0,     0,     0,   272,    87,    88,    89,
      90,     0,     0,    91,     0,   417,     0,     0,     0,    93,
      94,    95,    96,    97,    98,    99,   100,   261,   262,     0,
       0,   263,   264,   265,     0,     0,     0,     0,     0,     0,
     266,   267,   268,   274,     0,     0,     0,   269,     0,     0,
      85,     0,     0,   270,     0,     0,     0,     0,     0,   271,
       0,     0,     0,   272,    87,    88,    89,    90,     0,     0,
      91,     0,     0,     0,     0,     0,    93,    94,    95,    96,
      97,    98,    99,   100,     0,     0,     2,     3,     0,     0,
       0,     4,     0,     5,     0,     0,     8,     0,     0,     0,
     274,    10,    11,    12,     0,    13,    14,    85,     0,    16,
       0,     0,    17,    18,    19,    20,     0,    21,    22,    23,
      86,    87,    88,    89,    90,     3,     0,    91,     0,     0,
       0,     0,     0,    93,    94,    95,    96,    97,    98,    99,
     100,    12,     0,     0,     0,    85,   122,     0,     0,     0,
       0,     0,     0,    20,     0,     0,     0,     0,    86,    87,
      88,    89,    90,     3,   123,    91,     0,     0,     0,     0,
       0,    93,    94,    95,   124,    97,    98,    99,   100,    12,
       0,     0,     0,    85,     0,     0,     0,     0,     0,     0,
       0,    20,     0,     0,     0,     0,    86,    87,    88,    89,
      90,     3,   204,    91,     0,     0,     0,     0,     0,    93,
      94,    95,   205,    97,    98,    99,   100,    12,     0,     0,
       0,    85,     0,     0,     0,     0,     0,     0,     0,    20,
       0,     0,     0,     0,    86,    87,    88,    89,    90,     0,
       0,    91,    85,     0,     0,     0,     0,    93,    94,    95,
      96,    97,    98,    99,   100,    86,    87,    88,    89,    90,
       0,     0,    91,     0,     0,     0,     0,    85,    93,    94,
      95,    96,    97,    98,    99,   100,     0,     0,     0,     0,
      86,    87,    88,    89,    90,     0,     0,    91,     0,     0,
       0,     0,   319,    93,    94,    95,    96,    97,    98,    99,
     100,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     8,     0,     0,   274,     9,    10,
      11,    12,     0,    13,    14,     0,    15,    16,     0,     0,
      17,    18,    19,    20,     0,    21,    22,    23,     2,     3,
       0,     0,     0,     4,     0,     5,   207,     0,     8,     0,
       0,     0,     0,    10,    11,    12,     0,    13,    14,     0,
       0,    16,     0,     0,    17,    18,    19,    20,     0,    21,
      22,    23,     0,     2,     3,     0,     0,     0,     4,     0,
       5,     0,   138,     8,     0,     0,     0,     0,    10,    11,
      12,     0,    13,    14,     0,     0,    16,     0,     0,    17,
      18,    19,    20,     0,    21,    22,    23,    54,     0,     0,
       0,     1,     0,     0,     2,     3,     0,   214,     0,     4,
       0,     5,     6,     7,     8,     0,     0,     0,     9,    10,
      11,    12,     0,    13,    14,     0,    15,    16,     0,     0,
      17,    18,    19,    20,     0,    21,    22,    23,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     8,     0,     0,     0,     9,    10,    11,    12,     0,
      13,    14,     0,    15,    16,     0,     0,    17,    18,    19,
      20,     0,    21,    22,    23,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     0,     8,     0,     0,     0,     0,
      10,    11,    12,     0,    13,    14,     0,    85,    16,     0,
       0,    17,    18,    19,    20,     0,    21,    22,    23,     0,
      86,    87,    88,    89,    90,     0,     0,    91,    85,    92,
       0,     0,     0,    93,    94,    95,    96,    97,    98,    99,
     100,    86,    87,    88,    89,    90,     0,     0,    91,    85,
     299,     0,     0,     0,    93,    94,    95,    96,    97,    98,
      99,   100,    86,    87,    88,    89,    90,     0,     0,   144,
      85,     0,     0,     0,     0,    93,    94,    95,    96,    97,
      98,    99,   100,    86,    87,    88,    89,    90,     0,     0,
     157,    85,     0,     0,     0,     0,    93,    94,    95,    96,
      97,    98,    99,   100,    86,    87,    88,    89,    90,     0,
       0,    91,     0,     0,     0,     0,     0,    93,    94,    95,
      96,    97,    98,    99,   100
};

static const yytype_int16 yycheck[] =
{
       0,    63,    91,     0,    25,    69,    68,   153,   133,   105,
     230,   141,    68,    74,    49,    47,   141,    41,    39,    49,
     150,   338,    51,    72,    48,   150,   314,    76,    41,    26,
      27,    49,    49,    33,    31,    32,    33,    51,   197,    49,
      51,    49,    91,    50,    44,    85,    27,   335,   338,    77,
      31,    32,    73,    93,    94,   144,    91,   345,   338,    91,
     122,    91,    91,    91,   126,   105,   122,    67,   157,   130,
      46,   160,   360,    91,    91,    50,    52,    91,    41,   396,
      91,    91,    51,    91,   180,   181,   182,    50,   376,   219,
      46,   153,    48,   133,   219,   144,   413,   414,     8,   161,
     396,   141,    71,    72,    80,    74,   396,    76,   157,   198,
     150,    78,    78,   401,    24,   177,   396,   413,   414,   338,
      41,   280,    91,   413,   414,    91,    36,    48,    41,   349,
     226,   128,   262,   413,   414,    50,    57,   262,    51,   201,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   315,   303,    78,    91,
      57,   130,   339,   225,   323,    62,    63,   344,   346,    78,
      46,    91,    40,   351,    41,   144,    52,   396,   337,   219,
     269,    48,    91,    51,   382,   310,   226,   208,   157,    41,
      57,   338,    60,   352,   413,   414,    48,   218,    41,   144,
      68,   399,   400,    71,    72,    57,    74,    49,    76,   368,
      77,   370,   157,   372,    41,   374,   375,    57,   258,   259,
     367,    80,   262,    91,   402,    77,    78,   386,   387,   318,
     389,    80,   321,   380,   381,   394,   395,   415,    56,   417,
      46,   303,    46,    72,   306,    51,    52,    51,    52,   396,
      73,   410,   411,    74,   122,    47,    58,    59,   126,    50,
     324,    47,   130,    64,    65,    77,   413,   414,    75,    76,
     310,    66,    67,    68,    69,    49,   144,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,   377,   157,
     379,    70,    71,    41,   358,    41,   293,   361,   183,   184,
      41,   390,    47,   392,   393,     4,   185,   186,     7,     8,
     191,   192,    47,    12,    47,    14,    15,    16,    17,    49,
      91,    41,    21,    22,    23,    24,    49,    26,    27,    47,
      29,    30,    49,   201,    33,    34,    35,    36,    91,    38,
      39,    40,   187,   188,   189,   190,    49,    78,    41,    78,
      77,    50,    48,     4,    48,    77,     7,     8,    47,    51,
      51,    12,    50,    14,    15,    16,    17,   367,    77,    50,
      21,    22,    23,    24,    48,    26,    27,    78,    29,    30,
      48,    80,    33,    34,    35,    36,    91,    38,    39,    40,
      46,    49,    48,    37,    51,    48,    52,    53,    54,    55,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    51,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    79,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    37,    48,    48,    13,    50,    50,    78,    78,
      54,    55,    56,    57,    58,    59,    60,    61,     4,    49,
      49,     7,     8,    51,    51,    51,    12,   193,    14,    15,
      16,    17,   259,   194,    78,    21,    22,    23,    24,   195,
      26,    27,    28,    29,    30,   258,    62,    33,    34,    35,
      36,    76,    38,    39,    40,    41,    42,    43,    44,    45,
      71,    46,    48,   218,   143,    59,   299,   155,    54,    55,
      56,    57,    58,    59,    60,    61,     5,     6,   293,    33,
       9,    10,    11,    -1,    -1,    -1,   326,    -1,    -1,    18,
      19,    20,    78,    -1,    -1,    -1,    25,    -1,    -1,    28,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,    48,
      -1,    50,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,     5,     6,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    78,
      -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    48,    -1,    50,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
       5,     6,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    78,    -1,    -1,    -1,
      25,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,    44,
      45,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,     5,     6,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    78,    -1,    -1,    -1,    25,    -1,    -1,
      28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,
      -1,    -1,    -1,    41,    42,    43,    44,    45,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    -1,    -1,     7,     8,    -1,    -1,
      -1,    12,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,
      78,    22,    23,    24,    -1,    26,    27,    28,    -1,    30,
      -1,    -1,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,     8,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    42,
      43,    44,    45,     8,    47,    48,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    24,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,    -1,    -1,    41,    42,    43,    44,
      45,     8,    47,    48,    -1,    -1,    -1,    -1,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,    24,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    48,    28,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,    41,    42,    43,    44,    45,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    28,    54,    55,
      56,    57,    58,    59,    60,    61,    -1,    -1,    -1,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    78,    54,    55,    56,    57,    58,    59,    60,
      61,     4,    -1,    -1,     7,     8,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    78,    21,    22,
      23,    24,    -1,    26,    27,    -1,    29,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    38,    39,    40,     7,     8,
      -1,    -1,    -1,    12,    -1,    14,    49,    -1,    17,    -1,
      -1,    -1,    -1,    22,    23,    24,    -1,    26,    27,    -1,
      -1,    30,    -1,    -1,    33,    34,    35,    36,    -1,    38,
      39,    40,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,
      14,    -1,    51,    17,    -1,    -1,    -1,    -1,    22,    23,
      24,    -1,    26,    27,    -1,    -1,    30,    -1,    -1,    33,
      34,    35,    36,    -1,    38,    39,    40,     0,    -1,    -1,
      -1,     4,    -1,    -1,     7,     8,    -1,    51,    -1,    12,
      -1,    14,    15,    16,    17,    -1,    -1,    -1,    21,    22,
      23,    24,    -1,    26,    27,    -1,    29,    30,    -1,    -1,
      33,    34,    35,    36,    -1,    38,    39,    40,     4,    -1,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,    17,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,     7,     8,    -1,    -1,    -1,
      12,    -1,    14,    -1,    -1,    17,    -1,    -1,    -1,    -1,
      22,    23,    24,    -1,    26,    27,    -1,    28,    30,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    39,    40,    -1,
      41,    42,    43,    44,    45,    -1,    -1,    48,    28,    50,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,    41,    42,    43,    44,    45,    -1,    -1,    48,    28,
      50,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    41,    42,    43,    44,    45,    -1,    -1,    48,
      28,    -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,
      59,    60,    61,    41,    42,    43,    44,    45,    -1,    -1,
      48,    28,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    41,    42,    43,    44,    45,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,     8,    12,    14,    15,    16,    17,    21,
      22,    23,    24,    26,    27,    29,    30,    33,    34,    35,
      36,    38,    39,    40,   119,   121,   125,   126,   129,   130,
     135,   139,   140,   168,   169,   170,    41,   136,    41,    48,
      57,   120,   123,   124,   141,   142,   144,   121,   122,   122,
      41,    50,   122,   122,     0,   169,    50,   141,   139,   143,
     145,    78,    91,    80,   119,   121,   171,   172,    46,    48,
     142,    50,   126,   127,   131,   132,   139,    41,   137,   138,
      49,   144,   139,   124,   141,    28,    41,    42,    43,    44,
      45,    48,    50,    54,    55,    56,    57,    58,    59,    60,
      61,    96,    97,    98,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   151,
      95,   119,    29,    47,    57,   115,   145,    41,    95,   149,
     131,   127,   128,    77,    78,   133,   134,   141,    51,   132,
     128,    80,    51,    91,    48,   101,   115,   117,   127,   150,
      46,    52,   152,   153,   154,   155,   156,    48,   101,   101,
      46,    48,    52,    53,    54,    55,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   116,   101,   103,
      57,    62,    63,    58,    59,    64,    65,    66,    67,    68,
      69,    70,    71,    56,    72,    73,    74,    75,    76,    50,
     115,   145,    47,    47,    47,    57,   115,    49,   121,   146,
     147,   148,    49,    91,    51,   114,   118,    78,    91,    77,
     118,    51,   138,   150,    49,    91,    49,   118,    41,    51,
      91,   151,    80,   156,   150,   117,    99,   100,   115,    41,
      41,   115,   103,   103,   103,   104,   104,   105,   105,   106,
     106,   106,   106,   107,   107,   108,   109,   110,   173,   173,
     117,     5,     6,     9,    10,    11,    18,    19,    20,    25,
      31,    37,    41,    50,    78,   117,   119,   157,   159,   160,
     161,   162,   163,   164,   165,   166,   167,    47,   115,    47,
      47,   141,    49,    91,    41,   134,   118,    49,   115,    50,
     103,    47,    51,   153,    49,    47,    91,    49,   111,   112,
      77,    78,   118,    78,    77,   176,   174,    41,    48,    78,
     117,    48,   175,    77,   177,    78,   173,    51,    47,    79,
     148,   152,   151,   115,   114,    77,   157,    50,   173,    48,
      78,   117,    78,   117,    48,   173,    95,   163,    51,    91,
     157,   173,   158,   159,   164,   165,   166,   167,   177,   178,
      49,   177,   157,   162,    51,   162,   173,    95,    49,   157,
      95,    51,    51,    37,   119,   164,   173,   173,   173,    48,
     173,   173,   157,   117,    37,   117,   164,   164,   178,    49,
      48,    49,   173,   173,    13,    50,   173,   117,    78,   117,
     117,   173,   173,   158,    49,   178,   178,   157,   162,    78,
      49,    49,    51,   173,   173,    50,   158,    50,   158,   162,
     162,    51,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    96,    96,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    99,
      99,   100,   100,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   102,   102,   102,   103,   103,   104,   104,   104,
     104,   105,   105,   105,   106,   106,   106,   107,   107,   107,
     107,   107,   108,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     117,   117,   118,   119,   120,   120,   121,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   125,   125,   125,   125,
     126,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   127,   127,   128,   128,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   134,   135,   135,   135,   136,   136,   137,   137,   138,
     138,   139,   139,   139,   140,   141,   141,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   148,   149,   149,   150,   151,   151,   151,   152,   152,
     153,   153,   154,   155,   155,   156,   156,   157,   157,   157,
     157,   157,   157,   158,   158,   158,   158,   158,   159,   159,
     159,   160,   161,   161,   162,   162,   163,   163,   164,   164,
     165,   165,   165,   166,   166,   166,   166,   166,   166,   166,
     166,   167,   167,   167,   167,   167,   168,   168,   169,   169,
     170,   171,   171,   172,   172,   173,   174,   175,   176,   177,
     178
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     1,     1,     3,
       1,     4,     4,     3,     3,     2,     2,     6,     7,     1,
       3,     1,     0,     1,     2,     2,     2,     2,     4,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     4,     1,     4,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     3,     1,     0,     2,     2,     2,     2,
       1,     0,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     1,     0,     4,     5,
       2,     1,     1,     1,     2,     2,     3,     1,     3,     2,
       3,     1,     5,     6,     2,     1,     0,     1,     3,     1,
       3,     1,     1,     1,     1,     2,     1,     1,     3,     5,
       4,     4,     3,     6,     5,     5,     4,     5,     4,     4,
       1,     0,     2,     3,     1,     2,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     3,     4,     2,     4,
       1,     0,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       3,     5,     1,     3,     1,     0,     1,     1,     1,     2,
       8,    11,     5,    10,    12,    10,    12,    14,    14,    16,
      16,     3,     2,     2,     3,     2,     1,     2,     1,     1,
       7,     1,     0,     1,     2,     0,     0,     0,     0,     0,
       0
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
  case 2: /* changetable: %empty  */
#line 190 "ass5_21CS30003_21CS30023.y"
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
#line 2008 "y.tab.c"
    break;

  case 3: /* constant: INTEGER_CONST  */
#line 208 "ass5_21CS30003_21CS30023.y"
                                  { 
                        // Here we are creating a new instance and storing it
                        (yyval.expr)=new Expression();	
                        string p=convertIntToString((yyvsp[0].int_val));
                        (yyval.expr)->loc=gentemp(new symboltype("int"),p);
                        Q.emit("=",(yyval.expr)->loc->name,p);
                    }
#line 2020 "y.tab.c"
    break;

  case 4: /* constant: FLOAT_CONST  */
#line 216 "ass5_21CS30003_21CS30023.y"
                    {                                                                         
                        (yyval.expr)=new Expression();
                        string p=convertFloatToString((yyvsp[0].float_val));
                        (yyval.expr)->loc=gentemp(new symboltype("float"),p);
                        Q.emit("=",(yyval.expr)->loc->name,p);
                    }
#line 2031 "y.tab.c"
    break;

  case 5: /* constant: CHAR_CONST  */
#line 223 "ass5_21CS30003_21CS30023.y"
                    {                                                                        
                        (yyval.expr)=new Expression();
                        (yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].char_val));
                        Q.emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_val)));
                    }
#line 2041 "y.tab.c"
    break;

  case 6: /* constant: STRING_LITERAL  */
#line 229 "ass5_21CS30003_21CS30023.y"
                    {                                                                        
                        (yyval.expr)=new Expression();
                        (yyval.expr)->loc=gentemp(new symboltype("pointer"),(yyvsp[0].char_val));
                        Q.emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_val)));
                    }
#line 2051 "y.tab.c"
    break;

  case 7: /* primary_expression: IDENTIFIER  */
#line 238 "ass5_21CS30003_21CS30023.y"
                    {
                        (yyval.expr)=new Expression();                                                  
                        (yyval.expr)->loc=(yyvsp[0].symp);
                        (yyval.expr)->type="not-boolean";
                    }
#line 2061 "y.tab.c"
    break;

  case 8: /* primary_expression: constant  */
#line 244 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr) = (yyvsp[0].expr); 
                    }
#line 2069 "y.tab.c"
    break;

  case 9: /* primary_expression: OPENRB expression CLOSERB  */
#line 248 "ass5_21CS30003_21CS30023.y"
                    {                                                                        
                        (yyval.expr)=(yyvsp[-1].expr);
                    }
#line 2077 "y.tab.c"
    break;

  case 10: /* postfix_expression: primary_expression  */
#line 256 "ass5_21CS30003_21CS30023.y"
                    {
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=(yyvsp[0].expr)->loc;	

                        (yyval.A)->type=(yyvsp[0].expr)->loc->type;	
                        (yyval.A)->loc=(yyval.A)->Array;
                    }
#line 2089 "y.tab.c"
    break;

  case 11: /* postfix_expression: postfix_expression OPENSB expression CLOSESB  */
#line 264 "ass5_21CS30003_21CS30023.y"
                    { 	
		
                        (yyval.A)=new Array();
                        (yyval.A)->type=(yyvsp[-3].A)->type->arrtype;                 
                        (yyval.A)->Array=(yyvsp[-3].A)->Array;                       
                        (yyval.A)->loc=gentemp(new symboltype("int"));     
                        (yyval.A)->atype="arr";                           

                        // Recursive definition is crucial here
                        if((yyvsp[-3].A)->atype=="arr") {			                               
                            sym* t=gentemp(new symboltype("int"));
                            int p=computeSize((yyval.A)->type);
                            string str=convertIntToString(p);
                            Q.emit("*",t->name,(yyvsp[-1].expr)->loc->name,str);
                            Q.emit("+",(yyval.A)->loc->name,(yyvsp[-3].A)->loc->name,t->name);
                        }
                        else {                        
                            int p=computeSize((yyval.A)->type);	
                            string str=convertIntToString(p);
                            Q.emit("*",(yyval.A)->loc->name,(yyvsp[-1].expr)->loc->name,str);
                        }
                    }
#line 2116 "y.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression OPENRB argument_expression_list_opt CLOSERB  */
#line 287 "ass5_21CS30003_21CS30023.y"
                    {
                        // Calling the function with a variable number of arguments
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-3].A)->type);

                        string str=convertIntToString((yyvsp[-1].num_params));
                        Q.emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);
                    }
#line 2129 "y.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 296 "ass5_21CS30003_21CS30023.y"
                    { 

                    }
#line 2137 "y.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression RIGHTARROW IDENTIFIER  */
#line 300 "ass5_21CS30003_21CS30023.y"
                    { 

                    }
#line 2145 "y.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 304 "ass5_21CS30003_21CS30023.y"
                    { 
                        // We generate a temporary instance and add 1 to it
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
                        Q.emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        Q.emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
                    }
#line 2157 "y.tab.c"
    break;

  case 16: /* postfix_expression: postfix_expression MINUSMINS  */
#line 312 "ass5_21CS30003_21CS30023.y"
                    {
                        // We generate a temporary instance and subtract 1 from it
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);

                        Q.emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        Q.emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");	
                    }
#line 2170 "y.tab.c"
    break;

  case 17: /* postfix_expression: OPENRB type_name CLOSERB OPENCB initializer_list CLOSECB  */
#line 321 "ass5_21CS30003_21CS30023.y"
                    { }
#line 2176 "y.tab.c"
    break;

  case 18: /* postfix_expression: OPENRB type_name CLOSERB OPENCB initializer_list COMMA CLOSECB  */
#line 323 "ass5_21CS30003_21CS30023.y"
                    { }
#line 2182 "y.tab.c"
    break;

  case 19: /* argument_expression_list: assignment_expression  */
#line 328 "ass5_21CS30003_21CS30023.y"
                    {
                        (yyval.num_params)=1;                                      //Simple assignment
                        Q.emit("param",(yyvsp[0].expr)->loc->name);	
                    }
#line 2191 "y.tab.c"
    break;

  case 20: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 333 "ass5_21CS30003_21CS30023.y"
                    {
                        (yyval.num_params)=(yyvsp[-2].num_params)+1;                                  //Add 1 here
                        Q.emit("param",(yyvsp[0].expr)->loc->name);
                    }
#line 2200 "y.tab.c"
    break;

  case 21: /* argument_expression_list_opt: argument_expression_list  */
#line 341 "ass5_21CS30003_21CS30023.y"
                    {
                        (yyval.num_params)=(yyvsp[0].num_params); // Simple assignment here
                    }
#line 2208 "y.tab.c"
    break;

  case 22: /* argument_expression_list_opt: %empty  */
#line 345 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.num_params) = 0; // defaults to 0
                    }
#line 2216 "y.tab.c"
    break;

  case 23: /* unary_expression: postfix_expression  */
#line 352 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.A)=(yyvsp[0].A); /* assign $$ =  $1*/
                    }
#line 2224 "y.tab.c"
    break;

  case 24: /* unary_expression: PLUSPLUS unary_expression  */
#line 356 "ass5_21CS30003_21CS30023.y"
                    {  	
                        Q.emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");		// we just add 1 here
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2233 "y.tab.c"
    break;

  case 25: /* unary_expression: MINUSMINS unary_expression  */
#line 361 "ass5_21CS30003_21CS30023.y"
                    {
                        Q.emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");        // we just subtract 1 here
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2242 "y.tab.c"
    break;

  case 26: /* unary_expression: unary_operator cast_expression  */
#line 366 "ass5_21CS30003_21CS30023.y"
                    {   
                        (yyval.A)=new Array();
                        // We need to do case work here
                        switch((yyvsp[-1].unaryOp)) {	  

                            case '&':                                                  // This is ampersand, indicating address value
                                (yyval.A)->Array=gentemp(new symboltype("ptr"));
                                (yyval.A)->Array->type->arrtype=(yyvsp[0].A)->Array->type; 
                                Q.emit("=&",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;

                            case '*':                                                   // Dereferencing operator here
                                (yyval.A)->atype="ptr";
                                (yyval.A)->loc=gentemp((yyvsp[0].A)->Array->type->arrtype);
                                (yyval.A)->Array=(yyvsp[0].A)->Array;
                                Q.emit("=*",(yyval.A)->loc->name,(yyvsp[0].A)->Array->name);
                                break;

                            case '+':  
                                (yyval.A)=(yyvsp[0].A);
                                break;                 // Stays same as +a = a

                            case '-':				   // Just make a temporary vaiable with negative value
                                (yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
                                Q.emit("uminus",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;
                                
                            case '~':                   // The bitwise not
                                (yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
                                Q.emit("~",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;

                            case '!':				// The logical not, again we create a temporary and do our work
                                (yyval.A)->Array=gentemp(new symboltype((yyvsp[0].A)->Array->type->type));
                                Q.emit("!",(yyval.A)->Array->name,(yyvsp[0].A)->Array->name);
                                break;
                        }
                    }
#line 2285 "y.tab.c"
    break;

  case 27: /* unary_expression: SIZEOF unary_expression  */
#line 405 "ass5_21CS30003_21CS30023.y"
                    { 

                    }
#line 2293 "y.tab.c"
    break;

  case 28: /* unary_expression: SIZEOF OPENRB type_name CLOSERB  */
#line 409 "ass5_21CS30003_21CS30023.y"
                    { 

                    }
#line 2301 "y.tab.c"
    break;

  case 29: /* unary_operator: BAND  */
#line 417 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '&'; 
                    }
#line 2309 "y.tab.c"
    break;

  case 30: /* unary_operator: KSTAR  */
#line 421 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '*'; 
                    }
#line 2317 "y.tab.c"
    break;

  case 31: /* unary_operator: PLUS  */
#line 425 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '+'; 
                    }
#line 2325 "y.tab.c"
    break;

  case 32: /* unary_operator: MINUS  */
#line 429 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '-'; 
                    }
#line 2333 "y.tab.c"
    break;

  case 33: /* unary_operator: TILDA  */
#line 433 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '~'; 
                    }
#line 2341 "y.tab.c"
    break;

  case 34: /* unary_operator: NOT  */
#line 437 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '!'; 
                    }
#line 2349 "y.tab.c"
    break;

  case 35: /* cast_expression: unary_expression  */
#line 444 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.A) = (yyvsp[0].A); 
                    }
#line 2357 "y.tab.c"
    break;

  case 36: /* cast_expression: OPENRB type_name CLOSERB cast_expression  */
#line 448 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);             // Convert and assign
                    }
#line 2366 "y.tab.c"
    break;

  case 37: /* multiplicative_expression: cast_expression  */
#line 456 "ass5_21CS30003_21CS30023.y"
                    {
                        (yyval.expr) = new Expression();             

                        // We handle casting by checking types and doing necessary conversions
                        if((yyvsp[0].A)->atype=="arr") {
                            (yyval.expr)->loc = gentemp((yyvsp[0].A)->loc->type);	
                            Q.emit("=[]", (yyval.expr)->loc->name, (yyvsp[0].A)->Array->name, (yyvsp[0].A)->loc->name);     
                        }

                        else if((yyvsp[0].A)->atype=="ptr") { 
                            (yyval.expr)->loc = (yyvsp[0].A)->loc;        
                        }
                        else {
                            (yyval.expr)->loc = (yyvsp[0].A)->Array;
                        }
                    }
#line 2387 "y.tab.c"
    break;

  case 38: /* multiplicative_expression: multiplicative_expression KSTAR cast_expression  */
#line 473 "ass5_21CS30003_21CS30023.y"
                    { 
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)) {
                            // Types are not same
                            cout<<"Line: "<<line<<"\n";
                            yyerror("There is a type error in our program!");
                            return 1;
                        }    
                        else {
                            // Simply assign here
                            (yyval.expr) = new Expression();	
                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            Q.emit("*", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
                        }
                    }
#line 2406 "y.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression DIVIDE cast_expression  */
#line 488 "ass5_21CS30003_21CS30023.y"
                    {
                        //Types are not same
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)){ 
                            cout << "There is a type error in our Program"<< endl;
                        }
                        else {
                            // Just do the operation
                            (yyval.expr) = new Expression();
                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            Q.emit("/", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);
                        }
                    }
#line 2423 "y.tab.c"
    break;

  case 40: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 501 "ass5_21CS30003_21CS30023.y"
                    {
                        // Incompatible types
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].A)->Array)) 
                            cout << "There is a type error in our Program"<< endl;		
                        else {
                            // Just do the operation
                            (yyval.expr) = new Expression();

                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            Q.emit("%", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].A)->Array->name);	
                        }
                    }
#line 2440 "y.tab.c"
    break;

  case 41: /* additive_expression: multiplicative_expression  */
#line 518 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2448 "y.tab.c"
    break;

  case 42: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 522 "ass5_21CS30003_21CS30023.y"
                    {
                        // Incompatible types
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
                            cout << "There is a type error in our Program"<< endl;
                        else {
                            // Continue with the operation
                            (yyval.expr) = new Expression();	

                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            Q.emit("+", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        }
                    }
#line 2465 "y.tab.c"
    break;

  case 43: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 535 "ass5_21CS30003_21CS30023.y"
                    {
                        // Check and do the operation
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc))
                            cout << "There is a type error in our Program"<< endl;		
                        else        
                        {	
                            (yyval.expr) = new Expression();	

                            (yyval.expr)->loc = gentemp(new symboltype((yyvsp[-2].expr)->loc->type->type));
                            Q.emit("-", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        }
                    }
#line 2482 "y.tab.c"
    break;

  case 44: /* shift_expression: additive_expression  */
#line 551 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2490 "y.tab.c"
    break;

  case 45: /* shift_expression: shift_expression LEFTS additive_expression  */
#line 555 "ass5_21CS30003_21CS30023.y"
                    { 
                        if(!((yyvsp[0].expr)->loc->type->type == "int"))
                            cout << "There is a type error in our Program"<< endl; 		
                        else {		
                            (yyval.expr) = new Expression();		

                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            Q.emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);		
                        }
                    }
#line 2505 "y.tab.c"
    break;

  case 46: /* shift_expression: shift_expression RIGHTS additive_expression  */
#line 566 "ass5_21CS30003_21CS30023.y"
                    { 	
                        // Check and carry out operation
                        if(!((yyvsp[0].expr)->loc->type->type == "int")) {
                            cout << "There is a type Error in our Program"<< endl; 		
                        }
                        else {			
                            (yyval.expr) = new Expression();	

                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            Q.emit(">>", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);			
                        }
                    }
#line 2522 "y.tab.c"
    break;

  case 47: /* relational_expression: shift_expression  */
#line 582 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2530 "y.tab.c"
    break;

  case 48: /* relational_expression: relational_expression LESSTHAN shift_expression  */
#line 586 "ass5_21CS30003_21CS30023.y"
                    {
                        // Check and do the operation
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            yyerror("There is a type error in our Program");
                        }
                        else 
                        {      
                            (yyval.expr) = new Expression();

                            (yyval.expr)->type = "bool";                         
                            // Need to update truelist and falselist since type is boolean
                            (yyval.expr)->truelist = makelist(nextinstr());     
                            (yyval.expr)->falselist = makelist(nextinstr()+1);
                            
                            Q.emit("<", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);     
                            Q.emit("goto", "");	
                        }
                    }
#line 2553 "y.tab.c"
    break;

  case 49: /* relational_expression: relational_expression GREATERTHAN shift_expression  */
#line 605 "ass5_21CS30003_21CS30023.y"
                    {
                        // Check and carry out conversions and generate reqd attributed for bool type
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            yyerror("There is a type error in our program");
                        }
                        else {	
                            (yyval.expr) = new Expression();		

                            (yyval.expr)->type = "bool";
                            // Need to update truelist and falselist since type is boolean
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);

                            Q.emit(">", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            Q.emit("goto", "");
                        }	
                    }
#line 2575 "y.tab.c"
    break;

  case 50: /* relational_expression: relational_expression LESSEQUAL shift_expression  */
#line 623 "ass5_21CS30003_21CS30023.y"
                    {
                        // Compare and carry out operation
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {			
                            (yyval.expr) = new Expression();		

                            (yyval.expr)->type = "bool";
                            // Need to update the attributes
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);

                            Q.emit("<=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            Q.emit("goto", "");
                        }		
                    }
#line 2597 "y.tab.c"
    break;

  case 51: /* relational_expression: relational_expression GREATEREQUAL shift_expression  */
#line 641 "ass5_21CS30003_21CS30023.y"
                    {
                        // Compare and carry out operation
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)){
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {	
                            (yyval.expr) = new Expression();	
                            
                            (yyval.expr)->type = "bool";
                            // Need to update the attributes for boolean data type
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);

                            Q.emit(">=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            Q.emit("goto", "");
                        }
                    }
#line 2619 "y.tab.c"
    break;

  case 52: /* equality_expression: relational_expression  */
#line 662 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2627 "y.tab.c"
    break;

  case 53: /* equality_expression: equality_expression EQUALEQUAL relational_expression  */
#line 666 "ass5_21CS30003_21CS30023.y"
                    {
                        // Check and assign
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {
                            // We need to convert here
                            convertBoolToInt((yyvsp[-2].expr));                  
                            convertBoolToInt((yyvsp[0].expr));

                            (yyval.expr) = new Expression();

                            (yyval.expr)->type = "bool";
                            (yyval.expr)->truelist = makelist(nextinstr());            
                            (yyval.expr)->falselist = makelist(nextinstr()+1); 

                            Q.emit("==", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);      
                            Q.emit("goto", "");				
                        }
                    }
#line 2652 "y.tab.c"
    break;

  case 54: /* equality_expression: equality_expression NOTEQUAL relational_expression  */
#line 687 "ass5_21CS30003_21CS30023.y"
                    {
                        // Similar to last one, just that we check for inequality here
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {			
                            convertBoolToInt((yyvsp[-2].expr));
                            convertBoolToInt((yyvsp[0].expr));

                            (yyval.expr) = new Expression();                 

                            (yyval.expr)->type = "bool";
                            (yyval.expr)->truelist = makelist(nextinstr());
                            (yyval.expr)->falselist = makelist(nextinstr()+1);

                            Q.emit("!=", "", (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                            Q.emit("goto", "");
                        }
                    }
#line 2676 "y.tab.c"
    break;

  case 55: /* and_expression: equality_expression  */
#line 710 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2684 "y.tab.c"
    break;

  case 56: /* and_expression: and_expression BAND equality_expression  */
#line 714 "ass5_21CS30003_21CS30023.y"
                    {
                        // Check and assign similar to last one, but since it is not boolean,
                        // we just update the loc (its only int)
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)){		
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {              
                            convertBoolToInt((yyvsp[-2].expr));                             
                            convertBoolToInt((yyvsp[0].expr));			

                            (yyval.expr) = new Expression();

                            (yyval.expr)->type = "not-boolean";                   
                            (yyval.expr)->loc = gentemp(new symboltype("int"));

                            Q.emit("&", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);               
                        }
                    }
#line 2707 "y.tab.c"
    break;

  case 57: /* exclusive_or_expression: and_expression  */
#line 736 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2715 "y.tab.c"
    break;

  case 58: /* exclusive_or_expression: exclusive_or_expression XOR and_expression  */
#line 740 "ass5_21CS30003_21CS30023.y"
                    {
                        // Similar to the last one, check, assign loc if alright and emit quad
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) {
                            cout << "There is a type error in our program"<< endl;
                        }
                        else {
                            convertBoolToInt((yyvsp[-2].expr));
                            convertBoolToInt((yyvsp[0].expr));

                            (yyval.expr) = new Expression();

                            (yyval.expr)->type = "not-boolean";
                            (yyval.expr)->loc = gentemp(new symboltype("int"));

                            Q.emit("^", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        }
                    }
#line 2737 "y.tab.c"
    break;

  case 59: /* inclusive_or_expression: exclusive_or_expression  */
#line 761 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2745 "y.tab.c"
    break;

  case 60: /* inclusive_or_expression: inclusive_or_expression BITWISEOR exclusive_or_expression  */
#line 765 "ass5_21CS30003_21CS30023.y"
                    { 
                        // Again same as the last one, convert to int, asign loc and emit quad
                        if(!compareSymbolType((yyvsp[-2].expr)->loc, (yyvsp[0].expr)->loc)) { 
                            yyerror("There is a type error in our program"); 
                        }
                        else {
                            convertBoolToInt((yyvsp[-2].expr));		
                            convertBoolToInt((yyvsp[0].expr));

                            (yyval.expr) = new Expression();

                            (yyval.expr)->type = "not-boolean";
                            (yyval.expr)->loc = gentemp(new symboltype("int"));

                            Q.emit("|", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);
                        } 
                    }
#line 2767 "y.tab.c"
    break;

  case 61: /* logical_and_expression: inclusive_or_expression  */
#line 786 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2775 "y.tab.c"
    break;

  case 62: /* logical_and_expression: logical_and_expression AND M inclusive_or_expression  */
#line 790 "ass5_21CS30003_21CS30023.y"
                    { 
                        // Converto to bool before the logical operation
                        convertIntToBool((yyvsp[0].expr));                                  
                        convertIntToBool((yyvsp[-3].expr));                                 

                        // Generate new boolean expression
                        (yyval.expr) = new Expression();                               
                        (yyval.expr)->type = "bool";
                        
                        // Do the backpatching and generate the attributes
                        backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));                        
                        (yyval.expr)->truelist = (yyvsp[0].expr)->truelist;                       
                        (yyval.expr)->falselist = merge((yyvsp[-3].expr)->falselist, (yyvsp[0].expr)->falselist);   
                    }
#line 2794 "y.tab.c"
    break;

  case 63: /* logical_or_expression: logical_and_expression  */
#line 808 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2802 "y.tab.c"
    break;

  case 64: /* logical_or_expression: logical_or_expression OR M logical_and_expression  */
#line 812 "ass5_21CS30003_21CS30023.y"
                    { 
                        // Similar to last one
                        convertIntToBool((yyvsp[0].expr));			 
                        convertIntToBool((yyvsp[-3].expr));			

                        (yyval.expr) = new Expression();	
                        (yyval.expr)->type = "bool";

                        // As per requirement
                        backpatch((yyvsp[-3].expr)->falselist, (yyvsp[-1].instr_number));		
                        (yyval.expr)->truelist = merge((yyvsp[-3].expr)->truelist, (yyvsp[0].expr)->truelist);		
                        (yyval.expr)->falselist = (yyvsp[0].expr)->falselist;		 	
                    }
#line 2820 "y.tab.c"
    break;

  case 65: /* conditional_expression: logical_or_expression  */
#line 829 "ass5_21CS30003_21CS30023.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2826 "y.tab.c"
    break;

  case 66: /* conditional_expression: logical_or_expression QUESTIONMARK expression COLON conditional_expression  */
#line 831 "ass5_21CS30003_21CS30023.y"
                    {
                        //normal conversion method to get conditional expressions
                        (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->loc->type);       //generate temporary for expression
                        (yyval.expr)->loc->update((yyvsp[-2].expr)->loc->type);
                        
                        backpatch((yyvsp[-4].expr)->truelist, nextinstr());           // $1 true goes to expression
                        Q.emit("=", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name);      // make it equal to first expression
                        list<int> l = makelist(nextinstr());            //makelist next instruction
                        Q.emit("goto", "");                             //prevent fallthrough

                        backpatch((yyvsp[-4].expr)->falselist, nextinstr());          // $1 false goes to conditional expression
                        Q.emit("=", (yyval.expr)->loc->name, (yyvsp[0].expr)->loc->name);      // Second Expression

                        backpatch(l, nextinstr());                      // fallthrough, go to next instruction
                    }
#line 2846 "y.tab.c"
    break;

  case 67: /* assignment_expression: conditional_expression  */
#line 850 "ass5_21CS30003_21CS30023.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2852 "y.tab.c"
    break;

  case 68: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 852 "ass5_21CS30003_21CS30023.y"
                    {
                        if((yyvsp[-2].A)->atype=="arr")                                            // if type is arr, Check and convert then Q.emit as []=
                        {
                            (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->type->type);
                            Q.emit("[]=", (yyvsp[-2].A)->Array->name, (yyvsp[-2].A)->loc->name, (yyvsp[0].expr)->loc->name);		
                        }
                        else if((yyvsp[-2].A)->atype=="ptr")                                       // if type is ptr, simply Q.emit as *=
                        {
                            Q.emit("*=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);	
                        }
                        else                                                            // otherwise simple assignment
                        {
                            (yyvsp[0].expr)->loc = convertType((yyvsp[0].expr)->loc, (yyvsp[-2].A)->Array->type->type);
                            Q.emit("=", (yyvsp[-2].A)->Array->name, (yyvsp[0].expr)->loc->name);
                        }
                        
                        (yyval.expr) = (yyvsp[0].expr);
                    }
#line 2875 "y.tab.c"
    break;

  case 69: /* assignment_operator: EQUAL  */
#line 875 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2881 "y.tab.c"
    break;

  case 70: /* assignment_operator: MULEQUAL  */
#line 877 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2887 "y.tab.c"
    break;

  case 71: /* assignment_operator: DIVEQUAL  */
#line 879 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2893 "y.tab.c"
    break;

  case 72: /* assignment_operator: MODEQUAL  */
#line 881 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2899 "y.tab.c"
    break;

  case 73: /* assignment_operator: PLUSEQUAL  */
#line 883 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2905 "y.tab.c"
    break;

  case 74: /* assignment_operator: MINUSEQUAL  */
#line 885 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2911 "y.tab.c"
    break;

  case 75: /* assignment_operator: SHIFTLEQUAL  */
#line 887 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2917 "y.tab.c"
    break;

  case 76: /* assignment_operator: SHIFTREQUAL  */
#line 889 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2923 "y.tab.c"
    break;

  case 77: /* assignment_operator: ANDEQUAL  */
#line 891 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2929 "y.tab.c"
    break;

  case 78: /* assignment_operator: XOREQUAL  */
#line 893 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2935 "y.tab.c"
    break;

  case 79: /* assignment_operator: OREQUAL  */
#line 895 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2941 "y.tab.c"
    break;

  case 80: /* expression: assignment_expression  */
#line 899 "ass5_21CS30003_21CS30023.y"
                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2947 "y.tab.c"
    break;

  case 81: /* expression: expression COMMA assignment_expression  */
#line 901 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2953 "y.tab.c"
    break;

  case 82: /* constant_expression: conditional_expression  */
#line 906 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2959 "y.tab.c"
    break;

  case 83: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 911 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2965 "y.tab.c"
    break;

  case 84: /* init_declarator_list_opt: init_declarator_list  */
#line 915 "ass5_21CS30003_21CS30023.y"
                                         {  }
#line 2971 "y.tab.c"
    break;

  case 85: /* init_declarator_list_opt: %empty  */
#line 916 "ass5_21CS30003_21CS30023.y"
                            {  }
#line 2977 "y.tab.c"
    break;

  case 86: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 921 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2983 "y.tab.c"
    break;

  case 87: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 923 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2989 "y.tab.c"
    break;

  case 88: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 925 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 2995 "y.tab.c"
    break;

  case 89: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 927 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3001 "y.tab.c"
    break;

  case 90: /* declaration_specifiers_opt: declaration_specifiers  */
#line 931 "ass5_21CS30003_21CS30023.y"
                                           { }
#line 3007 "y.tab.c"
    break;

  case 91: /* declaration_specifiers_opt: %empty  */
#line 932 "ass5_21CS30003_21CS30023.y"
                             {  }
#line 3013 "y.tab.c"
    break;

  case 92: /* init_declarator_list: init_declarator  */
#line 937 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3019 "y.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 939 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3025 "y.tab.c"
    break;

  case 94: /* init_declarator: declarator  */
#line 944 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.symp) = (yyvsp[0].symp);                            // Simple Assign 
                    }
#line 3033 "y.tab.c"
    break;

  case 95: /* init_declarator: declarator EQUAL initializer  */
#line 948 "ass5_21CS30003_21CS30023.y"
                    {
                        if((yyvsp[0].symp)->val != ""){
                            (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;                // get the initial value
                        }
                        Q.emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);	// emit that initial value with Assign operator
                    }
#line 3044 "y.tab.c"
    break;

  case 96: /* storage_class_specifier: EXTERN  */
#line 958 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3050 "y.tab.c"
    break;

  case 97: /* storage_class_specifier: STATIC  */
#line 960 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3056 "y.tab.c"
    break;

  case 98: /* storage_class_specifier: AUTO  */
#line 962 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3062 "y.tab.c"
    break;

  case 99: /* storage_class_specifier: REGISTER  */
#line 964 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3068 "y.tab.c"
    break;

  case 100: /* type_specifier: VOID  */
#line 969 "ass5_21CS30003_21CS30023.y"
                    { var_type="void"; /* Store the latest var type */ }
#line 3074 "y.tab.c"
    break;

  case 101: /* type_specifier: CHAR  */
#line 971 "ass5_21CS30003_21CS30023.y"
                    { var_type="char"; /* Store the latest var type */ }
#line 3080 "y.tab.c"
    break;

  case 102: /* type_specifier: SHORT  */
#line 973 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3086 "y.tab.c"
    break;

  case 103: /* type_specifier: INT  */
#line 975 "ass5_21CS30003_21CS30023.y"
                    { var_type="int"; /* Store the latest var type */ }
#line 3092 "y.tab.c"
    break;

  case 104: /* type_specifier: LONG  */
#line 977 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3098 "y.tab.c"
    break;

  case 105: /* type_specifier: FLOAT  */
#line 979 "ass5_21CS30003_21CS30023.y"
                    { var_type="float"; /* Store the latest var type */ }
#line 3104 "y.tab.c"
    break;

  case 106: /* type_specifier: DOUBLE  */
#line 981 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3110 "y.tab.c"
    break;

  case 107: /* type_specifier: SIGNED  */
#line 983 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3116 "y.tab.c"
    break;

  case 108: /* type_specifier: UNSIGNED  */
#line 985 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3122 "y.tab.c"
    break;

  case 109: /* type_specifier: _BOOL  */
#line 987 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3128 "y.tab.c"
    break;

  case 110: /* type_specifier: _COMPLEX  */
#line 989 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3134 "y.tab.c"
    break;

  case 111: /* type_specifier: _IMAGINARY  */
#line 991 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3140 "y.tab.c"
    break;

  case 112: /* type_specifier: enum_specifier  */
#line 993 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3146 "y.tab.c"
    break;

  case 113: /* type_specifier: struct_or_union_specifier  */
#line 995 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3152 "y.tab.c"
    break;

  case 114: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 1000 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3158 "y.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 1002 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3164 "y.tab.c"
    break;

  case 116: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 1006 "ass5_21CS30003_21CS30023.y"
                                             {  }
#line 3170 "y.tab.c"
    break;

  case 117: /* specifier_qualifier_list_opt: %empty  */
#line 1007 "ass5_21CS30003_21CS30023.y"
                             {  }
#line 3176 "y.tab.c"
    break;

  case 118: /* struct_or_union_specifier: struct_or_union OPENCB struct_declaration_list CLOSECB  */
#line 1012 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3182 "y.tab.c"
    break;

  case 119: /* struct_or_union_specifier: struct_or_union IDENTIFIER OPENCB struct_declaration_list CLOSECB  */
#line 1014 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3188 "y.tab.c"
    break;

  case 120: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 1016 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3194 "y.tab.c"
    break;

  case 121: /* struct_or_union: STRUCT  */
#line 1021 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3200 "y.tab.c"
    break;

  case 122: /* struct_or_union: UNION  */
#line 1023 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3206 "y.tab.c"
    break;

  case 123: /* struct_declaration_list: struct_declaration  */
#line 1028 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3212 "y.tab.c"
    break;

  case 124: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 1030 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3218 "y.tab.c"
    break;

  case 125: /* struct_declaration: specifier_qualifier_list SEMICOLON  */
#line 1035 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3224 "y.tab.c"
    break;

  case 126: /* struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON  */
#line 1037 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3230 "y.tab.c"
    break;

  case 127: /* struct_declarator_list: struct_declarator  */
#line 1042 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3236 "y.tab.c"
    break;

  case 128: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 1044 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3242 "y.tab.c"
    break;

  case 129: /* struct_declarator: COLON constant_expression  */
#line 1048 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3248 "y.tab.c"
    break;

  case 130: /* struct_declarator: declarator COLON constant_expression  */
#line 1050 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3254 "y.tab.c"
    break;

  case 131: /* struct_declarator: declarator  */
#line 1052 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3260 "y.tab.c"
    break;

  case 132: /* enum_specifier: ENUM identifier_opt OPENCB enumerator_list CLOSECB  */
#line 1057 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3266 "y.tab.c"
    break;

  case 133: /* enum_specifier: ENUM identifier_opt OPENCB enumerator_list COMMA CLOSECB  */
#line 1059 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3272 "y.tab.c"
    break;

  case 134: /* enum_specifier: ENUM IDENTIFIER  */
#line 1061 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3278 "y.tab.c"
    break;

  case 135: /* identifier_opt: IDENTIFIER  */
#line 1065 "ass5_21CS30003_21CS30023.y"
                               {  }
#line 3284 "y.tab.c"
    break;

  case 136: /* identifier_opt: %empty  */
#line 1066 "ass5_21CS30003_21CS30023.y"
                             {  }
#line 3290 "y.tab.c"
    break;

  case 137: /* enumerator_list: enumerator  */
#line 1071 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3296 "y.tab.c"
    break;

  case 138: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 1073 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3302 "y.tab.c"
    break;

  case 139: /* enumerator: IDENTIFIER  */
#line 1079 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3308 "y.tab.c"
    break;

  case 140: /* enumerator: IDENTIFIER EQUAL constant_expression  */
#line 1081 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3314 "y.tab.c"
    break;

  case 141: /* type_qualifier: CONST  */
#line 1087 "ass5_21CS30003_21CS30023.y"
                    { /* NOT to be modelled */ }
#line 3320 "y.tab.c"
    break;

  case 142: /* type_qualifier: RESTRICT  */
#line 1089 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3326 "y.tab.c"
    break;

  case 143: /* type_qualifier: VOLATILE  */
#line 1091 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3332 "y.tab.c"
    break;

  case 144: /* function_specifier: INLINE  */
#line 1096 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3338 "y.tab.c"
    break;

  case 145: /* declarator: pointer direct_declarator  */
#line 1101 "ass5_21CS30003_21CS30023.y"
                    {
                        symboltype *t = (yyvsp[-1].sym_type);
                        while(t->arrtype!=NULL)
                        {
                            t = t->arrtype;                                         // Recursively get to the base Array
                        }   
                        t->arrtype = (yyvsp[0].symp)->type;                                      // add the base type 
                        
                        (yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));                                        // update the symbol type
                    }
#line 3353 "y.tab.c"
    break;

  case 146: /* declarator: direct_declarator  */
#line 1111 "ass5_21CS30003_21CS30023.y"
                                        {   }
#line 3359 "y.tab.c"
    break;

  case 147: /* direct_declarator: IDENTIFIER  */
#line 1118 "ass5_21CS30003_21CS30023.y"
                    {
                        //if ID, simply add a new variable of var_type
                        (yyval.symp) = (yyvsp[0].symp)->update(new symboltype(var_type));                                      // update the symbol type to latest type specifier
                        currSymbolPtr = (yyval.symp);	                                                            // store the latest Symbol
                    }
#line 3369 "y.tab.c"
    break;

  case 148: /* direct_declarator: OPENRB declarator CLOSERB  */
#line 1123 "ass5_21CS30003_21CS30023.y"
                                                {(yyval.symp)=(yyvsp[-1].symp);}
#line 3375 "y.tab.c"
    break;

  case 149: /* direct_declarator: direct_declarator OPENSB type_qualifier_list assignment_expression CLOSESB  */
#line 1124 "ass5_21CS30003_21CS30023.y"
                                                                                                 {	}
#line 3381 "y.tab.c"
    break;

  case 150: /* direct_declarator: direct_declarator OPENSB type_qualifier_list CLOSESB  */
#line 1125 "ass5_21CS30003_21CS30023.y"
                                                                           {	}
#line 3387 "y.tab.c"
    break;

  case 151: /* direct_declarator: direct_declarator OPENSB assignment_expression CLOSESB  */
#line 1127 "ass5_21CS30003_21CS30023.y"
                    {
                        symboltype *t = (yyvsp[-3].symp) -> type;
                        symboltype *prev = NULL;                                                        // prev initialized to NULL
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;                                                             // recursively find the base type
                        }
                        if(prev==NULL) 
                        {
                            int temp = atoi((yyvsp[-1].expr)->loc->val.c_str());                                      // temp = string(value)
                            symboltype* s = new symboltype("arr", (yyvsp[-3].symp)->type, temp);                      // Create a new symbol with the initial value
                            (yyval.symp) = (yyvsp[-3].symp)->update(s);                                                         // Update the symbol type
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, atoi((yyvsp[-1].expr)->loc->val.c_str()));      // similar arguments as above		
                            (yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);
                        }
                    }
#line 3412 "y.tab.c"
    break;

  case 152: /* direct_declarator: direct_declarator OPENSB CLOSESB  */
#line 1148 "ass5_21CS30003_21CS30023.y"
                    {
                        symboltype *t = (yyvsp[-2].symp) -> type;
                        symboltype *prev = NULL;                                    // initialize prev to NULL
                        while(t->type == "arr") 
                        {
                            prev = t;	
                            t = t->arrtype;                                         // Recursively find the base type
                        }
                        if(prev==NULL) 
                        {
                            symboltype* s = new symboltype("arr", (yyvsp[-2].symp)->type, 0);     // no initial values, simply keep 0
                            (yyval.symp) = (yyvsp[-2].symp)->update(s);                                     // Update the symboltype of $$
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, 0);
                            (yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
                        }
                    }
#line 3436 "y.tab.c"
    break;

  case 153: /* direct_declarator: direct_declarator OPENSB STATIC type_qualifier_list assignment_expression CLOSESB  */
#line 1167 "ass5_21CS30003_21CS30023.y"
                                                                                                        {	}
#line 3442 "y.tab.c"
    break;

  case 154: /* direct_declarator: direct_declarator OPENSB STATIC assignment_expression CLOSESB  */
#line 1168 "ass5_21CS30003_21CS30023.y"
                                                                                    {	}
#line 3448 "y.tab.c"
    break;

  case 155: /* direct_declarator: direct_declarator OPENSB type_qualifier_list KSTAR CLOSESB  */
#line 1169 "ass5_21CS30003_21CS30023.y"
                                                                                 {	}
#line 3454 "y.tab.c"
    break;

  case 156: /* direct_declarator: direct_declarator OPENSB KSTAR CLOSESB  */
#line 1170 "ass5_21CS30003_21CS30023.y"
                                                             {	}
#line 3460 "y.tab.c"
    break;

  case 157: /* direct_declarator: direct_declarator OPENRB changetable parameter_type_list CLOSERB  */
#line 1172 "ass5_21CS30003_21CS30023.y"
                    {
                        ST->name = (yyvsp[-4].symp)->name;	                    // change the ST name to fun
                        if((yyvsp[-4].symp)->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");          // lookup for return value	
                            s->update((yyvsp[-4].symp)->type);		            // update return type
                        }
                        (yyvsp[-4].symp)->nested=ST;                              // link nested Symbol Table 
                        ST->parent = globalST;                      // link parent Symbol Table
                        
                        changeTable(globalST);				        // Come back to globalsymbol table
                        currSymbolPtr = (yyval.symp);
                    }
#line 3478 "y.tab.c"
    break;

  case 158: /* direct_declarator: direct_declarator OPENRB identifier_list CLOSERB  */
#line 1185 "ass5_21CS30003_21CS30023.y"
                                                                       {	}
#line 3484 "y.tab.c"
    break;

  case 159: /* direct_declarator: direct_declarator OPENRB changetable CLOSERB  */
#line 1187 "ass5_21CS30003_21CS30023.y"
                    {        //similar as above
                        ST->name = (yyvsp[-3].symp)->name;
                        if((yyvsp[-3].symp)->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");
                            s->update((yyvsp[-3].symp)->type);            // update return type
                        }
                        (yyvsp[-3].symp)->nested=ST;                      // link nested Symbol table
                        ST->parent = globalST;              // Set parent to Global Symbol table
                        
                        changeTable(globalST);				// Go back to global Symbol table
                        currSymbolPtr = (yyval.symp);
                    }
#line 3502 "y.tab.c"
    break;

  case 160: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1203 "ass5_21CS30003_21CS30023.y"
                                        { }
#line 3508 "y.tab.c"
    break;

  case 161: /* type_qualifier_list_opt: %empty  */
#line 1204 "ass5_21CS30003_21CS30023.y"
                             {  }
#line 3514 "y.tab.c"
    break;

  case 162: /* pointer: KSTAR type_qualifier_list_opt  */
#line 1210 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr");   //create a new pointer symbol
                    }
#line 3522 "y.tab.c"
    break;

  case 163: /* pointer: KSTAR type_qualifier_list_opt pointer  */
#line 1214 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr",(yyvsp[0].sym_type)); // create the symboltype with $3 symbol type
                    }
#line 3530 "y.tab.c"
    break;

  case 164: /* type_qualifier_list: type_qualifier  */
#line 1221 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3536 "y.tab.c"
    break;

  case 165: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1223 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3542 "y.tab.c"
    break;

  case 166: /* parameter_type_list: parameter_list  */
#line 1228 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3548 "y.tab.c"
    break;

  case 167: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 1230 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3554 "y.tab.c"
    break;

  case 168: /* parameter_list: parameter_declaration  */
#line 1235 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3560 "y.tab.c"
    break;

  case 169: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1237 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3566 "y.tab.c"
    break;

  case 170: /* parameter_declaration: declaration_specifiers declarator  */
#line 1242 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3572 "y.tab.c"
    break;

  case 171: /* parameter_declaration: declaration_specifiers  */
#line 1244 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3578 "y.tab.c"
    break;

  case 172: /* identifier_list: IDENTIFIER  */
#line 1249 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3584 "y.tab.c"
    break;

  case 173: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1251 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3590 "y.tab.c"
    break;

  case 174: /* type_name: specifier_qualifier_list  */
#line 1256 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3596 "y.tab.c"
    break;

  case 175: /* initializer: assignment_expression  */
#line 1261 "ass5_21CS30003_21CS30023.y"
                    { (yyval.symp)=(yyvsp[0].expr)->loc; /* assignment */  }
#line 3602 "y.tab.c"
    break;

  case 176: /* initializer: OPENCB initializer_list CLOSECB  */
#line 1263 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3608 "y.tab.c"
    break;

  case 177: /* initializer: OPENCB initializer_list COMMA CLOSECB  */
#line 1265 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3614 "y.tab.c"
    break;

  case 178: /* initializer_list: designation_opt initializer  */
#line 1270 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3620 "y.tab.c"
    break;

  case 179: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1272 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3626 "y.tab.c"
    break;

  case 180: /* designation_opt: designation  */
#line 1276 "ass5_21CS30003_21CS30023.y"
                                { }
#line 3632 "y.tab.c"
    break;

  case 181: /* designation_opt: %empty  */
#line 1277 "ass5_21CS30003_21CS30023.y"
                             { }
#line 3638 "y.tab.c"
    break;

  case 182: /* designation: designator_list EQUAL  */
#line 1282 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3644 "y.tab.c"
    break;

  case 183: /* designator_list: designator  */
#line 1287 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3650 "y.tab.c"
    break;

  case 184: /* designator_list: designator_list designator  */
#line 1289 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3656 "y.tab.c"
    break;

  case 185: /* designator: OPENSB constant_expression CLOSESB  */
#line 1294 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3662 "y.tab.c"
    break;

  case 186: /* designator: DOT IDENTIFIER  */
#line 1296 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3668 "y.tab.c"
    break;

  case 187: /* statement: labeled_statement  */
#line 1301 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3674 "y.tab.c"
    break;

  case 188: /* statement: compound_statement  */
#line 1303 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3680 "y.tab.c"
    break;

  case 189: /* statement: expression_statement  */
#line 1305 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.stat)=new Statement();              //create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
                    }
#line 3689 "y.tab.c"
    break;

  case 190: /* statement: selection_statement  */
#line 1310 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3695 "y.tab.c"
    break;

  case 191: /* statement: iteration_statement  */
#line 1312 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3701 "y.tab.c"
    break;

  case 192: /* statement: jump_statement  */
#line 1314 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3707 "y.tab.c"
    break;

  case 193: /* loop_statement: labeled_statement  */
#line 1318 "ass5_21CS30003_21CS30023.y"
                                        {  }
#line 3713 "y.tab.c"
    break;

  case 194: /* loop_statement: expression_statement  */
#line 1320 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.stat)=new Statement();                         // create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist;                  // assign the nextlist
                    }
#line 3722 "y.tab.c"
    break;

  case 195: /* loop_statement: selection_statement  */
#line 1324 "ass5_21CS30003_21CS30023.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3728 "y.tab.c"
    break;

  case 196: /* loop_statement: iteration_statement  */
#line 1325 "ass5_21CS30003_21CS30023.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3734 "y.tab.c"
    break;

  case 197: /* loop_statement: jump_statement  */
#line 1326 "ass5_21CS30003_21CS30023.y"
                                       { (yyval.stat)=(yyvsp[0].stat); }
#line 3740 "y.tab.c"
    break;

  case 198: /* labeled_statement: IDENTIFIER COLON M statement  */
#line 1330 "ass5_21CS30003_21CS30023.y"
                    {  
                        (yyval.stat) = (yyvsp[0].stat);
                        label *s = find_label((yyvsp[-3].symp)->name);
                        if(s!=nullptr){
                            s->addr = (yyvsp[-1].instr_number);
                            backpatch(s->nextlist,s->addr);
                        }else{
                            s = new label((yyvsp[-3].symp)->name);
                            s->addr = nextinstr();
                            s->nextlist = makelist((yyvsp[-1].instr_number));
                            label_table.push_back(*s);
                        }
                    }
#line 3758 "y.tab.c"
    break;

  case 199: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1344 "ass5_21CS30003_21CS30023.y"
                    { /* Not to be modelled */ }
#line 3764 "y.tab.c"
    break;

  case 200: /* labeled_statement: DEFAULT COLON statement  */
#line 1346 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 3770 "y.tab.c"
    break;

  case 201: /* compound_statement: OPENCB X changetable block_item_list_opt CLOSECB  */
#line 1351 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.stat)=(yyvsp[-1].stat);                           // Compound Statement = blockItemList
                        changeTable(ST->parent);         // Change Symbol Table
                    }
#line 3779 "y.tab.c"
    break;

  case 202: /* block_item_list: block_item  */
#line 1359 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3785 "y.tab.c"
    break;

  case 203: /* block_item_list: block_item_list M block_item  */
#line 1361 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.stat)=(yyvsp[0].stat);
                        backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));     //after $1, move to block_item via $2
                    }
#line 3794 "y.tab.c"
    break;

  case 204: /* block_item_list_opt: block_item_list  */
#line 1369 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat) ;/* simple assign */}
#line 3800 "y.tab.c"
    break;

  case 205: /* block_item_list_opt: %empty  */
#line 1371 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3806 "y.tab.c"
    break;

  case 206: /* block_item: declaration  */
#line 1376 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3812 "y.tab.c"
    break;

  case 207: /* block_item: statement  */
#line 1378 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3818 "y.tab.c"
    break;

  case 208: /* expression_statement: SEMICOLON  */
#line 1383 "ass5_21CS30003_21CS30023.y"
                    { (yyval.expr) = new Expression(); /* new Expression */ }
#line 3824 "y.tab.c"
    break;

  case 209: /* expression_statement: expression SEMICOLON  */
#line 1385 "ass5_21CS30003_21CS30023.y"
                    { (yyval.expr)=(yyvsp[-1].expr); /* Simple assign */}
#line 3830 "y.tab.c"
    break;

  case 210: /* selection_statement: IF OPENRB expression N CLOSERB M statement N  */
#line 1390 "ass5_21CS30003_21CS30023.y"
                    {
                        // if without else
                        backpatch((yyvsp[-4].stat)->nextlist, nextinstr());                   // After we hit N we go to next instr
                        convertIntToBool((yyvsp[-5].expr));                                   // expression in IF is converted to bool

                        (yyval.stat) = new Statement();                                   
                        backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));                            // We do the backpatch here

                        list<int> temp = merge((yyvsp[-5].expr)->falselist, (yyvsp[-1].stat)->nextlist);    // If it is false, we just escape the inner statement
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);
                    }
#line 3846 "y.tab.c"
    break;

  case 211: /* selection_statement: IF OPENRB expression N CLOSERB M statement N ELSE M statement  */
#line 1402 "ass5_21CS30003_21CS30023.y"
                    {
                        // if with else
                        backpatch((yyvsp[-7].stat)->nextlist, nextinstr());		            // After we hit N we go to next instr
                        convertIntToBool((yyvsp[-8].expr));                                   // convert expression to bool 

                        (yyval.stat) = new Statement();                                   
                        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-5].instr_number));                            // If true, we access the first part
                        backpatch((yyvsp[-8].expr)->falselist, (yyvsp[-1].instr_number));                          // Else the second prt

                        list<int> temp = merge((yyvsp[-4].stat)->nextlist, (yyvsp[-3].stat)->nextlist);       // Then we merge with the nextlists of both statements
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist,temp);	
                    }
#line 3863 "y.tab.c"
    break;

  case 212: /* selection_statement: SWITCH OPENRB expression CLOSERB statement  */
#line 1415 "ass5_21CS30003_21CS30023.y"
                    { /* Not asked in question */ }
#line 3869 "y.tab.c"
    break;

  case 213: /* iteration_statement: WHILE W OPENRB X changetable M expression CLOSERB M loop_statement  */
#line 1420 "ass5_21CS30003_21CS30023.y"
                    {	
                        // while statement
                        (yyval.stat) = new Statement();                                  
                        convertIntToBool((yyvsp[-3].expr));                                 
                        
                        // Proper backpatching
                        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-4].instr_number));	            // M1 to go back to expression again
                        backpatch((yyvsp[-3].expr)->truelist, (yyvsp[-1].instr_number));	            // M2 to go to statement if the expression is true
                        (yyval.stat)->nextlist = (yyvsp[-3].expr)->falselist;               // If expression is false, Exit loop

                        // Q.emit to prevent fallthrough
                        string str=convertIntToString((yyvsp[-4].instr_number));		
                        Q.emit("goto",str);	
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3890 "y.tab.c"
    break;

  case 214: /* iteration_statement: WHILE W OPENRB X changetable M expression CLOSERB OPENCB M block_item_list_opt CLOSECB  */
#line 1437 "ass5_21CS30003_21CS30023.y"
                    {	
                        //while statement
                        (yyval.stat) = new Statement();                   // create statement
                        convertIntToBool((yyvsp[-5].expr));                   // convert expression to bool
                        
                        // Proper Backpatching
                        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-6].instr_number));	        // M1 to go back to expression again
                        backpatch((yyvsp[-5].expr)->truelist, (yyvsp[-2].instr_number));	        // M2 to go to statement if the expression is true
                        (yyval.stat)->nextlist = (yyvsp[-5].expr)->falselist;           // If expression is false, then exit loop
                        
                        // Q.emit to prevent fallthrough
                        string str=convertIntToString((yyvsp[-6].instr_number));		
                        Q.emit("goto",str);	
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3911 "y.tab.c"
    break;

  case 215: /* iteration_statement: DO D M loop_statement M WHILE OPENRB expression CLOSERB SEMICOLON  */
#line 1454 "ass5_21CS30003_21CS30023.y"
                    {
                        //do statement
                        (yyval.stat) = new Statement();                               //create statement	
                        convertIntToBool((yyvsp[-2].expr));                               //convert to bool
                        
                        // proper Backpatching
                        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-7].instr_number));						// M1 to go back to statement if expression is true
                        backpatch((yyvsp[-6].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
                        
                        (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       // Exit loop if statement is false
                        loop_name = "";
                    }
#line 3928 "y.tab.c"
    break;

  case 216: /* iteration_statement: DO D OPENCB M block_item_list_opt CLOSECB M WHILE OPENRB expression CLOSERB SEMICOLON  */
#line 1467 "ass5_21CS30003_21CS30023.y"
                        {
                        //do statement
		                (yyval.stat) = new Statement();     //create statement	
		                convertIntToBool((yyvsp[-2].expr));      //convert to bool
		                
                        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr_number));						// M1 to go back to statement if expression is true
		                backpatch((yyvsp[-7].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
		                
                        (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       // Exit loop if statement is false
		                loop_name = "";
	                }
#line 3944 "y.tab.c"
    break;

  case 217: /* iteration_statement: FOR F OPENRB X changetable declaration M expression_statement M expression N CLOSERB M loop_statement  */
#line 1479 "ass5_21CS30003_21CS30023.y"
                    {
                        //for loop
                        (yyval.stat) = new Statement();		            // create new statement
                        convertIntToBool((yyvsp[-6].expr));                   // convert check expression to boolean
                        
                        // Proper Backpatching
                        backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));	        // if expression is true, go to M2
                        backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));	        // after N, go back to M1
                        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	        // statement go back to expression
                        
                        
                        string str=convertIntToString((yyvsp[-5].instr_number));
                        Q.emit("goto", str);				    // Emit goto
                        (yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;	        // Exit loop if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3966 "y.tab.c"
    break;

  case 218: /* iteration_statement: FOR F OPENRB X changetable expression_statement M expression_statement M expression N CLOSERB M loop_statement  */
#line 1497 "ass5_21CS30003_21CS30023.y"
                    {
                        //for loop
                        (yyval.stat) = new Statement();		 //create new statement
                        convertIntToBool((yyvsp[-6].expr));  //convert check expression to boolean
                        
                        // Proper Backpatching
                        backpatch((yyvsp[-6].expr)->truelist, (yyvsp[-1].instr_number));	                // if expression is true, go to M2
                        backpatch((yyvsp[-3].stat)->nextlist, (yyvsp[-7].instr_number));	                // after N, go back to M1
                        backpatch((yyvsp[0].stat)->nextlist, (yyvsp[-5].instr_number));	                // statement go back to expression
                        
                        
                        string str=convertIntToString((yyvsp[-5].instr_number));
                        Q.emit("goto", str);				            //  emit goto str
                        (yyval.stat)->nextlist = (yyvsp[-6].expr)->falselist;	                // Exit loop if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 3988 "y.tab.c"
    break;

  case 219: /* iteration_statement: FOR F OPENRB X changetable declaration M expression_statement M expression N CLOSERB M OPENCB block_item_list_opt CLOSECB  */
#line 1515 "ass5_21CS30003_21CS30023.y"
                    {
                        //for loop
                        (yyval.stat) = new Statement();		                    // create new statement
                        convertIntToBool((yyvsp[-8].expr));                           // convert check expression to boolean

                        // Correctly backpatch lists
                        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr_number));	                // if expression is true, then go to M2
                        backpatch((yyvsp[-5].stat)->nextlist, (yyvsp[-9].instr_number));	                // after N, go back to M1
                        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-7].instr_number));	                //statement go back to expression
                        
                        
                        string str=convertIntToString((yyvsp[-7].instr_number));
                        Q.emit("goto", str);				            //prevent fallthrough
                        (yyval.stat)->nextlist = (yyvsp[-8].expr)->falselist;	                // Exit loop if statement is false
                        loop_name = "";
                        changeTable(ST->parent);
                    }
#line 4010 "y.tab.c"
    break;

  case 220: /* iteration_statement: FOR F OPENRB X changetable expression_statement M expression_statement M expression N CLOSERB M OPENCB block_item_list_opt CLOSECB  */
#line 1533 "ass5_21CS30003_21CS30023.y"
                    {	
                        (yyval.stat) = new Statement();		                    // create new statement
                        convertIntToBool((yyvsp[-8].expr));                           // convert expression to boolean
                        
                        // proper backpatching
                        backpatch((yyvsp[-8].expr)->truelist, (yyvsp[-3].instr_number));	                // backpatch &13
                        backpatch((yyvsp[-5].stat)->nextlist, (yyvsp[-9].instr_number));	                // after N, go back to M1
                        backpatch((yyvsp[-1].stat)->nextlist, (yyvsp[-7].instr_number));	                // statement go back to expression
                        
                        string str=convertIntToString((yyvsp[-7].instr_number));
                        Q.emit("goto", str);				            // Emit goto Str
                        (yyval.stat)->nextlist = (yyvsp[-8].expr)->falselist;	                // Exit if statement is false
                        loop_name = "";
                        changeTable(ST->parent);                        
                    }
#line 4030 "y.tab.c"
    break;

  case 221: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1552 "ass5_21CS30003_21CS30023.y"
                    { 
                        (yyval.stat) = new Statement();
                        label *l = find_label((yyvsp[-1].symp)->name);
                        if(l){
                            Q.emit("goto","");
                            list<int>lst = makelist(nextinstr());
                            l->nextlist = merge(l->nextlist,lst);
                            if(l->addr!=-1)
                                backpatch(l->nextlist,l->addr);
                        } else {
                            l = new label((yyvsp[-1].symp)->name);
                            l->nextlist = makelist(nextinstr());
                            Q.emit("goto","");
                            label_table.push_back(*l);
                        }
                    }
#line 4051 "y.tab.c"
    break;

  case 222: /* jump_statement: CONTINUE SEMICOLON  */
#line 1569 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat) = new Statement(); }
#line 4057 "y.tab.c"
    break;

  case 223: /* jump_statement: BREAK SEMICOLON  */
#line 1571 "ass5_21CS30003_21CS30023.y"
                    { (yyval.stat) = new Statement(); }
#line 4063 "y.tab.c"
    break;

  case 224: /* jump_statement: RETURN expression SEMICOLON  */
#line 1573 "ass5_21CS30003_21CS30023.y"
                    {
                        (yyval.stat) = new Statement();	
                        Q.emit("return",(yyvsp[-1].expr)->loc->name);             
                    }
#line 4072 "y.tab.c"
    break;

  case 225: /* jump_statement: RETURN SEMICOLON  */
#line 1578 "ass5_21CS30003_21CS30023.y"
                    {
                        (yyval.stat) = new Statement();	
                        Q.emit("return","");                         
                    }
#line 4081 "y.tab.c"
    break;

  case 226: /* translation_unit: external_declaration  */
#line 1586 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 4087 "y.tab.c"
    break;

  case 227: /* translation_unit: translation_unit external_declaration  */
#line 1588 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 4093 "y.tab.c"
    break;

  case 228: /* external_declaration: function_definition  */
#line 1593 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 4099 "y.tab.c"
    break;

  case 229: /* external_declaration: declaration  */
#line 1595 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 4105 "y.tab.c"
    break;

  case 230: /* function_definition: declaration_specifiers declarator declaration_list_opt changetable OPENCB block_item_list_opt CLOSECB  */
#line 1600 "ass5_21CS30003_21CS30023.y"
                    {
                        int next_instr=0;	 	
                        ST->parent=globalST;
                        (yyvsp[-5].symp)->updateFuntionStatus(true);
                        // Add a function name
                        table_count = 0;
                        label_table.clear();                        

                        changeTable(globalST);                     // Change the table again to Global ST
                    }
#line 4120 "y.tab.c"
    break;

  case 231: /* declaration_list_opt: declaration_list  */
#line 1613 "ass5_21CS30003_21CS30023.y"
                                     { }
#line 4126 "y.tab.c"
    break;

  case 232: /* declaration_list_opt: %empty  */
#line 1614 "ass5_21CS30003_21CS30023.y"
                             { }
#line 4132 "y.tab.c"
    break;

  case 233: /* declaration_list: declaration  */
#line 1619 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 4138 "y.tab.c"
    break;

  case 234: /* declaration_list: declaration_list declaration  */
#line 1621 "ass5_21CS30003_21CS30023.y"
                    {  }
#line 4144 "y.tab.c"
    break;

  case 235: /* M: %empty  */
#line 1625 "ass5_21CS30003_21CS30023.y"
        {
        // Used in backpatching
		(yyval.instr_number) = nextinstr();
	}
#line 4153 "y.tab.c"
    break;

  case 236: /* F: %empty  */
#line 1632 "ass5_21CS30003_21CS30023.y"
        {
		// Beginning of the for statement
		loop_name = "FOR";
	}
#line 4162 "y.tab.c"
    break;

  case 237: /* W: %empty  */
#line 1639 "ass5_21CS30003_21CS30023.y"
        {
		// Beginning of the while statement
		loop_name = "WHILE";
	}
#line 4171 "y.tab.c"
    break;

  case 238: /* D: %empty  */
#line 1646 "ass5_21CS30003_21CS30023.y"
        {
		// Beginning of the do while statement
		loop_name = "DO_WHILE";
	}
#line 4180 "y.tab.c"
    break;

  case 239: /* X: %empty  */
#line 1653 "ass5_21CS30003_21CS30023.y"
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
#line 4198 "y.tab.c"
    break;

  case 240: /* N: %empty  */
#line 1669 "ass5_21CS30003_21CS30023.y"
        {
        /*
            This is also useful in backpatching
        */
		(yyval.stat) = new Statement();
		(yyval.stat)->nextlist=makelist(nextinstr());

		Q.emit("goto","");
	}
#line 4212 "y.tab.c"
    break;


#line 4216 "y.tab.c"

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

#line 1679 "ass5_21CS30003_21CS30023.y"


/*Auxiliaries*/
void yyerror(string s) {
    // print error
    cout<<s<<endl;
}
