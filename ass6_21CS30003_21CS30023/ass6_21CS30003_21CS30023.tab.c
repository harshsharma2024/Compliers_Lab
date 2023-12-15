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
#line 2 "ass6_21CS30003_21CS30023.y"

    #include <bits/stdc++.h>
    #include <sstream>
    #include "ass6_21CS30003_21CS30023_translator.h"
    extern int yylex();
    void yyerror(string s);
    extern string var_type;
    extern vector<label> label_table;
    extern int line;
    extern vector<string> stringsToBePrinted;
    using namespace std;

#line 84 "ass6_21CS30003_21CS30023.tab.c"

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

#include "ass6_21CS30003_21CS30023.tab.h"
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
  YYSYMBOL_N = 178,                        /* N  */
  YYSYMBOL_FUN_CT = 179                    /* FUN_CT  */
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
#define YYLAST   1285

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  94
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  86
/* YYNRULES -- Number of rules.  */
#define YYNRULES  242
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  422

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
       0,   190,   190,   209,   216,   223,   229,   238,   244,   248,
     259,   267,   275,   298,   307,   311,   315,   323,   332,   334,
     339,   344,   352,   356,   363,   367,   372,   377,   416,   420,
     428,   432,   436,   440,   444,   448,   455,   459,   467,   484,
     499,   512,   529,   533,   546,   562,   566,   577,   593,   597,
     616,   634,   652,   673,   677,   698,   721,   725,   747,   751,
     772,   776,   797,   801,   819,   823,   840,   842,   861,   863,
     886,   888,   890,   892,   894,   896,   898,   900,   902,   904,
     906,   910,   912,   917,   922,   927,   928,   932,   934,   936,
     938,   943,   944,   948,   950,   955,   959,   969,   971,   973,
     975,   980,   984,   987,   989,   992,   994,   997,   999,  1001,
    1003,  1005,  1007,  1009,  1011,  1016,  1018,  1023,  1024,  1028,
    1030,  1032,  1037,  1039,  1044,  1046,  1051,  1053,  1058,  1060,
    1064,  1066,  1068,  1073,  1075,  1077,  1082,  1083,  1087,  1089,
    1095,  1097,  1103,  1105,  1107,  1112,  1117,  1128,  1134,  1145,
    1146,  1147,  1148,  1169,  1189,  1190,  1191,  1192,  1193,  1214,
    1215,  1240,  1241,  1246,  1250,  1257,  1259,  1264,  1266,  1271,
    1273,  1278,  1282,  1287,  1289,  1294,  1299,  1301,  1303,  1308,
    1310,  1315,  1316,  1320,  1325,  1327,  1332,  1334,  1339,  1341,
    1343,  1348,  1350,  1352,  1357,  1358,  1363,  1364,  1365,  1368,
    1382,  1384,  1389,  1397,  1399,  1407,  1409,  1414,  1416,  1421,
    1423,  1428,  1440,  1453,  1458,  1475,  1492,  1505,  1517,  1535,
    1553,  1571,  1590,  1607,  1609,  1611,  1616,  1624,  1626,  1631,
    1633,  1638,  1654,  1655,  1659,  1661,  1665,  1672,  1679,  1686,
    1693,  1709,  1721
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
  "F", "W", "D", "X", "N", "FUN_CT", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-328)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-234)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1094,  -328,  -328,  -328,  -328,     9,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,    63,  1094,  1094,  -328,   143,
    -328,  1094,  1094,  1057,  -328,  -328,     8,    28,  -328,    63,
      98,    40,    81,  -328,   316,   197,   146,  -328,  -328,  -328,
     150,  1128,  -328,  -328,  -328,  -328,   183,   178,  -328,   173,
      98,  -328,    63,  1129,  -328,    63,  -328,  1094,   792,   195,
     197,  1128,  1128,   121,   981,  -328,  1128,   170,   -28,  -328,
    -328,  -328,  -328,  -328,   186,  1171,  -328,  -328,  -328,  -328,
    -328,   754,   115,  1192,  1192,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,   159,  1195,  1213,  -328,   139,   -31,    65,
     188,   120,   202,   203,   205,   213,   140,  -328,  -328,  -328,
     239,  -328,   868,  -328,   244,   253,   830,  -328,   -35,   947,
    1016,  -328,  -328,  1213,  -328,    36,  -328,   221,  -328,  -328,
    -328,  1213,  -328,   124,   754,  -328,  -328,   -32,  -328,   265,
    1213,   261,    -8,  1129,  -328,   112,  -328,   754,  -328,  -328,
    1213,  1213,   274,   275,  -328,  -328,  -328,  -328,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,  -328,  -328,  1213,  -328,  -328,
    1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,  1213,
    1213,  1213,  1213,  1213,  1213,  1213,  -328,  -328,  1213,   411,
     271,   868,  -328,  -328,  -328,   272,   278,  -328,   281,  -328,
      63,   277,   236,  -328,  -328,  -328,  -328,  -328,   -26,  1213,
    -328,  -328,  -328,   285,  -328,  1213,  1150,   289,  -328,  -328,
     182,  -328,  -328,  -328,   292,   -34,   256,   295,  -328,  -328,
    -328,  -328,  -328,  -328,  -328,   139,   139,   -31,   -31,    65,
      65,    65,    65,   188,   188,   120,   202,   203,  1213,  1213,
     -51,   279,  1213,   280,   276,  -328,  -328,   318,   312,   251,
     313,  -328,   286,  -328,  -328,    47,  -328,  -328,  -328,  -328,
     311,   314,  -328,  -328,  -328,  -328,  -328,  -328,   317,  -328,
    -328,  -328,  -328,  -328,   364,  -328,  -328,   319,  -328,   115,
    -328,  -328,  -328,  1129,   319,  -328,  1213,  -328,   205,   213,
    1213,  -328,   293,  -328,   526,   323,   326,   297,  1213,  -328,
      90,  1213,   329,  -328,  -328,  -328,   411,  -328,  -328,  -328,
    -328,    25,  -328,  -328,  -328,   526,  -328,  -328,   697,  -328,
    -328,   -17,  -328,   -12,  -328,   526,   411,  -328,  -328,   201,
    -328,   411,  -328,  -328,  -328,  -328,  -328,  -328,  -328,  -328,
     526,  -328,  -328,   331,  -328,   332,   347,   469,   526,  -328,
    -328,  -328,  -328,   341,  -328,  -328,  -328,  1213,   358,  1213,
     889,   889,   388,    -7,   357,    -3,  -328,  -328,  -328,   356,
    1213,   330,  1213,  1213,   526,  -328,   697,    -2,  -328,   320,
     320,  -328,   411,  -328,   334,   360,   361,   362,  -328,  -328,
    -328,  -328,   583,   640,   411,  -328,   411,  -328,   363,   373,
    -328,  -328
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    99,   102,   142,   107,   137,    97,   100,   106,   145,
     104,   105,   143,   103,   108,    98,   122,   123,   109,   101,
     144,   110,   111,   112,   230,    86,    92,    92,   114,     0,
     113,    92,    92,     0,   227,   229,   135,     0,   148,     0,
     162,     0,    85,    93,    95,   147,     0,    91,    87,    88,
     121,     0,    89,    90,     1,   228,     0,     0,   165,   163,
     161,    84,     0,     0,   234,    86,   242,   232,     0,   242,
     146,     0,   118,     0,     0,   124,   118,   140,     0,   138,
     149,   164,   166,    94,    95,     0,     7,     3,     5,     4,
       6,     0,   182,     0,     0,    30,    31,    32,    33,    34,
      35,     8,    11,    24,    36,     0,    38,    42,    45,    48,
      53,    56,    58,    60,    62,    64,    66,    68,   176,    96,
       0,   235,     0,   153,    31,     0,     0,   173,     0,     0,
       0,   117,   115,     0,   126,     0,   128,   132,   119,   125,
     116,     0,   133,     0,     0,    28,    81,     0,   175,     0,
       0,     0,     0,     0,   181,     0,   184,     0,    25,    26,
       0,    23,     0,     0,    16,    17,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     0,    36,    27,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   236,   236,     0,   206,
       0,     0,   157,   152,   151,    31,     0,   159,     0,   160,
     172,     0,   167,   169,   120,    83,   130,   127,     0,     0,
     141,   134,   139,     0,    10,     0,     0,     0,   187,   177,
     182,   179,   183,   185,     0,     0,    22,     0,    20,    14,
      15,    69,    39,    40,    41,    43,    44,    46,    47,    49,
      50,    51,    52,    54,    55,    57,    59,    61,     0,     0,
       0,     0,     0,     0,     0,   239,   237,     0,     0,     0,
       0,   238,     7,   240,   209,     0,   207,   208,   188,   189,
     236,     0,   203,   190,   191,   192,   193,   155,     0,   156,
     150,   174,   171,   158,     0,   129,   131,    29,    82,   182,
      37,   186,   178,     0,     0,    12,     0,    13,    63,    65,
       0,   224,     0,   223,     0,   236,     0,     0,     0,   226,
       0,     0,     0,   236,     2,   210,     0,   231,   154,   168,
     170,     0,   180,    21,    67,     0,   201,   236,     0,   240,
     222,     0,   225,     0,   240,     0,   206,   204,    18,   182,
     200,   206,   236,   194,   195,   196,   197,   198,     2,   236,
       0,     2,   199,     0,    19,     0,     0,     0,     0,   213,
     236,   202,   236,     0,   236,   236,   241,     0,     0,     0,
       0,     0,   211,     0,     0,     0,   236,   236,   236,   236,
       0,     0,     0,     0,     0,   236,     0,     0,   216,   241,
     241,   212,   206,   214,     0,     0,     0,     0,   217,   236,
     236,   215,     0,     0,   206,   218,   206,   219,     0,     0,
     220,   221
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -328,  -141,  -328,  -328,  -328,  -328,  -328,   -40,  -328,  -100,
      85,    91,    84,    92,   214,   263,   267,   200,   204,  -328,
    -125,   -62,  -328,   -89,  -129,     0,  -328,     3,   177,  -328,
     398,  -328,    26,   -52,   399,  -328,  -328,   393,   -64,  -328,
     260,  -328,  -328,  -328,   336,   191,  -328,   -21,   428,  -328,
     421,   -49,  -328,  -328,   193,  -328,    38,  -146,   189,  -221,
    -328,  -328,   327,  -273,  -236,  -327,  -328,  -328,  -243,   168,
    -132,  -300,  -289,  -277,  -328,   467,  -328,  -328,  -328,  -149,
    -328,  -328,  -328,  -269,  -114,   432
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,   346,   101,   102,   103,   236,   237,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   146,   177,   275,   216,   276,    41,    65,    48,    42,
      43,    26,    27,    73,   132,    28,    29,    74,    75,   135,
     136,    30,    37,    78,    79,    31,    32,    84,    45,    59,
      46,    60,   211,   212,   213,   128,   149,   119,   152,   153,
     154,   155,   156,   277,   352,   278,   279,   280,   281,   282,
     283,   284,   285,   286,    33,    34,    35,    66,    67,   258,
     316,   322,   315,   324,   382,   120
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      24,   118,   147,    25,    44,   179,   125,   231,   215,   303,
     139,   353,   220,   305,   207,    38,   215,   224,    57,   126,
     131,   227,    39,   142,   131,   215,   310,   183,   184,    47,
      47,    40,   359,    24,    47,    47,    25,   360,   355,   148,
     225,   336,   389,   229,    64,   145,   391,   404,   259,   356,
      36,   133,   137,   158,   159,   147,   208,   225,  -136,   225,
     200,   357,   350,   143,   206,   178,   139,   121,   147,   353,
     358,   235,   362,   201,   225,   361,   348,    72,    56,   225,
     242,   243,   244,   230,   225,   353,   353,   369,   225,   225,
     296,   118,   148,   178,   215,   376,   355,    72,    72,   238,
      72,   178,    72,   363,    38,   148,     3,   356,   365,   260,
     178,    39,   355,   355,   217,   241,   349,    72,    61,   357,
      40,   401,    12,   356,   356,   325,   300,   218,   303,   185,
     186,   326,   210,   312,    20,   357,   357,   215,   225,   288,
     178,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   178,   178,   178,   178,    72,   332,   150,   407,
     403,   150,    38,   298,   151,    77,   338,   151,   342,    39,
      72,   418,    62,   419,   345,   221,   415,   417,    40,   178,
     320,   225,   223,    72,    50,   334,   178,    38,   351,   292,
     191,   192,   232,    51,    39,   234,   180,   137,   133,   134,
      71,   181,   182,   366,    49,   160,   354,   161,    52,    53,
     368,   162,   163,   164,   165,   197,   198,   367,   178,   178,
     370,   377,   178,   378,    77,   380,   381,    80,   150,   341,
      40,    58,   343,   302,   151,   375,   127,   392,   393,   394,
     396,   118,    76,    68,   333,    69,   402,   150,   386,   387,
     141,    82,   364,   151,   187,   188,   189,   190,   193,    58,
     412,   413,    76,    76,   354,    76,    63,    76,   245,   246,
     178,   249,   250,   251,   252,   194,   247,   248,   195,    85,
     354,   354,    76,   253,   254,   405,   406,   196,   383,   199,
     385,   202,    86,    87,    88,    89,    90,   210,   219,    91,
     203,   397,   228,   399,   400,    93,    94,    95,    96,    97,
      98,    99,   100,    58,   226,   239,   240,    82,   287,   289,
       1,    76,   291,     2,     3,   290,   293,   294,     4,   319,
       5,     6,     7,     8,   297,    76,   301,     9,    10,    11,
      12,   304,    13,    14,   307,    15,    16,   306,    76,    17,
      18,    19,    20,   314,    21,    22,    23,   311,   313,   317,
     318,   321,  -205,   323,   328,   327,  -233,   374,     1,   299,
     335,     2,     3,   337,   339,   340,     4,   344,     5,     6,
       7,     8,   371,   372,   373,     9,    10,    11,    12,   379,
      13,    14,    82,    15,    16,   384,    63,    17,    18,    19,
      20,   388,    21,    22,    23,   390,   395,   255,   398,   409,
     410,   225,   408,   411,   420,     1,   261,   262,     2,     3,
     263,   264,   265,     4,   421,     5,     6,     7,     8,   266,
     267,   268,     9,    10,    11,    12,   269,    13,    14,    85,
      15,    16,   270,   329,    17,    18,    19,    20,   271,    21,
      22,    23,   272,    87,    88,    89,    90,   256,   308,    91,
      83,   273,   257,   309,   130,    93,    94,    95,    96,    97,
      98,    99,   100,     1,    70,   140,     2,     3,   295,   222,
      81,     4,   233,     5,     6,     7,     8,   330,   331,   274,
       9,    10,    11,    12,   347,    13,    14,    85,    15,    16,
      55,   129,    17,    18,    19,    20,     0,    21,    22,    23,
      86,    87,    88,    89,    90,     0,     0,    91,     0,     0,
       0,     0,     0,    93,    94,    95,    96,    97,    98,    99,
     100,   261,   262,     0,     0,   263,   264,   265,     0,     0,
       0,     0,     0,     0,   266,   267,   268,   274,     0,     0,
       0,   269,     0,     0,    85,     0,     0,   270,     0,     0,
       0,     0,     0,   271,     0,     0,     0,   272,    87,    88,
      89,    90,     0,     0,    91,     0,   273,     0,     0,     0,
      93,    94,    95,    96,    97,    98,    99,   100,   261,   262,
       0,     0,   263,   264,   265,     0,     0,     0,     0,     0,
       0,   266,   267,   268,   274,     0,     0,     0,   269,     0,
       0,    85,     0,     0,   270,     0,     0,     0,     0,     0,
     271,     0,     0,     0,   272,    87,    88,    89,    90,     0,
       0,    91,     0,   414,     0,     0,     0,    93,    94,    95,
      96,    97,    98,    99,   100,   261,   262,     0,     0,   263,
     264,   265,     0,     0,     0,     0,     0,     0,   266,   267,
     268,   274,     0,     0,     0,   269,     0,     0,    85,     0,
       0,   270,     0,     0,     0,     0,     0,   271,     0,     0,
       0,   272,    87,    88,    89,    90,     0,     0,    91,     0,
     416,     0,     0,     0,    93,    94,    95,    96,    97,    98,
      99,   100,   261,   262,     0,     0,   263,   264,   265,     0,
       0,     0,     0,     0,     0,   266,   267,   268,   274,     0,
       0,     0,   269,     0,     0,    85,     0,     0,   270,     0,
       0,     0,     0,     0,   271,     0,     0,     0,   272,    87,
      88,    89,    90,     0,     0,    91,     0,     0,     0,     0,
       0,    93,    94,    95,    96,    97,    98,    99,   100,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     0,
       0,     8,     0,     0,     0,   274,    10,    11,    12,     0,
      13,    14,    85,     0,    16,     0,     0,    17,    18,    19,
      20,     0,    21,    22,    23,    86,    87,    88,    89,    90,
       3,     0,    91,     0,     0,     0,     0,     0,    93,    94,
      95,    96,    97,    98,    99,   100,    12,     0,     0,     0,
      85,   122,     0,     0,     0,     0,     0,     0,    20,     0,
       0,     0,     0,    86,    87,    88,    89,    90,     3,   123,
      91,     0,     0,     0,     0,     0,    93,    94,    95,   124,
      97,    98,    99,   100,    12,     0,     0,     0,    85,     0,
       0,     0,     0,     0,     0,     0,    20,     0,     0,     0,
       0,    86,    87,    88,    89,    90,     3,   204,    91,     0,
       0,     0,     0,     0,    93,    94,    95,   205,    97,    98,
      99,   100,    12,     0,     0,     0,    85,     0,     0,     0,
       0,     0,     0,     0,    20,     0,     0,     0,     0,    86,
      87,    88,    89,    90,     0,     0,    91,    85,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    99,   100,
      86,    87,    88,    89,    90,     0,     0,    91,     0,     0,
       0,     0,     0,    93,    94,    95,    96,    97,    98,    99,
     100,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     8,     0,     0,   274,     9,    10,
      11,    12,     0,    13,    14,     0,    15,    16,     0,     0,
      17,    18,    19,    20,     0,    21,    22,    23,     2,     3,
       0,     0,     0,     4,     0,     5,   209,     0,     8,     0,
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
      96,    97,    98,    99,   100,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176
};

static const yytype_int16 yycheck[] =
{
       0,    63,    91,     0,    25,   105,    68,   153,   133,   230,
      74,   338,   141,    47,    49,    41,   141,    49,    39,    68,
      72,   150,    48,    51,    76,   150,    77,    58,    59,    26,
      27,    57,    49,    33,    31,    32,    33,    49,   338,    91,
      91,   314,    49,    51,    44,    85,    49,    49,   197,   338,
      41,    77,    73,    93,    94,   144,    91,    91,    50,    91,
     122,   338,   335,    91,   126,   105,   130,    67,   157,   396,
     339,   160,   345,   122,    91,   344,    51,    51,    50,    91,
     180,   181,   182,    91,    91,   412,   413,   360,    91,    91,
     219,   153,   144,   133,   219,   368,   396,    71,    72,   161,
      74,   141,    76,   346,    41,   157,     8,   396,   351,   198,
     150,    48,   412,   413,    78,   177,    91,    91,    78,   396,
      57,   394,    24,   412,   413,    78,   226,    91,   349,    64,
      65,   280,   129,   262,    36,   412,   413,   262,    91,   201,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   130,   303,    46,   402,
     396,    46,    41,   225,    52,    41,   315,    52,    78,    48,
     144,   414,    91,   416,   323,    51,   412,   413,    57,   219,
     269,    91,   144,   157,    41,   310,   226,    41,   337,   210,
      70,    71,    80,    50,    48,   157,    57,   218,    77,    78,
      50,    62,    63,   352,    27,    46,   338,    48,    31,    32,
     359,    52,    53,    54,    55,    75,    76,   358,   258,   259,
     361,   370,   262,   372,    41,   374,   375,    49,    46,   318,
      57,    40,   321,    51,    52,   367,    41,   386,   387,   388,
     389,   303,    51,    46,   306,    48,   395,    46,   380,   381,
      80,    60,    51,    52,    66,    67,    68,    69,    56,    68,
     409,   410,    71,    72,   396,    74,    80,    76,   183,   184,
     310,   187,   188,   189,   190,    72,   185,   186,    73,    28,
     412,   413,    91,   191,   192,   399,   400,    74,   377,    50,
     379,    47,    41,    42,    43,    44,    45,   294,    77,    48,
      47,   390,    41,   392,   393,    54,    55,    56,    57,    58,
      59,    60,    61,   122,    49,    41,    41,   126,    47,    47,
       4,   130,    41,     7,     8,    47,    49,    91,    12,    78,
      14,    15,    16,    17,    49,   144,    47,    21,    22,    23,
      24,    49,    26,    27,    49,    29,    30,    91,   157,    33,
      34,    35,    36,    77,    38,    39,    40,    78,    78,    41,
      48,    48,    51,    77,    47,    51,    50,   367,     4,    50,
      77,     7,     8,    50,    48,    78,    12,    48,    14,    15,
      16,    17,    51,    51,    37,    21,    22,    23,    24,    48,
      26,    27,   201,    29,    30,    37,    80,    33,    34,    35,
      36,    13,    38,    39,    40,    48,    50,   193,    78,    49,
      49,    91,    78,    51,    51,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    51,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    79,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,   194,   258,    48,
      62,    50,   195,   259,    71,    54,    55,    56,    57,    58,
      59,    60,    61,     4,    46,    76,     7,     8,   218,   143,
      59,    12,   155,    14,    15,    16,    17,   294,   299,    78,
      21,    22,    23,    24,   326,    26,    27,    28,    29,    30,
      33,    69,    33,    34,    35,    36,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
      61,     5,     6,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    78,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,    43,
      44,    45,    -1,    -1,    48,    -1,    50,    -1,    -1,    -1,
      54,    55,    56,    57,    58,    59,    60,    61,     5,     6,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    78,    -1,    -1,    -1,    25,    -1,
      -1,    28,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    41,    42,    43,    44,    45,    -1,
      -1,    48,    -1,    50,    -1,    -1,    -1,    54,    55,    56,
      57,    58,    59,    60,    61,     5,     6,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    78,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    41,    42,    43,    44,    45,    -1,    -1,    48,    -1,
      50,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,     5,     6,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    78,    -1,
      -1,    -1,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,    41,    42,
      43,    44,    45,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    -1,
      -1,    17,    -1,    -1,    -1,    78,    22,    23,    24,    -1,
      26,    27,    28,    -1,    30,    -1,    -1,    33,    34,    35,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
       8,    -1,    48,    -1,    -1,    -1,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,    -1,    41,    42,    43,    44,    45,     8,    47,
      48,    -1,    -1,    -1,    -1,    -1,    54,    55,    56,    57,
      58,    59,    60,    61,    24,    -1,    -1,    -1,    28,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    41,    42,    43,    44,    45,     8,    47,    48,    -1,
      -1,    -1,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    24,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    48,    28,    -1,    -1,
      -1,    -1,    54,    55,    56,    57,    58,    59,    60,    61,
      41,    42,    43,    44,    45,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    54,    55,    56,    57,    58,    59,    60,
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
      57,    58,    59,    60,    61,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90
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
     179,   119,    29,    47,    57,   115,   145,    41,   149,   179,
     131,   127,   128,    77,    78,   133,   134,   141,    51,   132,
     128,    80,    51,    91,    48,   101,   115,   117,   127,   150,
      46,    52,   152,   153,   154,   155,   156,    48,   101,   101,
      46,    48,    52,    53,    54,    55,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,   116,   101,   103,
      57,    62,    63,    58,    59,    64,    65,    66,    67,    68,
      69,    70,    71,    56,    72,    73,    74,    75,    76,    50,
     115,   145,    47,    47,    47,    57,   115,    49,    91,    49,
     121,   146,   147,   148,    51,   114,   118,    78,    91,    77,
     118,    51,   138,   150,    49,    91,    49,   118,    41,    51,
      91,   151,    80,   156,   150,   117,    99,   100,   115,    41,
      41,   115,   103,   103,   103,   104,   104,   105,   105,   106,
     106,   106,   106,   107,   107,   108,   109,   110,   173,   173,
     117,     5,     6,     9,    10,    11,    18,    19,    20,    25,
      31,    37,    41,    50,    78,   117,   119,   157,   159,   160,
     161,   162,   163,   164,   165,   166,   167,    47,   115,    47,
      47,    41,   141,    49,    91,   134,   118,    49,   115,    50,
     103,    47,    51,   153,    49,    47,    91,    49,   111,   112,
      77,    78,   118,    78,    77,   176,   174,    41,    48,    78,
     117,    48,   175,    77,   177,    78,   173,    51,    47,    79,
     148,   152,   151,   115,   114,    77,   157,    50,   173,    48,
      78,   117,    78,   117,    48,   173,    95,   163,    51,    91,
     157,   173,   158,   159,   164,   165,   166,   167,   177,    49,
      49,   177,   157,   162,    51,   162,   173,    95,   173,   157,
      95,    51,    51,    37,   119,   164,   157,   173,   173,    48,
     173,   173,   178,   117,    37,   117,   164,   164,    13,    49,
      48,    49,   173,   173,   173,    50,   173,   117,    78,   117,
     117,   157,   173,   158,    49,   178,   178,   162,    78,    49,
      49,    51,   173,   173,    50,   158,    50,   158,   162,   162,
      51,    51
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_uint8 yyr1[] =
{
       0,    94,    95,    96,    96,    96,    96,    97,    97,    97,
      97,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      99,    99,   100,   100,   101,   101,   101,   101,   101,   101,
     102,   102,   102,   102,   102,   102,   103,   103,   104,   104,
     104,   104,   105,   105,   105,   106,   106,   106,   107,   107,
     107,   107,   107,   108,   108,   108,   109,   109,   110,   110,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   119,   120,   120,   121,   121,   121,
     121,   122,   122,   123,   123,   124,   124,   125,   125,   125,
     125,   126,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   128,   128,   129,
     129,   129,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   134,   134,   135,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   139,   140,   141,   141,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   146,   147,
     147,   148,   148,   149,   149,   150,   151,   151,   151,   152,
     152,   153,   153,   154,   155,   155,   156,   156,   157,   157,
     157,   157,   157,   157,   158,   158,   158,   158,   158,   159,
     159,   159,   160,   161,   161,   162,   162,   163,   163,   164,
     164,   165,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   167,   167,   167,   167,   167,   168,   168,   169,
     169,   170,   171,   171,   172,   172,   173,   174,   175,   176,
     177,   178,   179
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     4,     4,     3,     3,     2,     2,     6,     7,
       1,     3,     1,     0,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     4,     1,     4,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     0,     2,     2,     2,
       2,     1,     0,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     0,     4,
       5,     2,     1,     1,     1,     2,     2,     3,     1,     3,
       2,     3,     1,     5,     6,     2,     1,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     2,     1,     1,     3,
       5,     4,     4,     3,     6,     5,     5,     4,     5,     4,
       4,     1,     0,     2,     3,     1,     2,     1,     3,     1,
       3,     2,     1,     1,     3,     1,     1,     3,     4,     2,
       4,     1,     0,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     3,     5,     1,     3,     1,     0,     1,     1,     1,
       2,     7,    10,     5,    10,    12,    10,    12,    14,    14,
      16,    16,     3,     2,     2,     3,     2,     1,     2,     1,
       1,     7,     1,     0,     1,     2,     0,     0,     0,     0,
       0,     0,     0
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
#line 191 "ass6_21CS30003_21CS30023.y"
        {    
        // Utility to change the table
		parST = ST;                                                               

        // If nested call recursively on the nested table
		if(currSymbolPtr->nested==NULL) {
			changeTable(new symtable(curPossibleSTName));		                                           
		}
		else {
			changeTable(currSymbolPtr ->nested);						               
			Q.emit("label", ST->name);
		}
	}
#line 1767 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 3: /* constant: INTEGER_CONST  */
#line 209 "ass6_21CS30003_21CS30023.y"
                                  { 
                        // Here we are creating a new instance and storing it
                        (yyval.expr)=new Expression();	
                        string p=convertIntToString((yyvsp[0].int_val));
                        (yyval.expr)->loc=gentemp(new symboltype("int"),p);
                        Q.emit("=",(yyval.expr)->loc->name,p);
                    }
#line 1779 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 4: /* constant: FLOAT_CONST  */
#line 217 "ass6_21CS30003_21CS30023.y"
                    {                                                                         
                        (yyval.expr)=new Expression();
                        string p=convertFloatToString((yyvsp[0].float_val));
                        (yyval.expr)->loc=gentemp(new symboltype("float"),p);
                        Q.emit("=",(yyval.expr)->loc->name,p);
                    }
#line 1790 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 5: /* constant: CHAR_CONST  */
#line 224 "ass6_21CS30003_21CS30023.y"
                    {                                                                        
                        (yyval.expr)=new Expression();
                        (yyval.expr)->loc=gentemp(new symboltype("char"),(yyvsp[0].char_val));
                        Q.emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_val)));
                    }
#line 1800 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 6: /* constant: STRING_LITERAL  */
#line 230 "ass6_21CS30003_21CS30023.y"
                    {                                                                        
                        (yyval.expr)=new Expression();
                        (yyval.expr)->loc=gentemp(new symboltype("pointer"),(yyvsp[0].char_val));
                        Q.emit("=",(yyval.expr)->loc->name,string((yyvsp[0].char_val)));
                    }
#line 1810 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 7: /* primary_expression: IDENTIFIER  */
#line 239 "ass6_21CS30003_21CS30023.y"
                    {
                        (yyval.expr)=new Expression();                                                  
                        (yyval.expr)->loc=(yyvsp[0].symp);
                        (yyval.expr)->type="not-boolean";
                    }
#line 1820 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 8: /* primary_expression: constant  */
#line 245 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr) = (yyvsp[0].expr); 
                    }
#line 1828 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 9: /* primary_expression: STRING_LITERAL  */
#line 249 "ass6_21CS30003_21CS30023.y"
                    {
                        // pushback in the strings to be printed
                        (yyval.expr) = new Expression();
                        symboltype* temp = new symboltype("ptr");
                        (yyval.expr)->loc = gentemp(temp, (yyvsp[0].char_val));
                        (yyval.expr)->loc->type->arrtype = new symboltype("char");

                        Q.emit("equalstr", (yyval.expr)->loc->name, to_string(stringsToBePrinted.size()));          
                        stringsToBePrinted.push_back((yyvsp[0].char_val));
                    }
#line 1843 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 10: /* primary_expression: OPENRB expression CLOSERB  */
#line 260 "ass6_21CS30003_21CS30023.y"
                    {                                                                        
                        (yyval.expr)=(yyvsp[-1].expr);
                    }
#line 1851 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 11: /* postfix_expression: primary_expression  */
#line 268 "ass6_21CS30003_21CS30023.y"
                    {
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=(yyvsp[0].expr)->loc;	

                        (yyval.A)->type=(yyvsp[0].expr)->loc->type;	
                        (yyval.A)->loc=(yyval.A)->Array;
                    }
#line 1863 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 12: /* postfix_expression: postfix_expression OPENSB expression CLOSESB  */
#line 276 "ass6_21CS30003_21CS30023.y"
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
#line 1890 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 13: /* postfix_expression: postfix_expression OPENRB argument_expression_list_opt CLOSERB  */
#line 299 "ass6_21CS30003_21CS30023.y"
                    {
                        // Calling the function with a variable number of arguments
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-3].A)->type);

                        string str=convertIntToString((yyvsp[-1].num_params));
                        Q.emit("call",(yyval.A)->Array->name,(yyvsp[-3].A)->Array->name,str);
                    }
#line 1903 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 14: /* postfix_expression: postfix_expression DOT IDENTIFIER  */
#line 308 "ass6_21CS30003_21CS30023.y"
                    { 

                    }
#line 1911 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 15: /* postfix_expression: postfix_expression RIGHTARROW IDENTIFIER  */
#line 312 "ass6_21CS30003_21CS30023.y"
                    { 

                    }
#line 1919 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 16: /* postfix_expression: postfix_expression PLUSPLUS  */
#line 316 "ass6_21CS30003_21CS30023.y"
                    { 
                        // We generate a temporary instance and add 1 to it
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);
                        Q.emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        Q.emit("+",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");
                    }
#line 1931 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 17: /* postfix_expression: postfix_expression MINUSMINS  */
#line 324 "ass6_21CS30003_21CS30023.y"
                    {
                        // We generate a temporary instance and subtract 1 from it
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=gentemp((yyvsp[-1].A)->Array->type);

                        Q.emit("=",(yyval.A)->Array->name,(yyvsp[-1].A)->Array->name);
                        Q.emit("-",(yyvsp[-1].A)->Array->name,(yyvsp[-1].A)->Array->name,"1");	
                    }
#line 1944 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 18: /* postfix_expression: OPENRB type_name CLOSERB OPENCB initializer_list CLOSECB  */
#line 333 "ass6_21CS30003_21CS30023.y"
                    { }
#line 1950 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 19: /* postfix_expression: OPENRB type_name CLOSERB OPENCB initializer_list COMMA CLOSECB  */
#line 335 "ass6_21CS30003_21CS30023.y"
                    { }
#line 1956 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 20: /* argument_expression_list: assignment_expression  */
#line 340 "ass6_21CS30003_21CS30023.y"
                    {
                        (yyval.num_params)=1;                                      //Simple assignment
                        Q.emit("param",(yyvsp[0].expr)->loc->name);	
                    }
#line 1965 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 21: /* argument_expression_list: argument_expression_list COMMA assignment_expression  */
#line 345 "ass6_21CS30003_21CS30023.y"
                    {
                        (yyval.num_params)=(yyvsp[-2].num_params)+1;                                  //Add 1 here
                        Q.emit("param",(yyvsp[0].expr)->loc->name);
                    }
#line 1974 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 22: /* argument_expression_list_opt: argument_expression_list  */
#line 353 "ass6_21CS30003_21CS30023.y"
                    {
                        (yyval.num_params)=(yyvsp[0].num_params); // Simple assignment here
                    }
#line 1982 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 23: /* argument_expression_list_opt: %empty  */
#line 357 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.num_params) = 0; // defaults to 0
                    }
#line 1990 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 24: /* unary_expression: postfix_expression  */
#line 364 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.A)=(yyvsp[0].A); /* assign $$ =  $1*/
                    }
#line 1998 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 25: /* unary_expression: PLUSPLUS unary_expression  */
#line 368 "ass6_21CS30003_21CS30023.y"
                    {  	
                        Q.emit("+",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");		// we just add 1 here
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2007 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 26: /* unary_expression: MINUSMINS unary_expression  */
#line 373 "ass6_21CS30003_21CS30023.y"
                    {
                        Q.emit("-",(yyvsp[0].A)->Array->name,(yyvsp[0].A)->Array->name,"1");        // we just subtract 1 here
                        (yyval.A)=(yyvsp[0].A);
                    }
#line 2016 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 27: /* unary_expression: unary_operator cast_expression  */
#line 378 "ass6_21CS30003_21CS30023.y"
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
#line 2059 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 28: /* unary_expression: SIZEOF unary_expression  */
#line 417 "ass6_21CS30003_21CS30023.y"
                    { 

                    }
#line 2067 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 29: /* unary_expression: SIZEOF OPENRB type_name CLOSERB  */
#line 421 "ass6_21CS30003_21CS30023.y"
                    { 

                    }
#line 2075 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 30: /* unary_operator: BAND  */
#line 429 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '&'; 
                    }
#line 2083 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 31: /* unary_operator: KSTAR  */
#line 433 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '*'; 
                    }
#line 2091 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 32: /* unary_operator: PLUS  */
#line 437 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '+'; 
                    }
#line 2099 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 33: /* unary_operator: MINUS  */
#line 441 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '-'; 
                    }
#line 2107 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 34: /* unary_operator: TILDA  */
#line 445 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '~'; 
                    }
#line 2115 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 35: /* unary_operator: NOT  */
#line 449 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.unaryOp) = '!'; 
                    }
#line 2123 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 36: /* cast_expression: unary_expression  */
#line 456 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.A) = (yyvsp[0].A); 
                    }
#line 2131 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 37: /* cast_expression: OPENRB type_name CLOSERB cast_expression  */
#line 460 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.A)=new Array();	
                        (yyval.A)->Array=convertType((yyvsp[0].A)->Array,var_type);             // Convert and assign
                    }
#line 2140 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 38: /* multiplicative_expression: cast_expression  */
#line 468 "ass6_21CS30003_21CS30023.y"
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
#line 2161 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 39: /* multiplicative_expression: multiplicative_expression KSTAR cast_expression  */
#line 485 "ass6_21CS30003_21CS30023.y"
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
#line 2180 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 40: /* multiplicative_expression: multiplicative_expression DIVIDE cast_expression  */
#line 500 "ass6_21CS30003_21CS30023.y"
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
#line 2197 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 41: /* multiplicative_expression: multiplicative_expression MODULO cast_expression  */
#line 513 "ass6_21CS30003_21CS30023.y"
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
#line 2214 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 42: /* additive_expression: multiplicative_expression  */
#line 530 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2222 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 43: /* additive_expression: additive_expression PLUS multiplicative_expression  */
#line 534 "ass6_21CS30003_21CS30023.y"
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
#line 2239 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 44: /* additive_expression: additive_expression MINUS multiplicative_expression  */
#line 547 "ass6_21CS30003_21CS30023.y"
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
#line 2256 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 45: /* shift_expression: additive_expression  */
#line 563 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2264 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 46: /* shift_expression: shift_expression LEFTS additive_expression  */
#line 567 "ass6_21CS30003_21CS30023.y"
                    { 
                        if(!((yyvsp[0].expr)->loc->type->type == "int"))
                            cout << "There is a type error in our Program"<< endl; 		
                        else {		
                            (yyval.expr) = new Expression();		

                            (yyval.expr)->loc = gentemp(new symboltype("int"));
                            Q.emit("<<", (yyval.expr)->loc->name, (yyvsp[-2].expr)->loc->name, (yyvsp[0].expr)->loc->name);		
                        }
                    }
#line 2279 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 47: /* shift_expression: shift_expression RIGHTS additive_expression  */
#line 578 "ass6_21CS30003_21CS30023.y"
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
#line 2296 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 48: /* relational_expression: shift_expression  */
#line 594 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2304 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 49: /* relational_expression: relational_expression LESSTHAN shift_expression  */
#line 598 "ass6_21CS30003_21CS30023.y"
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
#line 2327 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 50: /* relational_expression: relational_expression GREATERTHAN shift_expression  */
#line 617 "ass6_21CS30003_21CS30023.y"
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
#line 2349 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 51: /* relational_expression: relational_expression LESSEQUAL shift_expression  */
#line 635 "ass6_21CS30003_21CS30023.y"
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
#line 2371 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 52: /* relational_expression: relational_expression GREATEREQUAL shift_expression  */
#line 653 "ass6_21CS30003_21CS30023.y"
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
#line 2393 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 53: /* equality_expression: relational_expression  */
#line 674 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2401 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 54: /* equality_expression: equality_expression EQUALEQUAL relational_expression  */
#line 678 "ass6_21CS30003_21CS30023.y"
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
#line 2426 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 55: /* equality_expression: equality_expression NOTEQUAL relational_expression  */
#line 699 "ass6_21CS30003_21CS30023.y"
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
#line 2450 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 56: /* and_expression: equality_expression  */
#line 722 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2458 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 57: /* and_expression: and_expression BAND equality_expression  */
#line 726 "ass6_21CS30003_21CS30023.y"
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
#line 2481 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 58: /* exclusive_or_expression: and_expression  */
#line 748 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2489 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 59: /* exclusive_or_expression: exclusive_or_expression XOR and_expression  */
#line 752 "ass6_21CS30003_21CS30023.y"
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
#line 2511 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 60: /* inclusive_or_expression: exclusive_or_expression  */
#line 773 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2519 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 61: /* inclusive_or_expression: inclusive_or_expression BITWISEOR exclusive_or_expression  */
#line 777 "ass6_21CS30003_21CS30023.y"
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
#line 2541 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 62: /* logical_and_expression: inclusive_or_expression  */
#line 798 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2549 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 63: /* logical_and_expression: logical_and_expression AND M inclusive_or_expression  */
#line 802 "ass6_21CS30003_21CS30023.y"
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
#line 2568 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 64: /* logical_or_expression: logical_and_expression  */
#line 820 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.expr)=(yyvsp[0].expr);
                    }
#line 2576 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 65: /* logical_or_expression: logical_or_expression OR M logical_and_expression  */
#line 824 "ass6_21CS30003_21CS30023.y"
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
#line 2594 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 66: /* conditional_expression: logical_or_expression  */
#line 841 "ass6_21CS30003_21CS30023.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2600 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 67: /* conditional_expression: logical_or_expression QUESTIONMARK expression COLON conditional_expression  */
#line 843 "ass6_21CS30003_21CS30023.y"
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
#line 2620 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 68: /* assignment_expression: conditional_expression  */
#line 862 "ass6_21CS30003_21CS30023.y"
                    { (yyval.expr)=(yyvsp[0].expr);/* Simple assign */ }
#line 2626 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 69: /* assignment_expression: unary_expression assignment_operator assignment_expression  */
#line 864 "ass6_21CS30003_21CS30023.y"
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
#line 2649 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 70: /* assignment_operator: EQUAL  */
#line 887 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2655 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 71: /* assignment_operator: MULEQUAL  */
#line 889 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2661 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 72: /* assignment_operator: DIVEQUAL  */
#line 891 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2667 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 73: /* assignment_operator: MODEQUAL  */
#line 893 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2673 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 74: /* assignment_operator: PLUSEQUAL  */
#line 895 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2679 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 75: /* assignment_operator: MINUSEQUAL  */
#line 897 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2685 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 76: /* assignment_operator: SHIFTLEQUAL  */
#line 899 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2691 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 77: /* assignment_operator: SHIFTREQUAL  */
#line 901 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2697 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 78: /* assignment_operator: ANDEQUAL  */
#line 903 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2703 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 79: /* assignment_operator: XOREQUAL  */
#line 905 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2709 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 80: /* assignment_operator: OREQUAL  */
#line 907 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2715 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 81: /* expression: assignment_expression  */
#line 911 "ass6_21CS30003_21CS30023.y"
                    { (yyval.expr) = (yyvsp[0].expr); }
#line 2721 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 82: /* expression: expression COMMA assignment_expression  */
#line 913 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2727 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 83: /* constant_expression: conditional_expression  */
#line 918 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2733 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 84: /* declaration: declaration_specifiers init_declarator_list_opt SEMICOLON  */
#line 923 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2739 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 85: /* init_declarator_list_opt: init_declarator_list  */
#line 927 "ass6_21CS30003_21CS30023.y"
                                         {  }
#line 2745 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 86: /* init_declarator_list_opt: %empty  */
#line 928 "ass6_21CS30003_21CS30023.y"
                            {  }
#line 2751 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 87: /* declaration_specifiers: storage_class_specifier declaration_specifiers_opt  */
#line 933 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2757 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 88: /* declaration_specifiers: type_specifier declaration_specifiers_opt  */
#line 935 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2763 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 89: /* declaration_specifiers: type_qualifier declaration_specifiers_opt  */
#line 937 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2769 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 90: /* declaration_specifiers: function_specifier declaration_specifiers_opt  */
#line 939 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2775 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 91: /* declaration_specifiers_opt: declaration_specifiers  */
#line 943 "ass6_21CS30003_21CS30023.y"
                                           { }
#line 2781 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 92: /* declaration_specifiers_opt: %empty  */
#line 944 "ass6_21CS30003_21CS30023.y"
                             {  }
#line 2787 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 93: /* init_declarator_list: init_declarator  */
#line 949 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2793 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 94: /* init_declarator_list: init_declarator_list COMMA init_declarator  */
#line 951 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2799 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 95: /* init_declarator: declarator  */
#line 956 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.symp) = (yyvsp[0].symp);                            // Simple Assign 
                    }
#line 2807 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 96: /* init_declarator: declarator EQUAL initializer  */
#line 960 "ass6_21CS30003_21CS30023.y"
                    {
                        if((yyvsp[0].symp)->val != ""){
                            (yyvsp[-2].symp)->val=(yyvsp[0].symp)->val;                // get the initial value
                        }
                        Q.emit("=", (yyvsp[-2].symp)->name, (yyvsp[0].symp)->name);	// emit that initial value with Assign operator
                    }
#line 2818 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 97: /* storage_class_specifier: EXTERN  */
#line 970 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2824 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 98: /* storage_class_specifier: STATIC  */
#line 972 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2830 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 99: /* storage_class_specifier: AUTO  */
#line 974 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2836 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 100: /* storage_class_specifier: REGISTER  */
#line 976 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2842 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 101: /* type_specifier: VOID  */
#line 981 "ass6_21CS30003_21CS30023.y"
                    { var_type="void"; /* Store the latest var type */ 
                        lookupInsideParent = false;
                    }
#line 2850 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 102: /* type_specifier: CHAR  */
#line 985 "ass6_21CS30003_21CS30023.y"
                    { var_type="char"; /* Store the latest var type */ 
                    lookupInsideParent = false;}
#line 2857 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 103: /* type_specifier: SHORT  */
#line 988 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2863 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 104: /* type_specifier: INT  */
#line 990 "ass6_21CS30003_21CS30023.y"
                    { var_type="int"; /* Store the latest var type */ 
                    lookupInsideParent = false;}
#line 2870 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 105: /* type_specifier: LONG  */
#line 993 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2876 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 106: /* type_specifier: FLOAT  */
#line 995 "ass6_21CS30003_21CS30023.y"
                    { var_type="float"; /* Store the latest var type */ 
                    lookupInsideParent = false;}
#line 2883 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 107: /* type_specifier: DOUBLE  */
#line 998 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2889 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 108: /* type_specifier: SIGNED  */
#line 1000 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2895 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 109: /* type_specifier: UNSIGNED  */
#line 1002 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2901 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 110: /* type_specifier: _BOOL  */
#line 1004 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2907 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 111: /* type_specifier: _COMPLEX  */
#line 1006 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2913 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 112: /* type_specifier: _IMAGINARY  */
#line 1008 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2919 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 113: /* type_specifier: enum_specifier  */
#line 1010 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2925 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 114: /* type_specifier: struct_or_union_specifier  */
#line 1012 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2931 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 115: /* specifier_qualifier_list: type_specifier specifier_qualifier_list_opt  */
#line 1017 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2937 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 116: /* specifier_qualifier_list: type_qualifier specifier_qualifier_list_opt  */
#line 1019 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2943 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 117: /* specifier_qualifier_list_opt: specifier_qualifier_list  */
#line 1023 "ass6_21CS30003_21CS30023.y"
                                             {  }
#line 2949 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 118: /* specifier_qualifier_list_opt: %empty  */
#line 1024 "ass6_21CS30003_21CS30023.y"
                             {  }
#line 2955 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 119: /* struct_or_union_specifier: struct_or_union OPENCB struct_declaration_list CLOSECB  */
#line 1029 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2961 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 120: /* struct_or_union_specifier: struct_or_union IDENTIFIER OPENCB struct_declaration_list CLOSECB  */
#line 1031 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2967 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 121: /* struct_or_union_specifier: struct_or_union IDENTIFIER  */
#line 1033 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2973 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 122: /* struct_or_union: STRUCT  */
#line 1038 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2979 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 123: /* struct_or_union: UNION  */
#line 1040 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2985 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 124: /* struct_declaration_list: struct_declaration  */
#line 1045 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2991 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 125: /* struct_declaration_list: struct_declaration_list struct_declaration  */
#line 1047 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 2997 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 126: /* struct_declaration: specifier_qualifier_list SEMICOLON  */
#line 1052 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3003 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 127: /* struct_declaration: specifier_qualifier_list struct_declarator_list SEMICOLON  */
#line 1054 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3009 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 128: /* struct_declarator_list: struct_declarator  */
#line 1059 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3015 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 129: /* struct_declarator_list: struct_declarator_list COMMA struct_declarator  */
#line 1061 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3021 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 130: /* struct_declarator: COLON constant_expression  */
#line 1065 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3027 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 131: /* struct_declarator: declarator COLON constant_expression  */
#line 1067 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3033 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 132: /* struct_declarator: declarator  */
#line 1069 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3039 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 133: /* enum_specifier: ENUM identifier_opt OPENCB enumerator_list CLOSECB  */
#line 1074 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3045 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 134: /* enum_specifier: ENUM identifier_opt OPENCB enumerator_list COMMA CLOSECB  */
#line 1076 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3051 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 135: /* enum_specifier: ENUM IDENTIFIER  */
#line 1078 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3057 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 136: /* identifier_opt: IDENTIFIER  */
#line 1082 "ass6_21CS30003_21CS30023.y"
                               {  }
#line 3063 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 137: /* identifier_opt: %empty  */
#line 1083 "ass6_21CS30003_21CS30023.y"
                             {  }
#line 3069 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 138: /* enumerator_list: enumerator  */
#line 1088 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3075 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 139: /* enumerator_list: enumerator_list COMMA enumerator  */
#line 1090 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3081 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 140: /* enumerator: IDENTIFIER  */
#line 1096 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3087 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 141: /* enumerator: IDENTIFIER EQUAL constant_expression  */
#line 1098 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3093 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 142: /* type_qualifier: CONST  */
#line 1104 "ass6_21CS30003_21CS30023.y"
                    { /* NOT to be modelled */ }
#line 3099 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 143: /* type_qualifier: RESTRICT  */
#line 1106 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3105 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 144: /* type_qualifier: VOLATILE  */
#line 1108 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3111 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 145: /* function_specifier: INLINE  */
#line 1113 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3117 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 146: /* declarator: pointer direct_declarator  */
#line 1118 "ass6_21CS30003_21CS30023.y"
                    {
                        symboltype *t = (yyvsp[-1].sym_type);
                        while(t->arrtype!=NULL)
                        {
                            t = t->arrtype;                                         // Recursively get to the base Array
                        }   
                        t->arrtype = (yyvsp[0].symp)->type;                                      // add the base type 
                        
                        (yyval.symp) = (yyvsp[0].symp)->update((yyvsp[-1].sym_type));                                        // update the symbol type
                    }
#line 3132 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 147: /* declarator: direct_declarator  */
#line 1128 "ass6_21CS30003_21CS30023.y"
                                        {   }
#line 3138 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 148: /* direct_declarator: IDENTIFIER  */
#line 1135 "ass6_21CS30003_21CS30023.y"
                    {
                        //if ID, simply add a new variable of var_type
                        
                        string nameOfTable = (yyvsp[0].symp)->name;
                        if(nameOfTable.find(".")!=nameOfTable.npos)
                            nameOfTable = nameOfTable.substr(0, nameOfTable.find("."));
                        curPossibleSTName = nameOfTable;	 
                        (yyval.symp) = (yyvsp[0].symp)->update(new symboltype(var_type));                                      // update the symbol type to latest type specifier
                        currSymbolPtr = (yyval.symp);	                                                            // store the latest Symbol
                    }
#line 3153 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 149: /* direct_declarator: OPENRB declarator CLOSERB  */
#line 1145 "ass6_21CS30003_21CS30023.y"
                                                {(yyval.symp)=(yyvsp[-1].symp);}
#line 3159 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 150: /* direct_declarator: direct_declarator OPENSB type_qualifier_list assignment_expression CLOSESB  */
#line 1146 "ass6_21CS30003_21CS30023.y"
                                                                                                 {	}
#line 3165 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 151: /* direct_declarator: direct_declarator OPENSB type_qualifier_list CLOSESB  */
#line 1147 "ass6_21CS30003_21CS30023.y"
                                                                           {	}
#line 3171 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 152: /* direct_declarator: direct_declarator OPENSB assignment_expression CLOSESB  */
#line 1149 "ass6_21CS30003_21CS30023.y"
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
                            symboltype* s = new symboltype("arr", t, stoi((yyvsp[-1].expr)->loc->val));                      // Create a new symbol with the initial value
                            (yyval.symp) = (yyvsp[-3].symp)->update(s);                                                         // Update the symbol type
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, stoi((yyvsp[-1].expr)->loc->val));      // similar arguments as above		
                            (yyval.symp) = (yyvsp[-3].symp)->update((yyvsp[-3].symp)->type);
                        }
                        
                    }
#line 3196 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 153: /* direct_declarator: direct_declarator OPENSB CLOSESB  */
#line 1170 "ass6_21CS30003_21CS30023.y"
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
                            symboltype* s = new symboltype("arr", t, 0);     // no initial values, simply keep 0
                            (yyval.symp) = (yyvsp[-2].symp)->update(s);                                     // Update the symboltype of $$
                        }
                        else 
                        {
                            prev->arrtype =  new symboltype("arr", t, 0);
                            (yyval.symp) = (yyvsp[-2].symp)->update((yyvsp[-2].symp)->type);
                        }
                    }
#line 3220 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 154: /* direct_declarator: direct_declarator OPENSB STATIC type_qualifier_list assignment_expression CLOSESB  */
#line 1189 "ass6_21CS30003_21CS30023.y"
                                                                                                        {	}
#line 3226 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 155: /* direct_declarator: direct_declarator OPENSB STATIC assignment_expression CLOSESB  */
#line 1190 "ass6_21CS30003_21CS30023.y"
                                                                                    {	}
#line 3232 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 156: /* direct_declarator: direct_declarator OPENSB type_qualifier_list KSTAR CLOSESB  */
#line 1191 "ass6_21CS30003_21CS30023.y"
                                                                                 {	}
#line 3238 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 157: /* direct_declarator: direct_declarator OPENSB KSTAR CLOSESB  */
#line 1192 "ass6_21CS30003_21CS30023.y"
                                                             {	}
#line 3244 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 158: /* direct_declarator: direct_declarator OPENRB FUN_CT parameter_type_list CLOSERB  */
#line 1194 "ass6_21CS30003_21CS30023.y"
                    {
                        string nameOfTable = (yyvsp[-4].symp)->name;
                        if(nameOfTable.find(".")!=nameOfTable.npos)
                            nameOfTable = nameOfTable.substr(0, nameOfTable.find("."));
                        ST->name = nameOfTable;
                        (yyvsp[-4].symp)->name = nameOfTable;	                    // change the ST name to fun
                        if((yyvsp[-4].symp)->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");          // lookup for return value	
                            s->update((yyvsp[-4].symp)->type);		            // update return type
                        }
                        (yyvsp[-4].symp)->nested=ST;                              // link nested Symbol Table 
                        (yyvsp[-4].symp)->category = "function";                   
                        (yyvsp[-4].symp)->updateFuntionStatus(true);
                        listOffunctions.push_back((yyvsp[-4].symp));
                        ST->parent = globalST;                      // link parent Symbol Table
                        
                        changeTable(globalST);				        // Come back to globalsymbol table
                        currSymbolPtr = (yyval.symp);
                    }
#line 3269 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 159: /* direct_declarator: direct_declarator OPENRB identifier_list CLOSERB  */
#line 1214 "ass6_21CS30003_21CS30023.y"
                                                                       {	}
#line 3275 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 160: /* direct_declarator: direct_declarator OPENRB FUN_CT CLOSERB  */
#line 1216 "ass6_21CS30003_21CS30023.y"
                    {        //similar as above

                        string nameOfTable = (yyvsp[-3].symp)->name;
                        if(nameOfTable.find(".")!=nameOfTable.npos)
                            nameOfTable = nameOfTable.substr(0, nameOfTable.find("."));
                        ST->name = nameOfTable;
                        (yyvsp[-3].symp)->name = nameOfTable;
                        if((yyvsp[-3].symp)->type->type !="void") 
                        {
                            sym *s = ST->lookup("return");
                            s->update((yyvsp[-3].symp)->type);            // update return type
                        }
                        (yyvsp[-3].symp)->nested=ST;                      // link nested Symbol table
                        (yyvsp[-3].symp)->category = "function";          
                        (yyvsp[-3].symp)->updateFuntionStatus(true);
                        listOffunctions.push_back((yyvsp[-3].symp));
                        ST->parent = globalST;              // Set parent to Global Symbol table
                        
                        changeTable(globalST);				// Go back to global Symbol table
                        currSymbolPtr = (yyval.symp);
                    }
#line 3301 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 161: /* type_qualifier_list_opt: type_qualifier_list  */
#line 1240 "ass6_21CS30003_21CS30023.y"
                                        { }
#line 3307 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 162: /* type_qualifier_list_opt: %empty  */
#line 1241 "ass6_21CS30003_21CS30023.y"
                             {  }
#line 3313 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 163: /* pointer: KSTAR type_qualifier_list_opt  */
#line 1247 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr");   //create a new pointer symbol
                    }
#line 3321 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 164: /* pointer: KSTAR type_qualifier_list_opt pointer  */
#line 1251 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.sym_type) = new symboltype("ptr",(yyvsp[0].sym_type)); // create the symboltype with $3 symbol type
                    }
#line 3329 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 165: /* type_qualifier_list: type_qualifier  */
#line 1258 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3335 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 166: /* type_qualifier_list: type_qualifier_list type_qualifier  */
#line 1260 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3341 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 167: /* parameter_type_list: parameter_list  */
#line 1265 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3347 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 168: /* parameter_type_list: parameter_list COMMA DOTDOTDOT  */
#line 1267 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3353 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 169: /* parameter_list: parameter_declaration  */
#line 1272 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3359 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 170: /* parameter_list: parameter_list COMMA parameter_declaration  */
#line 1274 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3365 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 171: /* parameter_declaration: declaration_specifiers declarator  */
#line 1279 "ass6_21CS30003_21CS30023.y"
                    {  
                        (yyvsp[0].symp)->category = "param";              // verify
                    }
#line 3373 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 172: /* parameter_declaration: declaration_specifiers  */
#line 1283 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3379 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 173: /* identifier_list: IDENTIFIER  */
#line 1288 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3385 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 174: /* identifier_list: identifier_list COMMA IDENTIFIER  */
#line 1290 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3391 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 175: /* type_name: specifier_qualifier_list  */
#line 1295 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3397 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 176: /* initializer: assignment_expression  */
#line 1300 "ass6_21CS30003_21CS30023.y"
                    { (yyval.symp)=(yyvsp[0].expr)->loc; /* assignment */  }
#line 3403 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 177: /* initializer: OPENCB initializer_list CLOSECB  */
#line 1302 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3409 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 178: /* initializer: OPENCB initializer_list COMMA CLOSECB  */
#line 1304 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3415 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 179: /* initializer_list: designation_opt initializer  */
#line 1309 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3421 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 180: /* initializer_list: initializer_list COMMA designation_opt initializer  */
#line 1311 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3427 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 181: /* designation_opt: designation  */
#line 1315 "ass6_21CS30003_21CS30023.y"
                                { }
#line 3433 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 182: /* designation_opt: %empty  */
#line 1316 "ass6_21CS30003_21CS30023.y"
                             { }
#line 3439 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 183: /* designation: designator_list EQUAL  */
#line 1321 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3445 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 184: /* designator_list: designator  */
#line 1326 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3451 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 185: /* designator_list: designator_list designator  */
#line 1328 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3457 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 186: /* designator: OPENSB constant_expression CLOSESB  */
#line 1333 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3463 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 187: /* designator: DOT IDENTIFIER  */
#line 1335 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3469 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 188: /* statement: labeled_statement  */
#line 1340 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3475 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 189: /* statement: compound_statement  */
#line 1342 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3481 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 190: /* statement: expression_statement  */
#line 1344 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.stat)=new Statement();              //create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist; 
                    }
#line 3490 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 191: /* statement: selection_statement  */
#line 1349 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3496 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 192: /* statement: iteration_statement  */
#line 1351 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3502 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 193: /* statement: jump_statement  */
#line 1353 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); }
#line 3508 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 194: /* loop_statement: labeled_statement  */
#line 1357 "ass6_21CS30003_21CS30023.y"
                                        {  }
#line 3514 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 195: /* loop_statement: expression_statement  */
#line 1359 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.stat)=new Statement();                         // create new statement with same nextlist
                        (yyval.stat)->nextlist=(yyvsp[0].expr)->nextlist;                  // assign the nextlist
                    }
#line 3523 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 196: /* loop_statement: selection_statement  */
#line 1363 "ass6_21CS30003_21CS30023.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3529 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 197: /* loop_statement: iteration_statement  */
#line 1364 "ass6_21CS30003_21CS30023.y"
                                            { (yyval.stat)=(yyvsp[0].stat); }
#line 3535 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 198: /* loop_statement: jump_statement  */
#line 1365 "ass6_21CS30003_21CS30023.y"
                                       { (yyval.stat)=(yyvsp[0].stat); }
#line 3541 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 199: /* labeled_statement: IDENTIFIER COLON M statement  */
#line 1369 "ass6_21CS30003_21CS30023.y"
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
#line 3559 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 200: /* labeled_statement: CASE constant_expression COLON statement  */
#line 1383 "ass6_21CS30003_21CS30023.y"
                    { /* Not to be modelled */ }
#line 3565 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 201: /* labeled_statement: DEFAULT COLON statement  */
#line 1385 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3571 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 202: /* compound_statement: OPENCB X changetable block_item_list_opt CLOSECB  */
#line 1390 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.stat)=(yyvsp[-1].stat);                           // Compound Statement = blockItemList
                        changeTable(ST->parent);         // Change Symbol Table
                    }
#line 3580 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 203: /* block_item_list: block_item  */
#line 1398 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3586 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 204: /* block_item_list: block_item_list M block_item  */
#line 1400 "ass6_21CS30003_21CS30023.y"
                    { 
                        (yyval.stat)=(yyvsp[0].stat);
                        backpatch((yyvsp[-2].stat)->nextlist,(yyvsp[-1].instr_number));     //after $1, move to block_item via $2
                    }
#line 3595 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 205: /* block_item_list_opt: block_item_list  */
#line 1408 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat) ;/* simple assign */}
#line 3601 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 206: /* block_item_list_opt: %empty  */
#line 1410 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3607 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 207: /* block_item: declaration  */
#line 1415 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat)=new Statement(); /* Create new statement */}
#line 3613 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 208: /* block_item: statement  */
#line 1417 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat)=(yyvsp[0].stat); /* Simple assign */}
#line 3619 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 209: /* expression_statement: SEMICOLON  */
#line 1422 "ass6_21CS30003_21CS30023.y"
                    { (yyval.expr) = new Expression(); /* new Expression */ }
#line 3625 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 210: /* expression_statement: expression SEMICOLON  */
#line 1424 "ass6_21CS30003_21CS30023.y"
                    { (yyval.expr)=(yyvsp[-1].expr); /* Simple assign */}
#line 3631 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 211: /* selection_statement: IF OPENRB expression CLOSERB M statement N  */
#line 1429 "ass6_21CS30003_21CS30023.y"
                    {
                        // if without else
                        convertIntToBool((yyvsp[-4].expr));                                   // expression in IF is converted to bool

                        (yyval.stat) = new Statement();                                   
                        backpatch((yyvsp[-4].expr)->truelist, (yyvsp[-2].instr_number));                            // We do the backpatch here

                        list<int> temp = merge((yyvsp[-4].expr)->falselist, (yyvsp[-1].stat)->nextlist);    // If it is false, we just escape the inner statement
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist, temp);
                        backpatch((yyval.stat)->nextlist, nextinstr());
                    }
#line 3647 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 212: /* selection_statement: IF OPENRB expression CLOSERB M statement N ELSE M statement  */
#line 1441 "ass6_21CS30003_21CS30023.y"
                    {
                        // if with else
                        convertIntToBool((yyvsp[-7].expr));                                   // convert expression to bool 

                        (yyval.stat) = new Statement();                                   
                        backpatch((yyvsp[-7].expr)->truelist, (yyvsp[-5].instr_number));                            // If true, we access the first part
                        backpatch((yyvsp[-7].expr)->falselist, (yyvsp[-1].instr_number));                          // Else the second prt

                        list<int> temp = merge((yyvsp[-4].stat)->nextlist, (yyvsp[-3].stat)->nextlist);       // Then we merge with the nextlists of both statements
                        (yyval.stat)->nextlist = merge((yyvsp[0].stat)->nextlist,temp);
                        backpatch((yyval.stat)->nextlist, nextinstr());	
                    }
#line 3664 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 213: /* selection_statement: SWITCH OPENRB expression CLOSERB statement  */
#line 1454 "ass6_21CS30003_21CS30023.y"
                    { /* Not asked in question */ }
#line 3670 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 214: /* iteration_statement: WHILE W OPENRB X changetable M expression CLOSERB M loop_statement  */
#line 1459 "ass6_21CS30003_21CS30023.y"
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
#line 3691 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 215: /* iteration_statement: WHILE W OPENRB X changetable M expression CLOSERB OPENCB M block_item_list_opt CLOSECB  */
#line 1476 "ass6_21CS30003_21CS30023.y"
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
#line 3712 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 216: /* iteration_statement: DO D M loop_statement M WHILE OPENRB expression CLOSERB SEMICOLON  */
#line 1493 "ass6_21CS30003_21CS30023.y"
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
#line 3729 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 217: /* iteration_statement: DO D OPENCB M block_item_list_opt CLOSECB M WHILE OPENRB expression CLOSERB SEMICOLON  */
#line 1506 "ass6_21CS30003_21CS30023.y"
                        {
                        //do statement
		                (yyval.stat) = new Statement();     //create statement	
		                convertIntToBool((yyvsp[-2].expr));      //convert to bool
		                
                        backpatch((yyvsp[-2].expr)->truelist, (yyvsp[-8].instr_number));						// M1 to go back to statement if expression is true
		                backpatch((yyvsp[-7].stat)->nextlist, (yyvsp[-5].instr_number));						// M2 to go to check expression if statement is complete
		                
                        (yyval.stat)->nextlist = (yyvsp[-2].expr)->falselist;                       // Exit loop if statement is false
		                loop_name = "";
	                }
#line 3745 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 218: /* iteration_statement: FOR F OPENRB X changetable declaration M expression_statement M expression N CLOSERB M loop_statement  */
#line 1518 "ass6_21CS30003_21CS30023.y"
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
#line 3767 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 219: /* iteration_statement: FOR F OPENRB X changetable expression_statement M expression_statement M expression N CLOSERB M loop_statement  */
#line 1536 "ass6_21CS30003_21CS30023.y"
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
#line 3789 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 220: /* iteration_statement: FOR F OPENRB X changetable declaration M expression_statement M expression N CLOSERB M OPENCB block_item_list_opt CLOSECB  */
#line 1554 "ass6_21CS30003_21CS30023.y"
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
#line 3811 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 221: /* iteration_statement: FOR F OPENRB X changetable expression_statement M expression_statement M expression N CLOSERB M OPENCB block_item_list_opt CLOSECB  */
#line 1572 "ass6_21CS30003_21CS30023.y"
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
#line 3831 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 222: /* jump_statement: GOTO IDENTIFIER SEMICOLON  */
#line 1591 "ass6_21CS30003_21CS30023.y"
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
#line 3852 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 223: /* jump_statement: CONTINUE SEMICOLON  */
#line 1608 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat) = new Statement(); }
#line 3858 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 224: /* jump_statement: BREAK SEMICOLON  */
#line 1610 "ass6_21CS30003_21CS30023.y"
                    { (yyval.stat) = new Statement(); }
#line 3864 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 225: /* jump_statement: RETURN expression SEMICOLON  */
#line 1612 "ass6_21CS30003_21CS30023.y"
                    {
                        (yyval.stat) = new Statement();	
                        Q.emit("return",(yyvsp[-1].expr)->loc->name);             
                    }
#line 3873 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 226: /* jump_statement: RETURN SEMICOLON  */
#line 1617 "ass6_21CS30003_21CS30023.y"
                    {
                        (yyval.stat) = new Statement();	
                        Q.emit("return","");                         
                    }
#line 3882 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 227: /* translation_unit: external_declaration  */
#line 1625 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3888 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 228: /* translation_unit: translation_unit external_declaration  */
#line 1627 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3894 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 229: /* external_declaration: function_definition  */
#line 1632 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3900 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 230: /* external_declaration: declaration  */
#line 1634 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3906 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 231: /* function_definition: declaration_specifiers declarator declaration_list_opt FUN_CT OPENCB block_item_list_opt CLOSECB  */
#line 1639 "ass6_21CS30003_21CS30023.y"
                    {
                        // int next_instr=0;	 	
                        Q.emit("funcend", ST->name);
                        ST->parent=globalST;

                        (yyvsp[-5].symp)->updateFuntionStatus(true);
                        // Add a function name
                        table_count = 0;
                        label_table.clear();                        

                        changeTable(globalST);                     // Change the table again to Global ST
                    }
#line 3923 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 232: /* declaration_list_opt: declaration_list  */
#line 1654 "ass6_21CS30003_21CS30023.y"
                                     { }
#line 3929 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 233: /* declaration_list_opt: %empty  */
#line 1655 "ass6_21CS30003_21CS30023.y"
                             { }
#line 3935 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 234: /* declaration_list: declaration  */
#line 1660 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3941 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 235: /* declaration_list: declaration_list declaration  */
#line 1662 "ass6_21CS30003_21CS30023.y"
                    {  }
#line 3947 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 236: /* M: %empty  */
#line 1666 "ass6_21CS30003_21CS30023.y"
        {
        // Used in backpatching
		(yyval.instr_number) = nextinstr();
	}
#line 3956 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 237: /* F: %empty  */
#line 1673 "ass6_21CS30003_21CS30023.y"
        {
		// Beginning of the for statement
		loop_name = "FOR";
	}
#line 3965 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 238: /* W: %empty  */
#line 1680 "ass6_21CS30003_21CS30023.y"
        {
		// Beginning of the while statement
		loop_name = "WHILE";
	}
#line 3974 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 239: /* D: %empty  */
#line 1687 "ass6_21CS30003_21CS30023.y"
        {
		// Beginning of the do while statement
		loop_name = "DO_WHILE";
	}
#line 3983 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 240: /* X: %empty  */
#line 1694 "ass6_21CS30003_21CS30023.y"
        {
		string name = ST->name+"$"+loop_name+"$"+to_string(table_count);
		table_count++; 

        // First an entry is created
		sym* s = ST->lookup(name); 
		s->nested = new symtable(name);
		s->nested->parent = ST;
		s->name = name;
		s->update(new symboltype("block"));

		currSymbolPtr = s;          // updating the current symbol
	}
#line 4001 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 241: /* N: %empty  */
#line 1710 "ass6_21CS30003_21CS30023.y"
        {
        /*
            This is also useful in backpatching
        */
		(yyval.stat) = new Statement();
		(yyval.stat)->nextlist=makelist(nextinstr());

		Q.emit("goto","");
	}
#line 4015 "ass6_21CS30003_21CS30023.tab.c"
    break;

  case 242: /* FUN_CT: %empty  */
#line 1722 "ass6_21CS30003_21CS30023.y"
        {    
        // Utility to change the table
		parST = ST;                                                               

        // If nested call recursively on the nested table
		if(currSymbolPtr->nested==NULL) {
			changeTable(new symtable(curPossibleSTName));	                                           
		}
		else {
			changeTable(currSymbolPtr ->nested);						               
			Q.emit("func", ST->name);
		}
	}
#line 4033 "ass6_21CS30003_21CS30023.tab.c"
    break;


#line 4037 "ass6_21CS30003_21CS30023.tab.c"

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

#line 1737 "ass6_21CS30003_21CS30023.y"


/*Auxiliaries*/
void yyerror(string s) {
    // print error
    cout<<s<<endl;
}
