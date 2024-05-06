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
#line 1 "bison_Program.y"
 
/* DEFINITIONS*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern FILE *yyin;
extern FILE *yyout;

extern int yylex();

void yyerror(char *);

#line 84 "bison_Program.tab.c"

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


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    TOKEN_IF = 258,                /* TOKEN_IF  */
    TOKEN_ELSE = 259,              /* TOKEN_ELSE  */
    TOKEN_ELSE_IF = 260,           /* TOKEN_ELSE_IF  */
    TOKEN_WHILE = 261,             /* TOKEN_WHILE  */
    TOKEN_DO = 262,                /* TOKEN_DO  */
    TOKEN_FOR = 263,               /* TOKEN_FOR  */
    TOKEN_SWITCH = 264,            /* TOKEN_SWITCH  */
    TOKEN_CASE = 265,              /* TOKEN_CASE  */
    TOKEN_DEFAULT = 266,           /* TOKEN_DEFAULT  */
    TOKEN_BREAK = 267,             /* TOKEN_BREAK  */
    TOKEN_RETURN = 268,            /* TOKEN_RETURN  */
    TOKEN_CLASS = 269,             /* TOKEN_CLASS  */
    TOKEN_PUBLIC = 270,            /* TOKEN_PUBLIC  */
    TOKEN_PRIVATE = 271,           /* TOKEN_PRIVATE  */
    TOKEN_INT = 272,               /* TOKEN_INT  */
    TOKEN_CHAR = 273,              /* TOKEN_CHAR  */
    TOKEN_DOUBLE = 274,            /* TOKEN_DOUBLE  */
    TOKEN_BOOLEAN = 275,           /* TOKEN_BOOLEAN  */
    TOKEN_STRING = 276,            /* TOKEN_STRING  */
    TOKEN_TRUE = 277,              /* TOKEN_TRUE  */
    TOKEN_FALSE = 278,             /* TOKEN_FALSE  */
    TOKEN_NEW = 279,               /* TOKEN_NEW  */
    TOKEN_OUT_PRINT = 280,         /* TOKEN_OUT_PRINT  */
    TOKEN_SEMICOLON = 281,         /* TOKEN_SEMICOLON  */
    TOKEN_LBRACE = 282,            /* TOKEN_LBRACE  */
    TOKEN_RBRACE = 283,            /* TOKEN_RBRACE  */
    TOKEN_LPAREN = 284,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 285,            /* TOKEN_RPAREN  */
    TOKEN_LBRACKET = 286,          /* TOKEN_LBRACKET  */
    TOKEN_RBRACKET = 287,          /* TOKEN_RBRACKET  */
    TOKEN_ASSIGN = 288,            /* TOKEN_ASSIGN  */
    TOKEN_COMMA = 289,             /* TOKEN_COMMA  */
    TOKEN_PLUS = 290,              /* TOKEN_PLUS  */
    TOKEN_MINUS = 291,             /* TOKEN_MINUS  */
    TOKEN_MULT = 292,              /* TOKEN_MULT  */
    TOKEN_DIV = 293,               /* TOKEN_DIV  */
    TOKEN_LESS_THAN = 294,         /* TOKEN_LESS_THAN  */
    TOKEN_GREATER_THAN = 295,      /* TOKEN_GREATER_THAN  */
    TOKEN_EQUAL = 296,             /* TOKEN_EQUAL  */
    TOKEN_NOT_EQUAL = 297,         /* TOKEN_NOT_EQUAL  */
    TOKEN_LESS_THAN_EQUAL = 298,   /* TOKEN_LESS_THAN_EQUAL  */
    TOKEN_GREATER_THAN_EQUAL = 299, /* TOKEN_GREATER_THAN_EQUAL  */
    TOKEN_AND = 300,               /* TOKEN_AND  */
    TOKEN_OR = 301,                /* TOKEN_OR  */
    TOKEN_MODULO = 302,            /* TOKEN_MODULO  */
    TOKEN_HASH = 303,              /* TOKEN_HASH  */
    TOKEN_AT = 304,                /* TOKEN_AT  */
    TOKEN_CARET = 305,             /* TOKEN_CARET  */
    TOKEN_QUESTION_MARK = 306,     /* TOKEN_QUESTION_MARK  */
    TOKEN_SINGLE_QUOTE = 307,      /* TOKEN_SINGLE_QUOTE  */
    TOKEN_DOUBLE_QUOTE = 308,      /* TOKEN_DOUBLE_QUOTE  */
    TOKEN_UNDERSCORE = 309,        /* TOKEN_UNDERSCORE  */
    TOKEN_DOT = 310,               /* TOKEN_DOT  */
    TOKEN_EXCLAMATION_POINT = 311, /* TOKEN_EXCLAMATION_POINT  */
    TOKEN_PIPE = 312,              /* TOKEN_PIPE  */
    STRING_LITERAL = 313,          /* STRING_LITERAL  */
    TOKEN_ONE_LINE_COMMENT = 314,  /* TOKEN_ONE_LINE_COMMENT  */
    TOKEN_MULTIPLE_LINE_COMMENTS = 315, /* TOKEN_MULTIPLE_LINE_COMMENTS  */
    TOKEN_ADD = 316,               /* TOKEN_ADD  */
    LOWER_THAN_DEFAULT = 317,      /* LOWER_THAN_DEFAULT  */
    TOKEN_START = 318,             /* TOKEN_START  */
    TOKEN_END = 319,               /* TOKEN_END  */
    TOKEN_COLON = 320,             /* TOKEN_COLON  */
    TOKEN_VOID = 321,              /* TOKEN_VOID  */
    TOKEN_SUB = 322,               /* TOKEN_SUB  */
    TOKEN_MUL = 323,               /* TOKEN_MUL  */
    UMINUS = 324,                  /* UMINUS  */
    LOWER_THAN_CASE = 325,         /* LOWER_THAN_CASE  */
    NUMBER = 326,                  /* NUMBER  */
    IDENTIFIER = 327,              /* IDENTIFIER  */
    CLASS_IDENTIFIER = 328         /* CLASS_IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 35 "bison_Program.y"

    int intvalue;
    char* strvalue;
    double doublevalue;

#line 210 "bison_Program.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);



/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_IF = 3,                   /* TOKEN_IF  */
  YYSYMBOL_TOKEN_ELSE = 4,                 /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_ELSE_IF = 5,              /* TOKEN_ELSE_IF  */
  YYSYMBOL_TOKEN_WHILE = 6,                /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_DO = 7,                   /* TOKEN_DO  */
  YYSYMBOL_TOKEN_FOR = 8,                  /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_SWITCH = 9,               /* TOKEN_SWITCH  */
  YYSYMBOL_TOKEN_CASE = 10,                /* TOKEN_CASE  */
  YYSYMBOL_TOKEN_DEFAULT = 11,             /* TOKEN_DEFAULT  */
  YYSYMBOL_TOKEN_BREAK = 12,               /* TOKEN_BREAK  */
  YYSYMBOL_TOKEN_RETURN = 13,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_CLASS = 14,               /* TOKEN_CLASS  */
  YYSYMBOL_TOKEN_PUBLIC = 15,              /* TOKEN_PUBLIC  */
  YYSYMBOL_TOKEN_PRIVATE = 16,             /* TOKEN_PRIVATE  */
  YYSYMBOL_TOKEN_INT = 17,                 /* TOKEN_INT  */
  YYSYMBOL_TOKEN_CHAR = 18,                /* TOKEN_CHAR  */
  YYSYMBOL_TOKEN_DOUBLE = 19,              /* TOKEN_DOUBLE  */
  YYSYMBOL_TOKEN_BOOLEAN = 20,             /* TOKEN_BOOLEAN  */
  YYSYMBOL_TOKEN_STRING = 21,              /* TOKEN_STRING  */
  YYSYMBOL_TOKEN_TRUE = 22,                /* TOKEN_TRUE  */
  YYSYMBOL_TOKEN_FALSE = 23,               /* TOKEN_FALSE  */
  YYSYMBOL_TOKEN_NEW = 24,                 /* TOKEN_NEW  */
  YYSYMBOL_TOKEN_OUT_PRINT = 25,           /* TOKEN_OUT_PRINT  */
  YYSYMBOL_TOKEN_SEMICOLON = 26,           /* TOKEN_SEMICOLON  */
  YYSYMBOL_TOKEN_LBRACE = 27,              /* TOKEN_LBRACE  */
  YYSYMBOL_TOKEN_RBRACE = 28,              /* TOKEN_RBRACE  */
  YYSYMBOL_TOKEN_LPAREN = 29,              /* TOKEN_LPAREN  */
  YYSYMBOL_TOKEN_RPAREN = 30,              /* TOKEN_RPAREN  */
  YYSYMBOL_TOKEN_LBRACKET = 31,            /* TOKEN_LBRACKET  */
  YYSYMBOL_TOKEN_RBRACKET = 32,            /* TOKEN_RBRACKET  */
  YYSYMBOL_TOKEN_ASSIGN = 33,              /* TOKEN_ASSIGN  */
  YYSYMBOL_TOKEN_COMMA = 34,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_PLUS = 35,                /* TOKEN_PLUS  */
  YYSYMBOL_TOKEN_MINUS = 36,               /* TOKEN_MINUS  */
  YYSYMBOL_TOKEN_MULT = 37,                /* TOKEN_MULT  */
  YYSYMBOL_TOKEN_DIV = 38,                 /* TOKEN_DIV  */
  YYSYMBOL_TOKEN_LESS_THAN = 39,           /* TOKEN_LESS_THAN  */
  YYSYMBOL_TOKEN_GREATER_THAN = 40,        /* TOKEN_GREATER_THAN  */
  YYSYMBOL_TOKEN_EQUAL = 41,               /* TOKEN_EQUAL  */
  YYSYMBOL_TOKEN_NOT_EQUAL = 42,           /* TOKEN_NOT_EQUAL  */
  YYSYMBOL_TOKEN_LESS_THAN_EQUAL = 43,     /* TOKEN_LESS_THAN_EQUAL  */
  YYSYMBOL_TOKEN_GREATER_THAN_EQUAL = 44,  /* TOKEN_GREATER_THAN_EQUAL  */
  YYSYMBOL_TOKEN_AND = 45,                 /* TOKEN_AND  */
  YYSYMBOL_TOKEN_OR = 46,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_MODULO = 47,              /* TOKEN_MODULO  */
  YYSYMBOL_TOKEN_HASH = 48,                /* TOKEN_HASH  */
  YYSYMBOL_TOKEN_AT = 49,                  /* TOKEN_AT  */
  YYSYMBOL_TOKEN_CARET = 50,               /* TOKEN_CARET  */
  YYSYMBOL_TOKEN_QUESTION_MARK = 51,       /* TOKEN_QUESTION_MARK  */
  YYSYMBOL_TOKEN_SINGLE_QUOTE = 52,        /* TOKEN_SINGLE_QUOTE  */
  YYSYMBOL_TOKEN_DOUBLE_QUOTE = 53,        /* TOKEN_DOUBLE_QUOTE  */
  YYSYMBOL_TOKEN_UNDERSCORE = 54,          /* TOKEN_UNDERSCORE  */
  YYSYMBOL_TOKEN_DOT = 55,                 /* TOKEN_DOT  */
  YYSYMBOL_TOKEN_EXCLAMATION_POINT = 56,   /* TOKEN_EXCLAMATION_POINT  */
  YYSYMBOL_TOKEN_PIPE = 57,                /* TOKEN_PIPE  */
  YYSYMBOL_STRING_LITERAL = 58,            /* STRING_LITERAL  */
  YYSYMBOL_TOKEN_ONE_LINE_COMMENT = 59,    /* TOKEN_ONE_LINE_COMMENT  */
  YYSYMBOL_TOKEN_MULTIPLE_LINE_COMMENTS = 60, /* TOKEN_MULTIPLE_LINE_COMMENTS  */
  YYSYMBOL_TOKEN_ADD = 61,                 /* TOKEN_ADD  */
  YYSYMBOL_LOWER_THAN_DEFAULT = 62,        /* LOWER_THAN_DEFAULT  */
  YYSYMBOL_TOKEN_START = 63,               /* TOKEN_START  */
  YYSYMBOL_TOKEN_END = 64,                 /* TOKEN_END  */
  YYSYMBOL_TOKEN_COLON = 65,               /* TOKEN_COLON  */
  YYSYMBOL_TOKEN_VOID = 66,                /* TOKEN_VOID  */
  YYSYMBOL_TOKEN_SUB = 67,                 /* TOKEN_SUB  */
  YYSYMBOL_TOKEN_MUL = 68,                 /* TOKEN_MUL  */
  YYSYMBOL_UMINUS = 69,                    /* UMINUS  */
  YYSYMBOL_LOWER_THAN_CASE = 70,           /* LOWER_THAN_CASE  */
  YYSYMBOL_NUMBER = 71,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 72,                /* IDENTIFIER  */
  YYSYMBOL_CLASS_IDENTIFIER = 73,          /* CLASS_IDENTIFIER  */
  YYSYMBOL_YYACCEPT = 74,                  /* $accept  */
  YYSYMBOL_PROGRAM = 75,                   /* PROGRAM  */
  YYSYMBOL_STATEMENTS = 76,                /* STATEMENTS  */
  YYSYMBOL_STATEMENT = 77,                 /* STATEMENT  */
  YYSYMBOL_STATEMENT_IF_ELSE = 78,         /* STATEMENT_IF_ELSE  */
  YYSYMBOL_ELSE_CLAUSE = 79,               /* ELSE_CLAUSE  */
  YYSYMBOL_STATEMENT_WHILE = 80,           /* STATEMENT_WHILE  */
  YYSYMBOL_STATEMENT_BREAK = 81,           /* STATEMENT_BREAK  */
  YYSYMBOL_STATEMENT_ASSIGN = 82,          /* STATEMENT_ASSIGN  */
  YYSYMBOL_STATEMENT_SWITCH = 83,          /* STATEMENT_SWITCH  */
  YYSYMBOL_SWITCH_BODY = 84,               /* SWITCH_BODY  */
  YYSYMBOL_SWITCH_CASE_BODY = 85,          /* SWITCH_CASE_BODY  */
  YYSYMBOL_DEFAULT_BODY = 86,              /* DEFAULT_BODY  */
  YYSYMBOL_STATEMENT_RETURN = 87,          /* STATEMENT_RETURN  */
  YYSYMBOL_STATEMENT_CLASS = 88,           /* STATEMENT_CLASS  */
  YYSYMBOL_CREATE_CLASS_OBJECT = 89,       /* CREATE_CLASS_OBJECT  */
  YYSYMBOL_STATEMENT_DO_WHILE = 90,        /* STATEMENT_DO_WHILE  */
  YYSYMBOL_ACCESS_TO_CLASS_MEMBERS = 91,   /* ACCESS_TO_CLASS_MEMBERS  */
  YYSYMBOL_STATEMENT_FOR = 92,             /* STATEMENT_FOR  */
  YYSYMBOL_COMMENTS = 93,                  /* COMMENTS  */
  YYSYMBOL_STATEMENT_PRINT = 94,           /* STATEMENT_PRINT  */
  YYSYMBOL_PRINT_OPTIONAL_VAR = 95,        /* PRINT_OPTIONAL_VAR  */
  YYSYMBOL_VARIABLE_DECLARATION = 96,      /* VARIABLE_DECLARATION  */
  YYSYMBOL_METHOD_DECLARATION = 97,        /* METHOD_DECLARATION  */
  YYSYMBOL_ACCESS_MODIFIER = 98,           /* ACCESS_MODIFIER  */
  YYSYMBOL_VARIABLE_TYPE = 99,             /* VARIABLE_TYPE  */
  YYSYMBOL_PARAMETER_LIST = 100,           /* PARAMETER_LIST  */
  YYSYMBOL_CONDITION = 101,                /* CONDITION  */
  YYSYMBOL_COMPARISON = 102,               /* COMPARISON  */
  YYSYMBOL_EXPRESSION = 103,               /* EXPRESSION  */
  YYSYMBOL_BOOLEAN = 104,                  /* BOOLEAN  */
  YYSYMBOL_STATEMENT_NEW = 105,            /* STATEMENT_NEW  */
  YYSYMBOL_VALUE = 106,                    /* VALUE  */
  YYSYMBOL_OPERATION = 107,                /* OPERATION  */
  YYSYMBOL_OPERATION_CONTINUE = 108,       /* OPERATION_CONTINUE  */
  YYSYMBOL_ADDITION = 109,                 /* ADDITION  */
  YYSYMBOL_MULTIPLICATION = 110,           /* MULTIPLICATION  */
  YYSYMBOL_SUBTRACTION = 111,              /* SUBTRACTION  */
  YYSYMBOL_DIVISION = 112                  /* DIVISION  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  41
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  74
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  213

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   328


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
      65,    66,    67,    68,    69,    70,    71,    72,    73
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    72,    73,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    93,
      96,    97,    98,   101,   104,   107,   108,   111,   115,   118,
     119,   123,   124,   126,   129,   132,   135,   138,   141,   144,
     145,   148,   149,   152,   153,   156,   157,   160,   161,   164,
     165,   168,   169,   170,   171,   172,   176,   177,   178,   181,
     182,   183,   186,   187,   188,   189,   190,   191,   194,   195,
     196,   197,   198,   201,   202,   205,   206,   209,   210,   213,
     214,   215,   216,   219,   220,   221,   222,   223,   226,   229,
     232,   236
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
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_IF",
  "TOKEN_ELSE", "TOKEN_ELSE_IF", "TOKEN_WHILE", "TOKEN_DO", "TOKEN_FOR",
  "TOKEN_SWITCH", "TOKEN_CASE", "TOKEN_DEFAULT", "TOKEN_BREAK",
  "TOKEN_RETURN", "TOKEN_CLASS", "TOKEN_PUBLIC", "TOKEN_PRIVATE",
  "TOKEN_INT", "TOKEN_CHAR", "TOKEN_DOUBLE", "TOKEN_BOOLEAN",
  "TOKEN_STRING", "TOKEN_TRUE", "TOKEN_FALSE", "TOKEN_NEW",
  "TOKEN_OUT_PRINT", "TOKEN_SEMICOLON", "TOKEN_LBRACE", "TOKEN_RBRACE",
  "TOKEN_LPAREN", "TOKEN_RPAREN", "TOKEN_LBRACKET", "TOKEN_RBRACKET",
  "TOKEN_ASSIGN", "TOKEN_COMMA", "TOKEN_PLUS", "TOKEN_MINUS", "TOKEN_MULT",
  "TOKEN_DIV", "TOKEN_LESS_THAN", "TOKEN_GREATER_THAN", "TOKEN_EQUAL",
  "TOKEN_NOT_EQUAL", "TOKEN_LESS_THAN_EQUAL", "TOKEN_GREATER_THAN_EQUAL",
  "TOKEN_AND", "TOKEN_OR", "TOKEN_MODULO", "TOKEN_HASH", "TOKEN_AT",
  "TOKEN_CARET", "TOKEN_QUESTION_MARK", "TOKEN_SINGLE_QUOTE",
  "TOKEN_DOUBLE_QUOTE", "TOKEN_UNDERSCORE", "TOKEN_DOT",
  "TOKEN_EXCLAMATION_POINT", "TOKEN_PIPE", "STRING_LITERAL",
  "TOKEN_ONE_LINE_COMMENT", "TOKEN_MULTIPLE_LINE_COMMENTS", "TOKEN_ADD",
  "LOWER_THAN_DEFAULT", "TOKEN_START", "TOKEN_END", "TOKEN_COLON",
  "TOKEN_VOID", "TOKEN_SUB", "TOKEN_MUL", "UMINUS", "LOWER_THAN_CASE",
  "NUMBER", "IDENTIFIER", "CLASS_IDENTIFIER", "$accept", "PROGRAM",
  "STATEMENTS", "STATEMENT", "STATEMENT_IF_ELSE", "ELSE_CLAUSE",
  "STATEMENT_WHILE", "STATEMENT_BREAK", "STATEMENT_ASSIGN",
  "STATEMENT_SWITCH", "SWITCH_BODY", "SWITCH_CASE_BODY", "DEFAULT_BODY",
  "STATEMENT_RETURN", "STATEMENT_CLASS", "CREATE_CLASS_OBJECT",
  "STATEMENT_DO_WHILE", "ACCESS_TO_CLASS_MEMBERS", "STATEMENT_FOR",
  "COMMENTS", "STATEMENT_PRINT", "PRINT_OPTIONAL_VAR",
  "VARIABLE_DECLARATION", "METHOD_DECLARATION", "ACCESS_MODIFIER",
  "VARIABLE_TYPE", "PARAMETER_LIST", "CONDITION", "COMPARISON",
  "EXPRESSION", "BOOLEAN", "STATEMENT_NEW", "VALUE", "OPERATION",
  "OPERATION_CONTINUE", "ADDITION", "MULTIPLICATION", "SUBTRACTION",
  "DIVISION", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-129)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -45,    25,    70,    53,    71,    80,    73,    81,    86,    32,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,   105,  -129,  -129,
      -3,    66,    76,    25,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,   106,  -129,  -129,  -129,  -129,  -129,     5,
      69,  -129,    32,    32,    25,    72,    32,  -129,  -129,  -129,
     -10,  -129,  -129,  -129,   116,  -129,  -129,    23,  -129,  -129,
    -129,  -129,  -129,    85,    32,    77,   113,  -129,  -129,    32,
      78,    82,    83,   119,   117,    75,   120,   124,   127,   126,
    -129,  -129,  -129,   -36,   -36,   -36,   -36,    19,   131,  -129,
     134,   133,   135,   132,    -9,  -129,   136,  -129,  -129,  -129,
    -129,  -129,  -129,    32,   139,   154,    32,   157,    42,    42,
      42,    42,   142,    32,   140,  -129,    96,  -129,   112,    74,
    -129,    74,    25,    22,    25,   143,   145,    32,  -129,   162,
     146,   147,   148,   149,  -129,  -129,  -129,  -129,  -129,   150,
     153,   151,    49,    74,   102,   152,   155,   158,    32,    32,
     159,    32,    72,   118,   123,  -129,   -36,   -36,   -36,   -36,
    -129,  -129,   160,   161,    55,   121,   163,   164,   165,   190,
    -129,  -129,  -129,   166,   168,    25,    25,    23,   169,   170,
     171,   172,   177,  -129,   137,   178,    74,    25,    25,     2,
    -129,  -129,   179,   157,  -129,  -129,  -129,  -129,  -129,  -129,
     176,  -129,   167,   180,    25,  -129,   182,  -129,  -129,  -129,
     183,  -129,  -129
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    55,     0,    39,    40,
       0,     0,     0,     3,     7,     8,    17,    13,    11,    12,
      14,    15,     9,     0,    10,    18,    16,     6,     5,     0,
       0,     1,     0,     0,     0,     0,     0,    24,    73,    74,
       0,    72,    77,    78,     0,    71,    70,    68,    69,    79,
      80,    81,    82,     0,     0,     0,     0,     2,     4,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,    75,    33,     0,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,     0,    46,     0,    62,    63,    66,
      67,    64,    65,     0,     0,     0,     0,    30,    83,    83,
      83,    83,     0,     0,     0,    25,     0,    26,     0,    58,
      45,    58,     0,    59,     0,     0,     0,     0,    27,    32,
       0,     0,     0,     0,    88,    90,    89,    91,    41,    43,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
      44,    42,     0,     0,     0,     0,    57,     0,     0,    22,
      60,    61,    23,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,    58,     0,     0,     0,
      19,    36,     0,    30,    31,    84,    85,    86,    87,    35,
       0,    56,     0,     0,     0,    21,     0,    29,    48,    47,
       0,    38,    20
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,   -23,  -128,    18,  -129,  -129,  -129,   -39,  -129,
    -129,    20,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,    79,    94,    84,   -91,   -38,  -117,   -40,  -129,    -7,
    -129,  -129,   -70,   -34,    26,  -129,  -129,  -129,  -129
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    22,    23,    24,   190,    25,    26,    27,    28,
     128,   129,   155,    29,    30,    31,    32,    33,    34,    35,
      36,   114,    37,    38,    39,    40,   145,    74,   103,    75,
      55,    56,    57,    58,   134,    59,    60,    61,    62
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    72,    54,    76,   146,     3,    78,    12,    13,    14,
      15,    16,    81,   108,   109,   110,   111,   120,     1,    70,
     121,    77,    12,    13,    14,    15,    16,   143,     3,   204,
      64,     4,     5,     6,     7,    52,    53,     8,     9,    79,
      10,    11,    12,    13,    14,    15,    16,   193,   194,   112,
      17,   164,    65,   113,    48,    49,    50,    88,    83,    84,
      85,    86,    91,    80,    10,    11,   126,   148,   149,   201,
      41,    71,    12,    13,    14,    15,    16,   130,   131,   132,
     133,   144,    42,   144,    18,    19,   177,   177,   177,   177,
      51,    12,    13,    14,    15,    16,   123,    20,    21,   147,
      43,   150,    45,    52,    53,   165,   139,    44,   170,   171,
      46,   173,    47,   174,    97,    98,    99,   100,   101,   102,
     153,    71,   178,   179,   180,   181,   184,    10,    11,    12,
      13,    14,    15,    16,    63,   135,   136,   137,    66,    69,
      67,    73,    82,    87,    20,    95,    90,    96,   144,    89,
     104,    92,   105,   106,    93,    94,   107,   115,   116,   117,
     125,   119,   118,   122,   202,   203,   124,   127,   138,   141,
     140,   152,   151,   154,   166,   156,   157,   158,   159,   161,
     162,   210,   167,   175,   113,   168,   169,   172,   176,   183,
     182,   187,   188,   185,   189,   208,   191,   186,   192,   195,
     196,   197,   198,   199,   120,   121,   206,   205,   209,   200,
     211,   212,   142,   207,     0,     0,     0,     0,   160,     0,
       0,     0,     0,     0,     0,     0,   163
};

static const yytype_int16 yycheck[] =
{
      23,    39,     9,    43,   121,     3,    45,    17,    18,    19,
      20,    21,    50,    83,    84,    85,    86,    26,    63,    14,
      29,    44,    17,    18,    19,    20,    21,   118,     3,    27,
      33,     6,     7,     8,     9,    71,    72,    12,    13,    46,
      15,    16,    17,    18,    19,    20,    21,   175,   176,    30,
      25,   142,    55,    34,    22,    23,    24,    64,    35,    36,
      37,    38,    69,    73,    15,    16,   106,    45,    46,   186,
       0,    66,    17,    18,    19,    20,    21,    35,    36,    37,
      38,   119,    29,   121,    59,    60,   156,   157,   158,   159,
      58,    17,    18,    19,    20,    21,   103,    72,    73,   122,
      29,   124,    29,    71,    72,   143,   113,    27,   148,   149,
      29,   151,    26,   152,    39,    40,    41,    42,    43,    44,
     127,    66,   156,   157,   158,   159,   164,    15,    16,    17,
      18,    19,    20,    21,    29,   109,   110,   111,    72,    33,
      64,    72,    26,    58,    72,    26,    33,    30,   186,    72,
      30,    73,    28,    26,    72,    72,    30,    26,    24,    26,
       6,    29,    27,    27,   187,   188,    27,    10,    26,    73,
      30,    26,    29,    11,    72,    29,    29,    29,    29,    26,
      29,   204,    30,    65,    34,    30,    28,    28,    65,    28,
      30,    27,    27,    72,     4,    28,    30,    34,    30,    30,
      30,    30,    30,    26,    26,    29,    27,   189,    28,    72,
      28,    28,   118,   193,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   142
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    63,    75,     3,     6,     7,     8,     9,    12,    13,
      15,    16,    17,    18,    19,    20,    21,    25,    59,    60,
      72,    73,    76,    77,    78,    80,    81,    82,    83,    87,
      88,    89,    90,    91,    92,    93,    94,    96,    97,    98,
      99,     0,    29,    29,    27,    29,    29,    26,    22,    23,
      24,    58,    71,    72,   103,   104,   105,   106,   107,   109,
     110,   111,   112,    29,    33,    55,    72,    64,    76,    33,
      14,    66,    99,    72,   101,   103,   101,    76,    82,   103,
      73,    99,    26,    35,    36,    37,    38,    58,   103,    72,
      33,   103,    73,    72,    72,    26,    30,    39,    40,    41,
      42,    43,    44,   102,    30,    28,    26,    30,   106,   106,
     106,   106,    30,    34,    95,    26,    24,    26,    27,    29,
      26,    29,    27,   103,    27,     6,   101,    10,    84,    85,
      35,    36,    37,    38,   108,   108,   108,   108,    26,   103,
      30,    73,    96,    98,    99,   100,   100,    76,    45,    46,
      76,    29,    26,   103,    11,    86,    29,    29,    29,    29,
      95,    26,    29,    97,    98,    99,    72,    30,    30,    28,
     101,   101,    28,   101,    82,    65,    65,   106,   107,   107,
     107,   107,    30,    28,    99,    72,    34,    27,    27,     4,
      79,    30,    30,    77,    77,    30,    30,    30,    30,    26,
      72,   100,    76,    76,    27,    78,    27,    85,    28,    28,
      76,    28,    28
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    74,    75,    76,    76,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    77,    77,    77,    77,    77,    78,
      79,    79,    79,    80,    81,    82,    82,    83,    84,    85,
      85,    86,    86,    87,    88,    89,    90,    91,    92,    93,
      93,    94,    94,    95,    95,    96,    96,    97,    97,    98,
      98,    99,    99,    99,    99,    99,   100,   100,   100,   101,
     101,   101,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   103,   103,   104,   104,   105,   105,   106,   106,   107,
     107,   107,   107,   108,   108,   108,   108,   108,   109,   110,
     111,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     8,
       4,     2,     0,     7,     2,     4,     4,     5,     2,     5,
       0,     3,     0,     3,     7,     8,     8,     3,    10,     1,
       1,     5,     6,     2,     3,     4,     3,     9,     9,     1,
       1,     1,     1,     1,     1,     1,     4,     2,     0,     3,
       5,     5,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     0,     4,     4,     4,     4,     4,     4,
       4,     4
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
  case 2: /* PROGRAM: TOKEN_START STATEMENTS TOKEN_END  */
#line 70 "bison_Program.y"
                                          { printf("Program parsed successfully.\n"); }
#line 1462 "bison_Program.tab.c"
    break;

  case 3: /* STATEMENTS: STATEMENT  */
#line 72 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1468 "bison_Program.tab.c"
    break;

  case 4: /* STATEMENTS: STATEMENT STATEMENTS  */
#line 73 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1474 "bison_Program.tab.c"
    break;

  case 5: /* STATEMENT: METHOD_DECLARATION  */
#line 75 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1480 "bison_Program.tab.c"
    break;

  case 6: /* STATEMENT: VARIABLE_DECLARATION  */
#line 76 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1486 "bison_Program.tab.c"
    break;

  case 7: /* STATEMENT: STATEMENT_IF_ELSE  */
#line 77 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1492 "bison_Program.tab.c"
    break;

  case 8: /* STATEMENT: STATEMENT_WHILE  */
#line 78 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1498 "bison_Program.tab.c"
    break;

  case 9: /* STATEMENT: STATEMENT_DO_WHILE  */
#line 79 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1504 "bison_Program.tab.c"
    break;

  case 10: /* STATEMENT: STATEMENT_FOR  */
#line 80 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1510 "bison_Program.tab.c"
    break;

  case 11: /* STATEMENT: STATEMENT_SWITCH  */
#line 81 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1516 "bison_Program.tab.c"
    break;

  case 12: /* STATEMENT: STATEMENT_RETURN  */
#line 82 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1522 "bison_Program.tab.c"
    break;

  case 13: /* STATEMENT: STATEMENT_ASSIGN  */
#line 83 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1528 "bison_Program.tab.c"
    break;

  case 14: /* STATEMENT: STATEMENT_CLASS  */
#line 84 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1534 "bison_Program.tab.c"
    break;

  case 15: /* STATEMENT: CREATE_CLASS_OBJECT  */
#line 85 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1540 "bison_Program.tab.c"
    break;

  case 16: /* STATEMENT: STATEMENT_PRINT  */
#line 86 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1546 "bison_Program.tab.c"
    break;

  case 17: /* STATEMENT: STATEMENT_BREAK  */
#line 87 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1552 "bison_Program.tab.c"
    break;

  case 18: /* STATEMENT: COMMENTS  */
#line 88 "bison_Program.y"
                                       { printf("Comment\n"); }
#line 1558 "bison_Program.tab.c"
    break;

  case 19: /* STATEMENT_IF_ELSE: TOKEN_IF TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE ELSE_CLAUSE  */
#line 93 "bison_Program.y"
                                                                                                                 { printf("IF Statement\n"); }
#line 1564 "bison_Program.tab.c"
    break;

  case 22: /* ELSE_CLAUSE: %empty  */
#line 98 "bison_Program.y"
                                      {}
#line 1570 "bison_Program.tab.c"
    break;

  case 23: /* STATEMENT_WHILE: TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 101 "bison_Program.y"
                                                                                                      { printf("WHILE Statement\n"); }
#line 1576 "bison_Program.tab.c"
    break;

  case 24: /* STATEMENT_BREAK: TOKEN_BREAK TOKEN_SEMICOLON  */
#line 104 "bison_Program.y"
                                             { printf("BREAK Statement\n"); }
#line 1582 "bison_Program.tab.c"
    break;

  case 25: /* STATEMENT_ASSIGN: IDENTIFIER TOKEN_ASSIGN EXPRESSION TOKEN_SEMICOLON  */
#line 107 "bison_Program.y"
                                                                     { printf("Assignment Statement\n"); }
#line 1588 "bison_Program.tab.c"
    break;

  case 27: /* STATEMENT_SWITCH: TOKEN_SWITCH TOKEN_LPAREN EXPRESSION TOKEN_RPAREN SWITCH_BODY  */
#line 111 "bison_Program.y"
                                                                                { printf("SWITCH Statement\n"); }
#line 1594 "bison_Program.tab.c"
    break;

  case 28: /* SWITCH_BODY: SWITCH_CASE_BODY DEFAULT_BODY  */
#line 115 "bison_Program.y"
                                           { printf("DEFAULT Statement\n"); }
#line 1600 "bison_Program.tab.c"
    break;

  case 30: /* SWITCH_CASE_BODY: %empty  */
#line 119 "bison_Program.y"
                         {}
#line 1606 "bison_Program.tab.c"
    break;

  case 32: /* DEFAULT_BODY: %empty  */
#line 124 "bison_Program.y"
                     {}
#line 1612 "bison_Program.tab.c"
    break;

  case 33: /* STATEMENT_RETURN: TOKEN_RETURN EXPRESSION TOKEN_SEMICOLON  */
#line 126 "bison_Program.y"
                                                          { printf("RETURN Statement\n"); }
#line 1618 "bison_Program.tab.c"
    break;

  case 34: /* STATEMENT_CLASS: ACCESS_MODIFIER TOKEN_CLASS CLASS_IDENTIFIER TOKEN_LBRACE VARIABLE_DECLARATION METHOD_DECLARATION TOKEN_RBRACE  */
#line 129 "bison_Program.y"
                                                                                                                               { printf("CLASS Statement\n"); }
#line 1624 "bison_Program.tab.c"
    break;

  case 35: /* CREATE_CLASS_OBJECT: CLASS_IDENTIFIER IDENTIFIER TOKEN_ASSIGN TOKEN_NEW CLASS_IDENTIFIER TOKEN_LPAREN TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 132 "bison_Program.y"
                                                                                                                                   { printf("Create Class Object Statement\n"); }
#line 1630 "bison_Program.tab.c"
    break;

  case 36: /* STATEMENT_DO_WHILE: TOKEN_DO TOKEN_LBRACE STATEMENTS TOKEN_RBRACE TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN  */
#line 135 "bison_Program.y"
                                                                                                                  { printf("DO WHILE Statement\n"); }
#line 1636 "bison_Program.tab.c"
    break;

  case 37: /* ACCESS_TO_CLASS_MEMBERS: IDENTIFIER TOKEN_DOT IDENTIFIER  */
#line 138 "bison_Program.y"
                                                         { printf("Access to Class Members Statement\n"); }
#line 1642 "bison_Program.tab.c"
    break;

  case 38: /* STATEMENT_FOR: TOKEN_FOR TOKEN_LPAREN STATEMENT_ASSIGN TOKEN_SEMICOLON CONDITION TOKEN_SEMICOLON STATEMENT_ASSIGN TOKEN_RPAREN TOKEN_LBRACE TOKEN_RBRACE  */
#line 141 "bison_Program.y"
                                                                                                                                                         { printf("FOR Statement\n"); }
#line 1648 "bison_Program.tab.c"
    break;

  case 39: /* COMMENTS: TOKEN_ONE_LINE_COMMENT  */
#line 144 "bison_Program.y"
                                  { printf("One Line Comment\n"); }
#line 1654 "bison_Program.tab.c"
    break;

  case 40: /* COMMENTS: TOKEN_MULTIPLE_LINE_COMMENTS  */
#line 145 "bison_Program.y"
                                        { printf("Multiple Line Comment\n"); }
#line 1660 "bison_Program.tab.c"
    break;

  case 41: /* STATEMENT_PRINT: TOKEN_OUT_PRINT TOKEN_LPAREN STRING_LITERAL TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 148 "bison_Program.y"
                                                                                          { printf("Print Statement\n"); printf("%s\n", (yyvsp[-2].strvalue)); }
#line 1666 "bison_Program.tab.c"
    break;

  case 42: /* STATEMENT_PRINT: TOKEN_OUT_PRINT TOKEN_LPAREN STRING_LITERAL PRINT_OPTIONAL_VAR TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 149 "bison_Program.y"
                                                                                                             { printf("Print Statement\n"); printf("%s\n", (yyvsp[-3].strvalue), (yyvsp[-1].strvalue)); }
#line 1672 "bison_Program.tab.c"
    break;

  case 45: /* VARIABLE_DECLARATION: ACCESS_MODIFIER VARIABLE_TYPE IDENTIFIER TOKEN_SEMICOLON  */
#line 156 "bison_Program.y"
                                                                               { printf("Variable Declaration\n"); }
#line 1678 "bison_Program.tab.c"
    break;

  case 46: /* VARIABLE_DECLARATION: VARIABLE_TYPE IDENTIFIER TOKEN_SEMICOLON  */
#line 157 "bison_Program.y"
                                                               { printf("Variable Declaration\n"); }
#line 1684 "bison_Program.tab.c"
    break;

  case 47: /* METHOD_DECLARATION: ACCESS_MODIFIER VARIABLE_TYPE IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 160 "bison_Program.y"
                                                                                                                                           { printf("Method Declaration\n"); }
#line 1690 "bison_Program.tab.c"
    break;

  case 48: /* METHOD_DECLARATION: ACCESS_MODIFIER TOKEN_VOID IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 161 "bison_Program.y"
                                                                                                                                        { printf("Method Declaration\n"); }
#line 1696 "bison_Program.tab.c"
    break;

  case 49: /* ACCESS_MODIFIER: TOKEN_PUBLIC  */
#line 164 "bison_Program.y"
                              { printf("Public\n"); }
#line 1702 "bison_Program.tab.c"
    break;

  case 50: /* ACCESS_MODIFIER: TOKEN_PRIVATE  */
#line 165 "bison_Program.y"
                               { printf("Private\n"); }
#line 1708 "bison_Program.tab.c"
    break;

  case 51: /* VARIABLE_TYPE: TOKEN_INT  */
#line 168 "bison_Program.y"
                         { printf("Int\n"); }
#line 1714 "bison_Program.tab.c"
    break;

  case 52: /* VARIABLE_TYPE: TOKEN_CHAR  */
#line 169 "bison_Program.y"
                          { printf("Char\n"); }
#line 1720 "bison_Program.tab.c"
    break;

  case 53: /* VARIABLE_TYPE: TOKEN_DOUBLE  */
#line 170 "bison_Program.y"
                            { printf("Double\n"); }
#line 1726 "bison_Program.tab.c"
    break;

  case 54: /* VARIABLE_TYPE: TOKEN_BOOLEAN  */
#line 171 "bison_Program.y"
                             { printf("Boolean\n"); }
#line 1732 "bison_Program.tab.c"
    break;

  case 55: /* VARIABLE_TYPE: TOKEN_STRING  */
#line 172 "bison_Program.y"
                            { printf("String\n"); }
#line 1738 "bison_Program.tab.c"
    break;

  case 56: /* PARAMETER_LIST: VARIABLE_TYPE IDENTIFIER TOKEN_COMMA PARAMETER_LIST  */
#line 176 "bison_Program.y"
                                                                     { printf("Parameter List\n"); }
#line 1744 "bison_Program.tab.c"
    break;

  case 57: /* PARAMETER_LIST: VARIABLE_TYPE IDENTIFIER  */
#line 177 "bison_Program.y"
                                          { printf("Parameter List\n"); }
#line 1750 "bison_Program.tab.c"
    break;

  case 58: /* PARAMETER_LIST: %empty  */
#line 178 "bison_Program.y"
                        {}
#line 1756 "bison_Program.tab.c"
    break;

  case 59: /* CONDITION: EXPRESSION COMPARISON EXPRESSION  */
#line 181 "bison_Program.y"
                                             { printf("Condition\n"); }
#line 1762 "bison_Program.tab.c"
    break;

  case 60: /* CONDITION: EXPRESSION COMPARISON EXPRESSION TOKEN_AND CONDITION  */
#line 182 "bison_Program.y"
                                                                 { printf("Condition\n"); }
#line 1768 "bison_Program.tab.c"
    break;

  case 61: /* CONDITION: EXPRESSION COMPARISON EXPRESSION TOKEN_OR CONDITION  */
#line 183 "bison_Program.y"
                                                                { printf("Condition\n"); }
#line 1774 "bison_Program.tab.c"
    break;

  case 62: /* COMPARISON: TOKEN_LESS_THAN  */
#line 186 "bison_Program.y"
                             { printf("Comparison\n"); }
#line 1780 "bison_Program.tab.c"
    break;

  case 63: /* COMPARISON: TOKEN_GREATER_THAN  */
#line 187 "bison_Program.y"
                                { printf("Comparison\n"); }
#line 1786 "bison_Program.tab.c"
    break;

  case 64: /* COMPARISON: TOKEN_LESS_THAN_EQUAL  */
#line 188 "bison_Program.y"
                                   { printf("Comparison\n"); }
#line 1792 "bison_Program.tab.c"
    break;

  case 65: /* COMPARISON: TOKEN_GREATER_THAN_EQUAL  */
#line 189 "bison_Program.y"
                                      { printf("Comparison\n"); }
#line 1798 "bison_Program.tab.c"
    break;

  case 66: /* COMPARISON: TOKEN_EQUAL  */
#line 190 "bison_Program.y"
                         { printf("Comparison\n"); }
#line 1804 "bison_Program.tab.c"
    break;

  case 67: /* COMPARISON: TOKEN_NOT_EQUAL  */
#line 191 "bison_Program.y"
                             { printf("Comparison\n"); }
#line 1810 "bison_Program.tab.c"
    break;

  case 68: /* EXPRESSION: VALUE  */
#line 194 "bison_Program.y"
                   { printf("Expression\n"); }
#line 1816 "bison_Program.tab.c"
    break;

  case 69: /* EXPRESSION: OPERATION  */
#line 195 "bison_Program.y"
                       { printf("Expression\n"); }
#line 1822 "bison_Program.tab.c"
    break;

  case 70: /* EXPRESSION: STATEMENT_NEW  */
#line 196 "bison_Program.y"
                           { printf("Expression\n"); }
#line 1828 "bison_Program.tab.c"
    break;

  case 71: /* EXPRESSION: BOOLEAN  */
#line 197 "bison_Program.y"
                     { printf("Expression\n"); }
#line 1834 "bison_Program.tab.c"
    break;

  case 73: /* BOOLEAN: TOKEN_TRUE  */
#line 201 "bison_Program.y"
                     { printf("True\n"); }
#line 1840 "bison_Program.tab.c"
    break;

  case 74: /* BOOLEAN: TOKEN_FALSE  */
#line 202 "bison_Program.y"
                      { printf("False\n"); }
#line 1846 "bison_Program.tab.c"
    break;

  case 75: /* STATEMENT_NEW: TOKEN_NEW VARIABLE_TYPE  */
#line 205 "bison_Program.y"
                                        { printf("New Statement\n"); }
#line 1852 "bison_Program.tab.c"
    break;

  case 76: /* STATEMENT_NEW: TOKEN_NEW CLASS_IDENTIFIER  */
#line 206 "bison_Program.y"
                                           { printf("New Statement\n"); }
#line 1858 "bison_Program.tab.c"
    break;

  case 77: /* VALUE: NUMBER  */
#line 209 "bison_Program.y"
               { printf("Value\n"); }
#line 1864 "bison_Program.tab.c"
    break;

  case 78: /* VALUE: IDENTIFIER  */
#line 210 "bison_Program.y"
                   { printf("Value\n"); }
#line 1870 "bison_Program.tab.c"
    break;

  case 79: /* OPERATION: ADDITION  */
#line 213 "bison_Program.y"
                     { printf("Operation\n"); }
#line 1876 "bison_Program.tab.c"
    break;

  case 80: /* OPERATION: MULTIPLICATION  */
#line 214 "bison_Program.y"
                           { printf("Operation\n"); }
#line 1882 "bison_Program.tab.c"
    break;

  case 81: /* OPERATION: SUBTRACTION  */
#line 215 "bison_Program.y"
                        { printf("Operation\n"); }
#line 1888 "bison_Program.tab.c"
    break;

  case 82: /* OPERATION: DIVISION  */
#line 216 "bison_Program.y"
                     { printf("Operation\n"); }
#line 1894 "bison_Program.tab.c"
    break;

  case 83: /* OPERATION_CONTINUE: %empty  */
#line 219 "bison_Program.y"
                             {}
#line 1900 "bison_Program.tab.c"
    break;

  case 84: /* OPERATION_CONTINUE: TOKEN_PLUS TOKEN_LPAREN OPERATION TOKEN_RPAREN  */
#line 220 "bison_Program.y"
                                                                    { printf("Operation Continue PLUS\n"); }
#line 1906 "bison_Program.tab.c"
    break;

  case 85: /* OPERATION_CONTINUE: TOKEN_MINUS TOKEN_LPAREN OPERATION TOKEN_RPAREN  */
#line 221 "bison_Program.y"
                                                                     { printf("Operation Continue MINUS\n"); }
#line 1912 "bison_Program.tab.c"
    break;

  case 86: /* OPERATION_CONTINUE: TOKEN_MULT TOKEN_LPAREN OPERATION TOKEN_RPAREN  */
#line 222 "bison_Program.y"
                                                                    { printf("Operation Continue MULT\n"); }
#line 1918 "bison_Program.tab.c"
    break;

  case 87: /* OPERATION_CONTINUE: TOKEN_DIV TOKEN_LPAREN OPERATION TOKEN_RPAREN  */
#line 223 "bison_Program.y"
                                                                   { printf("Operation Continue DIV\n"); }
#line 1924 "bison_Program.tab.c"
    break;

  case 88: /* ADDITION: VALUE TOKEN_PLUS VALUE OPERATION_CONTINUE  */
#line 226 "bison_Program.y"
                                                    { printf("Addition\n"); }
#line 1930 "bison_Program.tab.c"
    break;

  case 89: /* MULTIPLICATION: VALUE TOKEN_MULT VALUE OPERATION_CONTINUE  */
#line 229 "bison_Program.y"
                                                           { printf("Multiplication\n"); }
#line 1936 "bison_Program.tab.c"
    break;

  case 90: /* SUBTRACTION: VALUE TOKEN_MINUS VALUE OPERATION_CONTINUE  */
#line 232 "bison_Program.y"
                                                         { printf("Subtraction\n"); }
#line 1942 "bison_Program.tab.c"
    break;

  case 91: /* DIVISION: VALUE TOKEN_DIV VALUE OPERATION_CONTINUE  */
#line 236 "bison_Program.y"
                                                    { printf("Division\n"); }
#line 1948 "bison_Program.tab.c"
    break;


#line 1952 "bison_Program.tab.c"

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

#line 247 "bison_Program.y"

 /* CODE */

void yyerror(char *s)
{
 fprintf(stderr, "%s\n",s)
}



int main(int argc, char** argv ){

    ++argv; --argc;
    if (argc > 0)
      yyin = fopen(argv[0], "r");
    else
      yyin = stdin;
    yyout = fopen("output", "w");
    yyparse();
    return 0;

}
 



