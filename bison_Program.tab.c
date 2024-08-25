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

/* DEFINITIONS */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

extern FILE *yyin;
extern FILE *yyout;

extern int yylex();
extern int yywrap;

extern int yylineno;
extern int line_in;

extern char string_buffer[];
extern char* string_buffer_pointer;

void yyerror(char * s);

#define YYDEBUG 1
int yydebug;
int class_found = 0;

#line 97 "bison_Program.tab.c"

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
    TOKEN_DOUBLE_QUOTE = 307,      /* TOKEN_DOUBLE_QUOTE  */
    TOKEN_UNDERSCORE = 308,        /* TOKEN_UNDERSCORE  */
    TOKEN_DOT = 309,               /* TOKEN_DOT  */
    TOKEN_EXCLAMATION_POINT = 310, /* TOKEN_EXCLAMATION_POINT  */
    TOKEN_PIPE = 311,              /* TOKEN_PIPE  */
    STRING_LITERAL = 312,          /* STRING_LITERAL  */
    TOKEN_ADD = 313,               /* TOKEN_ADD  */
    LOWER_THAN_DEFAULT = 314,      /* LOWER_THAN_DEFAULT  */
    TOKEN_COLON = 315,             /* TOKEN_COLON  */
    TOKEN_VOID = 316,              /* TOKEN_VOID  */
    IGNORE_WHITESPACE_NEWLINE = 317, /* IGNORE_WHITESPACE_NEWLINE  */
    CHARACTER = 318,               /* CHARACTER  */
    TOKEN_SUB = 319,               /* TOKEN_SUB  */
    TOKEN_MUL = 320,               /* TOKEN_MUL  */
    UMINUS = 321,                  /* UMINUS  */
    LOWER_THAN_CASE = 322,         /* LOWER_THAN_CASE  */
    DOUBLE_NUMBER = 323,           /* DOUBLE_NUMBER  */
    NUMBER = 324,                  /* NUMBER  */
    IDENTIFIER = 325               /* IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "bison_Program.y"

    int intvalue;
    double dvalue;
    char* strvalue;
    char charvalue;
    

#line 222 "bison_Program.tab.c"

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
  YYSYMBOL_TOKEN_DOUBLE_QUOTE = 52,        /* TOKEN_DOUBLE_QUOTE  */
  YYSYMBOL_TOKEN_UNDERSCORE = 53,          /* TOKEN_UNDERSCORE  */
  YYSYMBOL_TOKEN_DOT = 54,                 /* TOKEN_DOT  */
  YYSYMBOL_TOKEN_EXCLAMATION_POINT = 55,   /* TOKEN_EXCLAMATION_POINT  */
  YYSYMBOL_TOKEN_PIPE = 56,                /* TOKEN_PIPE  */
  YYSYMBOL_STRING_LITERAL = 57,            /* STRING_LITERAL  */
  YYSYMBOL_TOKEN_ADD = 58,                 /* TOKEN_ADD  */
  YYSYMBOL_LOWER_THAN_DEFAULT = 59,        /* LOWER_THAN_DEFAULT  */
  YYSYMBOL_TOKEN_COLON = 60,               /* TOKEN_COLON  */
  YYSYMBOL_TOKEN_VOID = 61,                /* TOKEN_VOID  */
  YYSYMBOL_IGNORE_WHITESPACE_NEWLINE = 62, /* IGNORE_WHITESPACE_NEWLINE  */
  YYSYMBOL_CHARACTER = 63,                 /* CHARACTER  */
  YYSYMBOL_TOKEN_SUB = 64,                 /* TOKEN_SUB  */
  YYSYMBOL_TOKEN_MUL = 65,                 /* TOKEN_MUL  */
  YYSYMBOL_UMINUS = 66,                    /* UMINUS  */
  YYSYMBOL_LOWER_THAN_CASE = 67,           /* LOWER_THAN_CASE  */
  YYSYMBOL_DOUBLE_NUMBER = 68,             /* DOUBLE_NUMBER  */
  YYSYMBOL_NUMBER = 69,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 70,                /* IDENTIFIER  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_PROGRAM = 72,                   /* PROGRAM  */
  YYSYMBOL_STATEMENTS = 73,                /* STATEMENTS  */
  YYSYMBOL_STATEMENT = 74,                 /* STATEMENT  */
  YYSYMBOL_STATEMENT_IF_ELSE = 75,         /* STATEMENT_IF_ELSE  */
  YYSYMBOL_ELSE_CLAUSE = 76,               /* ELSE_CLAUSE  */
  YYSYMBOL_STATEMENT_WHILE = 77,           /* STATEMENT_WHILE  */
  YYSYMBOL_STATEMENT_BREAK = 78,           /* STATEMENT_BREAK  */
  YYSYMBOL_STATEMENT_ASSIGN = 79,          /* STATEMENT_ASSIGN  */
  YYSYMBOL_STATEMENT_SWITCH = 80,          /* STATEMENT_SWITCH  */
  YYSYMBOL_SWITCH_BODY = 81,               /* SWITCH_BODY  */
  YYSYMBOL_SWITCH_CASE_BODY = 82,          /* SWITCH_CASE_BODY  */
  YYSYMBOL_DEFAULT_BODY = 83,              /* DEFAULT_BODY  */
  YYSYMBOL_STATEMENT_RETURN = 84,          /* STATEMENT_RETURN  */
  YYSYMBOL_STATEMENT_CLASS = 85,           /* STATEMENT_CLASS  */
  YYSYMBOL_CLASS_BODY = 86,                /* CLASS_BODY  */
  YYSYMBOL_CREATE_CLASS_OBJECT = 87,       /* CREATE_CLASS_OBJECT  */
  YYSYMBOL_STATEMENT_DO_WHILE = 88,        /* STATEMENT_DO_WHILE  */
  YYSYMBOL_ACCESS_TO_CLASS_MEMBERS = 89,   /* ACCESS_TO_CLASS_MEMBERS  */
  YYSYMBOL_STATEMENT_FOR = 90,             /* STATEMENT_FOR  */
  YYSYMBOL_STATEMENT_PRINT = 91,           /* STATEMENT_PRINT  */
  YYSYMBOL_PRINT_OPTIONAL_VAR = 92,        /* PRINT_OPTIONAL_VAR  */
  YYSYMBOL_VARIABLE_DECLARATION = 93,      /* VARIABLE_DECLARATION  */
  YYSYMBOL_VARIABLE_DECLARATION_BODY = 94, /* VARIABLE_DECLARATION_BODY  */
  YYSYMBOL_MORE_DECLARATIONS = 95,         /* MORE_DECLARATIONS  */
  YYSYMBOL_MORE_DECLARATIONS_ASSIGN = 96,  /* MORE_DECLARATIONS_ASSIGN  */
  YYSYMBOL_METHOD_DECLARATION = 97,        /* METHOD_DECLARATION  */
  YYSYMBOL_METHOD_CALL = 98,               /* METHOD_CALL  */
  YYSYMBOL_ACCESS_MODIFIER = 99,           /* ACCESS_MODIFIER  */
  YYSYMBOL_VARIABLE_TYPE = 100,            /* VARIABLE_TYPE  */
  YYSYMBOL_PARAMETER_LIST = 101,           /* PARAMETER_LIST  */
  YYSYMBOL_BOOLEAN = 102,                  /* BOOLEAN  */
  YYSYMBOL_CONDITION = 103,                /* CONDITION  */
  YYSYMBOL_COMPARISON = 104,               /* COMPARISON  */
  YYSYMBOL_EXPRESSION = 105,               /* EXPRESSION  */
  YYSYMBOL_STATEMENT_NEW = 106,            /* STATEMENT_NEW  */
  YYSYMBOL_VALUE = 107,                    /* VALUE  */
  YYSYMBOL_OPERATION = 108,                /* OPERATION  */
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
#define YYFINAL  47
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   232

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  207

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   325


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
      65,    66,    67,    68,    69,    70
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    90,    91,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   112,
     128,   133,   138,   144,   147,   150,   151,   154,   157,   160,
     161,   164,   165,   167,   170,   180,   181,   182,   183,   186,
     193,   198,   199,   202,   209,   212,   213,   218,   219,   222,
     223,   226,   227,   229,   230,   234,   235,   238,   241,   242,
     245,   246,   247,   248,   249,   252,   253,   254,   256,   257,
     259,   260,   278,   279,   280,   281,   282,   283,   284,   285,
     289,   290,   291,   297,   298,   305,   306,   307,   308,   309,
     310,   311,   314,   315,   316,   317,   321,   324,   326,   329
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
  "TOKEN_CARET", "TOKEN_QUESTION_MARK", "TOKEN_DOUBLE_QUOTE",
  "TOKEN_UNDERSCORE", "TOKEN_DOT", "TOKEN_EXCLAMATION_POINT", "TOKEN_PIPE",
  "STRING_LITERAL", "TOKEN_ADD", "LOWER_THAN_DEFAULT", "TOKEN_COLON",
  "TOKEN_VOID", "IGNORE_WHITESPACE_NEWLINE", "CHARACTER", "TOKEN_SUB",
  "TOKEN_MUL", "UMINUS", "LOWER_THAN_CASE", "DOUBLE_NUMBER", "NUMBER",
  "IDENTIFIER", "$accept", "PROGRAM", "STATEMENTS", "STATEMENT",
  "STATEMENT_IF_ELSE", "ELSE_CLAUSE", "STATEMENT_WHILE", "STATEMENT_BREAK",
  "STATEMENT_ASSIGN", "STATEMENT_SWITCH", "SWITCH_BODY",
  "SWITCH_CASE_BODY", "DEFAULT_BODY", "STATEMENT_RETURN",
  "STATEMENT_CLASS", "CLASS_BODY", "CREATE_CLASS_OBJECT",
  "STATEMENT_DO_WHILE", "ACCESS_TO_CLASS_MEMBERS", "STATEMENT_FOR",
  "STATEMENT_PRINT", "PRINT_OPTIONAL_VAR", "VARIABLE_DECLARATION",
  "VARIABLE_DECLARATION_BODY", "MORE_DECLARATIONS",
  "MORE_DECLARATIONS_ASSIGN", "METHOD_DECLARATION", "METHOD_CALL",
  "ACCESS_MODIFIER", "VARIABLE_TYPE", "PARAMETER_LIST", "BOOLEAN",
  "CONDITION", "COMPARISON", "EXPRESSION", "STATEMENT_NEW", "VALUE",
  "OPERATION", "ADDITION", "MULTIPLICATION", "SUBTRACTION", "DIVISION", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-149)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-71)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,   -10,    -3,     1,    27,    39,    45,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,    50,    34,    90,  -149,    32,  -149,
    -149,  -149,    75,  -149,  -149,  -149,  -149,    64,  -149,  -149,
    -149,  -149,  -149,  -149,    66,    35,    71,    71,    32,   135,
      71,  -149,    53,   159,    71,    43,    81,  -149,  -149,  -149,
      71,    46,    61,  -149,    63,   -17,    85,    64,  -149,  -149,
       4,     7,  -149,  -149,  -149,  -149,  -149,   -12,    93,   103,
    -149,   100,  -149,  -149,  -149,  -149,  -149,   127,    87,    71,
     159,  -149,   128,    86,    89,   131,  -149,   133,  -149,   139,
    -149,   137,   138,    78,    98,   143,   101,   146,   144,   148,
     100,   151,   155,  -149,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,    71,     7,     7,     7,     7,   156,   178,   160,   175,
      71,   157,   154,   163,  -149,   135,   159,   159,   158,  -149,
      49,    85,  -149,   161,  -149,  -149,    32,  -149,  -149,  -149,
    -149,  -149,    32,   164,   101,    71,  -149,   179,    86,   168,
     159,  -149,  -149,   167,   135,   135,   166,   169,  -149,  -149,
     171,   170,   172,    71,   173,   141,   142,  -149,  -149,  -149,
    -149,  -149,  -149,  -149,   177,   180,  -149,   201,  -149,   176,
     181,    32,    32,    32,    32,    51,  -149,   183,    32,   175,
    -149,   182,   198,    32,  -149,  -149,   184,  -149,  -149,    71,
     185,   186,  -149,   189,  -149,  -149,  -149
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,    58,    59,    60,
      61,    62,    63,    64,     0,     0,     0,     2,     3,     7,
       8,    16,     0,    11,    13,    14,     9,    18,    10,    15,
       6,    48,     5,    17,     0,     0,     0,     0,     3,     0,
       0,    24,     0,    67,     0,     0,     0,     1,     4,    12,
       0,     0,     0,    47,     0,    52,    54,     0,    68,    69,
       0,     0,    90,    89,    88,    85,    91,    87,     0,     0,
      82,    80,    81,    92,    93,    94,    95,     0,     0,     0,
       0,    87,     0,    46,     0,     0,    25,    41,    42,     0,
      26,     0,     0,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,    73,    76,    77,    74,    75,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,    66,     0,    39,    38,    67,    67,    52,    49,
       0,    54,    50,     0,    83,    86,     3,    71,    96,    98,
      97,    99,     3,     0,     0,     0,    27,    32,    46,     0,
      67,    57,    37,     0,    38,    38,     0,     0,    51,    53,
       0,     0,     0,     0,     0,     0,     0,    28,    45,    44,
      65,    34,    35,    36,     0,     0,    84,    22,    23,     0,
       0,     0,     0,     3,     3,     0,    19,     0,     3,    30,
      31,     0,     0,     3,    21,    40,     0,    29,    56,     0,
       0,     0,    43,     0,    55,    20,    33
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,   -18,  -148,    31,  -149,  -149,  -149,   -27,  -149,
    -149,    28,  -149,  -149,  -112,   -46,  -149,  -149,   -23,  -149,
    -149,    70,   -29,   -25,    91,    92,   -63,   187,   188,   -28,
     -61,   -34,   -33,  -149,   -39,   132,   -54,   165,  -149,  -149,
    -149,  -149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    16,    17,    18,    19,   186,    20,    21,    22,    23,
     146,   147,   167,   200,    24,   153,    25,    26,    27,    28,
      29,   121,    30,    31,    95,    97,    32,    33,    34,    35,
      85,    81,    68,   111,    69,    70,    71,    72,    73,    74,
      75,    76
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,    82,    67,    67,    77,    86,    54,   100,    56,    53,
      79,    90,    57,   152,   -70,    84,    44,    94,   -70,    36,
      78,     9,    10,    11,    12,    13,    37,    56,    38,    58,
      59,    57,    99,   189,   190,     1,    61,    45,     2,     3,
       4,     5,   152,   152,     6,    67,   118,     7,     8,     9,
      10,    11,    12,    13,     1,    53,    39,    14,   138,   139,
     140,   141,   155,    43,    62,   156,   157,    44,    40,   131,
      63,    41,   137,    57,    98,    64,    65,    66,   193,    42,
      51,   148,    44,     9,    10,    11,    12,    13,    45,   170,
      47,   155,   155,    58,    59,    60,   154,    50,    84,    84,
      61,    49,    15,    45,    46,    55,   165,   127,   172,   173,
      83,    44,    94,    87,    89,   117,    91,   164,   161,    96,
     120,    57,    84,   102,   162,   154,   154,    52,    62,    67,
     179,    92,    45,    93,    63,   112,   113,   114,   115,    64,
      65,    66,   103,   104,   105,   106,   107,   108,   109,   110,
       7,     8,     9,    10,    11,    12,    13,   116,   119,   122,
     203,   123,    43,    60,   125,   191,   192,   126,   128,   129,
     196,   130,   132,   133,   134,   201,     9,    10,    11,    12,
      13,   135,   136,   142,   143,   145,   144,   149,   150,   151,
     166,   160,    94,   163,   169,   171,   174,   176,   177,   175,
     178,   181,   182,   180,   183,   185,   187,   184,   188,   195,
     198,   199,   202,   204,   205,   206,   194,   197,   168,   158,
       0,   124,     0,   159,     0,     0,   101,    80,     0,     0,
       0,     0,    88
};

static const yytype_int16 yycheck[] =
{
      18,    40,    36,    37,    37,    44,    34,    61,    35,    34,
      39,    50,    35,   125,    26,    43,    33,    34,    30,    29,
      38,    17,    18,    19,    20,    21,    29,    54,    27,    22,
      23,    54,    60,   181,   182,     3,    29,    54,     6,     7,
       8,     9,   154,   155,    12,    79,    79,    15,    16,    17,
      18,    19,    20,    21,     3,    80,    29,    25,   112,   113,
     114,   115,   125,    29,    57,   126,   127,    33,    29,    96,
      63,    26,   111,    96,    70,    68,    69,    70,    27,    29,
      14,   120,    33,    17,    18,    19,    20,    21,    54,   150,
       0,   154,   155,    22,    23,    24,   125,    33,   126,   127,
      29,    26,    70,    54,    70,    70,   145,    29,   154,   155,
      57,    33,    34,    70,    33,    28,    70,   144,   136,    34,
      34,   144,   150,    30,   142,   154,   155,    61,    57,   163,
     163,    70,    54,    70,    63,    35,    36,    37,    38,    68,
      69,    70,    39,    40,    41,    42,    43,    44,    45,    46,
      15,    16,    17,    18,    19,    20,    21,    30,    30,    70,
     199,    30,    29,    24,    27,   183,   184,    29,    70,    26,
     188,    70,    26,    29,    26,   193,    17,    18,    19,    20,
      21,    30,    27,    27,     6,    10,    26,    30,    34,    26,
      11,    30,    34,    29,    26,    28,    30,    26,    28,    30,
      28,    60,    60,    30,    27,     4,    30,    27,    27,    26,
      28,    13,    28,    28,    28,    26,   185,   189,   148,   128,
      -1,    89,    -1,   131,    -1,    -1,    61,    39,    -1,    -1,
      -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     7,     8,     9,    12,    15,    16,    17,
      18,    19,    20,    21,    25,    70,    72,    73,    74,    75,
      77,    78,    79,    80,    85,    87,    88,    89,    90,    91,
      93,    94,    97,    98,    99,   100,    29,    29,    27,    29,
      29,    26,    29,    29,    33,    54,    70,     0,    73,    26,
      33,    14,    61,    94,   100,    70,    79,    89,    22,    23,
      24,    29,    57,    63,    68,    69,    70,   102,   103,   105,
     106,   107,   108,   109,   110,   111,   112,   103,    73,    93,
      99,   102,   105,    57,   100,   101,   105,    70,    98,    33,
     105,    70,    70,    70,    34,    95,    34,    96,    70,   100,
     107,   108,    30,    39,    40,    41,    42,    43,    44,    45,
      46,   104,    35,    36,    37,    38,    30,    28,   103,    30,
      34,    92,    70,    30,   106,    27,    29,    29,    70,    26,
      70,    79,    26,    29,    26,    30,    27,   105,   107,   107,
     107,   107,    27,     6,    26,    10,    81,    82,   105,    30,
      34,    26,    85,    86,    93,    97,   101,   101,    95,    96,
      30,    73,    73,    29,    79,   105,    11,    83,    92,    26,
     101,    28,    86,    86,    30,    30,    26,    28,    28,   103,
      30,    60,    60,    27,    27,     4,    76,    30,    27,    74,
      74,    73,    73,    27,    75,    26,    73,    82,    28,    13,
      84,    73,    28,   105,    28,    28,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    75,
      76,    76,    76,    77,    78,    79,    79,    80,    81,    82,
      82,    83,    83,    84,    85,    86,    86,    86,    86,    87,
      88,    89,    89,    90,    91,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    97,    97,    98,    99,    99,
     100,   100,   100,   100,   100,   101,   101,   101,   102,   102,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   107,   107,   107,   107,   107,
     107,   107,   108,   108,   108,   108,   109,   110,   111,   112
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     8,
       4,     2,     0,     7,     2,     3,     3,     5,     2,     5,
       0,     3,     0,     3,     6,     2,     2,     1,     0,     4,
       9,     3,     3,    10,     6,     3,     0,     2,     1,     4,
       4,     3,     0,     3,     0,    10,     9,     5,     1,     1,
       1,     1,     1,     1,     1,     4,     2,     0,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3
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
  case 2: /* PROGRAM: STATEMENTS  */
#line 77 "bison_Program.y"
                    {
              if ((yyvsp[0].intvalue) == 0) {
                 printf("Error: No statement found in the input.");
                 YYABORT;
             } 
             else if  (!class_found) {
                 printf("Error: No class statement found in the input.");
                 YYABORT;
             } else {
                 printf("Program parsed successfully.\n");
             }
         }
#line 1485 "bison_Program.tab.c"
    break;

  case 3: /* STATEMENTS: %empty  */
#line 90 "bison_Program.y"
                     {(yyval.intvalue) = 0;}
#line 1491 "bison_Program.tab.c"
    break;

  case 4: /* STATEMENTS: STATEMENT STATEMENTS  */
#line 91 "bison_Program.y"
                                    {(yyval.intvalue)= 1;}
#line 1497 "bison_Program.tab.c"
    break;

  case 19: /* STATEMENT_IF_ELSE: TOKEN_IF TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE ELSE_CLAUSE  */
#line 113 "bison_Program.y"
                  {
                      if ((yyvsp[-5].intvalue)) {  
                          (yyval.intvalue) = (yyvsp[-2].intvalue);
                          printf("IF block executed.\n");
                      } else if ((yyvsp[0].intvalue)) {  
                          (yyval.intvalue) = (yyvsp[0].intvalue); 
                          printf("ELSE IF block executed.\n");
                      } else {
                          printf("No condition met. No block executed.\n"); 
                      }
                  }
#line 1513 "bison_Program.tab.c"
    break;

  case 20: /* ELSE_CLAUSE: TOKEN_ELSE TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 129 "bison_Program.y"
           {
               (yyval.intvalue) = (yyvsp[-1].intvalue); // Indicate that the 'else' clause exists and will be executed if reached
               printf("ELSE Statement\n");
           }
#line 1522 "bison_Program.tab.c"
    break;

  case 21: /* ELSE_CLAUSE: TOKEN_ELSE STATEMENT_IF_ELSE  */
#line 134 "bison_Program.y"
           {
               (yyval.intvalue) = (yyvsp[0].intvalue); // Handle nested 'else if'
               printf("ELSE IF Statement\n");
           }
#line 1531 "bison_Program.tab.c"
    break;

  case 22: /* ELSE_CLAUSE: %empty  */
#line 139 "bison_Program.y"
           {
              (yyval.intvalue) = 0;
           }
#line 1539 "bison_Program.tab.c"
    break;

  case 23: /* STATEMENT_WHILE: TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 144 "bison_Program.y"
                                                                                                      { printf("WHILE Statement\n"); }
#line 1545 "bison_Program.tab.c"
    break;

  case 24: /* STATEMENT_BREAK: TOKEN_BREAK TOKEN_SEMICOLON  */
#line 147 "bison_Program.y"
                                             { printf("BREAK Statement\n"); }
#line 1551 "bison_Program.tab.c"
    break;

  case 25: /* STATEMENT_ASSIGN: IDENTIFIER TOKEN_ASSIGN EXPRESSION  */
#line 150 "bison_Program.y"
                                                      { }
#line 1557 "bison_Program.tab.c"
    break;

  case 27: /* STATEMENT_SWITCH: TOKEN_SWITCH TOKEN_LPAREN EXPRESSION TOKEN_RPAREN SWITCH_BODY  */
#line 154 "bison_Program.y"
                                                                                { printf("SWITCH Statement\n"); }
#line 1563 "bison_Program.tab.c"
    break;

  case 28: /* SWITCH_BODY: SWITCH_CASE_BODY DEFAULT_BODY  */
#line 157 "bison_Program.y"
                                           {}
#line 1569 "bison_Program.tab.c"
    break;

  case 30: /* SWITCH_CASE_BODY: %empty  */
#line 161 "bison_Program.y"
                         {}
#line 1575 "bison_Program.tab.c"
    break;

  case 32: /* DEFAULT_BODY: %empty  */
#line 165 "bison_Program.y"
                     {}
#line 1581 "bison_Program.tab.c"
    break;

  case 33: /* STATEMENT_RETURN: TOKEN_RETURN EXPRESSION TOKEN_SEMICOLON  */
#line 167 "bison_Program.y"
                                                          { printf("RETURN Statement\n"); }
#line 1587 "bison_Program.tab.c"
    break;

  case 34: /* STATEMENT_CLASS: ACCESS_MODIFIER TOKEN_CLASS IDENTIFIER TOKEN_LBRACE CLASS_BODY TOKEN_RBRACE  */
#line 171 "bison_Program.y"
               {
                   class_found = 1;
                   printf("CLASS Statement\n");
                   if (!isupper((yyvsp[-3].strvalue)[0])) {
                       yyerror("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   }
               }
#line 1600 "bison_Program.tab.c"
    break;

  case 38: /* CLASS_BODY: %empty  */
#line 183 "bison_Program.y"
                   {}
#line 1606 "bison_Program.tab.c"
    break;

  case 39: /* CREATE_CLASS_OBJECT: IDENTIFIER IDENTIFIER TOKEN_ASSIGN STATEMENT_NEW  */
#line 186 "bison_Program.y"
                                                                      { printf("Create Class Object Statement\n");
                        if (!isupper((yyvsp[-3].strvalue)[0])) {
                       yyerror("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   } }
#line 1616 "bison_Program.tab.c"
    break;

  case 40: /* STATEMENT_DO_WHILE: TOKEN_DO TOKEN_LBRACE STATEMENTS TOKEN_RBRACE TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 193 "bison_Program.y"
                                                                                                                                  { printf("DO WHILE Statement\n");
                
 }
#line 1624 "bison_Program.tab.c"
    break;

  case 41: /* ACCESS_TO_CLASS_MEMBERS: IDENTIFIER TOKEN_DOT IDENTIFIER  */
#line 198 "bison_Program.y"
                                                         { printf("Access to Class Members Statement\n"); }
#line 1630 "bison_Program.tab.c"
    break;

  case 42: /* ACCESS_TO_CLASS_MEMBERS: IDENTIFIER TOKEN_DOT METHOD_CALL  */
#line 199 "bison_Program.y"
                                                          { printf("Access to Class Members Statement\n"); }
#line 1636 "bison_Program.tab.c"
    break;

  case 43: /* STATEMENT_FOR: TOKEN_FOR TOKEN_LPAREN VARIABLE_DECLARATION CONDITION TOKEN_SEMICOLON STATEMENT_ASSIGN TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 203 "bison_Program.y"
              {

                  printf("FOR loop executed.\n");
              }
#line 1645 "bison_Program.tab.c"
    break;

  case 44: /* STATEMENT_PRINT: TOKEN_OUT_PRINT TOKEN_LPAREN STRING_LITERAL PRINT_OPTIONAL_VAR TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 209 "bison_Program.y"
                                                                                                             { printf("Print Statement\n"); printf("%s\n", (yyvsp[-3].strvalue));}
#line 1651 "bison_Program.tab.c"
    break;

  case 45: /* PRINT_OPTIONAL_VAR: TOKEN_COMMA EXPRESSION PRINT_OPTIONAL_VAR  */
#line 212 "bison_Program.y"
                                                               {(yyval.intvalue)=(yyvsp[-1].intvalue);}
#line 1657 "bison_Program.tab.c"
    break;

  case 46: /* PRINT_OPTIONAL_VAR: %empty  */
#line 213 "bison_Program.y"
                            {}
#line 1663 "bison_Program.tab.c"
    break;

  case 49: /* VARIABLE_DECLARATION_BODY: VARIABLE_TYPE IDENTIFIER MORE_DECLARATIONS TOKEN_SEMICOLON  */
#line 222 "bison_Program.y"
                                                                                        { printf("Variable Declaration\n"); }
#line 1669 "bison_Program.tab.c"
    break;

  case 50: /* VARIABLE_DECLARATION_BODY: VARIABLE_TYPE STATEMENT_ASSIGN MORE_DECLARATIONS_ASSIGN TOKEN_SEMICOLON  */
#line 223 "bison_Program.y"
                                                                                                    { printf("Variable Declaration\n"); }
#line 1675 "bison_Program.tab.c"
    break;

  case 51: /* MORE_DECLARATIONS: TOKEN_COMMA IDENTIFIER MORE_DECLARATIONS  */
#line 226 "bison_Program.y"
                                                              {}
#line 1681 "bison_Program.tab.c"
    break;

  case 52: /* MORE_DECLARATIONS: %empty  */
#line 227 "bison_Program.y"
                           {}
#line 1687 "bison_Program.tab.c"
    break;

  case 53: /* MORE_DECLARATIONS_ASSIGN: TOKEN_COMMA STATEMENT_ASSIGN MORE_DECLARATIONS_ASSIGN  */
#line 229 "bison_Program.y"
                                                                                 {}
#line 1693 "bison_Program.tab.c"
    break;

  case 54: /* MORE_DECLARATIONS_ASSIGN: %empty  */
#line 230 "bison_Program.y"
                           {}
#line 1699 "bison_Program.tab.c"
    break;

  case 55: /* METHOD_DECLARATION: ACCESS_MODIFIER VARIABLE_TYPE IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS STATEMENT_RETURN TOKEN_RBRACE  */
#line 234 "bison_Program.y"
                                                                                                                                                            { printf("Method Declaration\n"); }
#line 1705 "bison_Program.tab.c"
    break;

  case 56: /* METHOD_DECLARATION: ACCESS_MODIFIER TOKEN_VOID IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 235 "bison_Program.y"
                                                                                                                                        { printf("Method Declaration\n"); }
#line 1711 "bison_Program.tab.c"
    break;

  case 57: /* METHOD_CALL: IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 238 "bison_Program.y"
                                                                                 { printf("Method call\n");}
#line 1717 "bison_Program.tab.c"
    break;

  case 58: /* ACCESS_MODIFIER: TOKEN_PUBLIC  */
#line 241 "bison_Program.y"
                              {}
#line 1723 "bison_Program.tab.c"
    break;

  case 59: /* ACCESS_MODIFIER: TOKEN_PRIVATE  */
#line 242 "bison_Program.y"
                               {}
#line 1729 "bison_Program.tab.c"
    break;

  case 60: /* VARIABLE_TYPE: TOKEN_INT  */
#line 245 "bison_Program.y"
                         {}
#line 1735 "bison_Program.tab.c"
    break;

  case 61: /* VARIABLE_TYPE: TOKEN_CHAR  */
#line 246 "bison_Program.y"
                           {}
#line 1741 "bison_Program.tab.c"
    break;

  case 62: /* VARIABLE_TYPE: TOKEN_DOUBLE  */
#line 247 "bison_Program.y"
                             {}
#line 1747 "bison_Program.tab.c"
    break;

  case 63: /* VARIABLE_TYPE: TOKEN_BOOLEAN  */
#line 248 "bison_Program.y"
                             {}
#line 1753 "bison_Program.tab.c"
    break;

  case 64: /* VARIABLE_TYPE: TOKEN_STRING  */
#line 249 "bison_Program.y"
                             {}
#line 1759 "bison_Program.tab.c"
    break;

  case 65: /* PARAMETER_LIST: VARIABLE_TYPE IDENTIFIER TOKEN_COMMA PARAMETER_LIST  */
#line 252 "bison_Program.y"
                                                                     { printf("Parameter List\n"); }
#line 1765 "bison_Program.tab.c"
    break;

  case 66: /* PARAMETER_LIST: VARIABLE_TYPE IDENTIFIER  */
#line 253 "bison_Program.y"
                                          { printf("Parameter List\n"); }
#line 1771 "bison_Program.tab.c"
    break;

  case 67: /* PARAMETER_LIST: %empty  */
#line 254 "bison_Program.y"
                        {}
#line 1777 "bison_Program.tab.c"
    break;

  case 68: /* BOOLEAN: TOKEN_TRUE  */
#line 256 "bison_Program.y"
                      {(yyval.intvalue)=1; printf("Assigned true\n");}
#line 1783 "bison_Program.tab.c"
    break;

  case 69: /* BOOLEAN: TOKEN_FALSE  */
#line 257 "bison_Program.y"
                      {(yyval.intvalue)=0; printf("Less false\n");}
#line 1789 "bison_Program.tab.c"
    break;

  case 70: /* CONDITION: BOOLEAN  */
#line 259 "bison_Program.y"
                    {(yyval.intvalue)=(yyvsp[0].intvalue);}
#line 1795 "bison_Program.tab.c"
    break;

  case 71: /* CONDITION: EXPRESSION COMPARISON EXPRESSION  */
#line 261 "bison_Program.y"
           {
               switch ((yyvsp[-1].intvalue)) {
                   case 1 :  (yyval.intvalue) = ((yyvsp[-2].intvalue) < (yyvsp[0].intvalue)); break;
                   case 2:  (yyval.intvalue) = ((yyvsp[-2].intvalue) > (yyvsp[0].intvalue)); break;
                   case 3: (yyval.intvalue) = ((yyvsp[-2].intvalue) <= (yyvsp[0].intvalue)); break;
                   case 4: (yyval.intvalue) = ((yyvsp[-2].intvalue) >= (yyvsp[0].intvalue)); break;
                   case 5: (yyval.intvalue) = ((yyvsp[-2].intvalue) == (yyvsp[0].intvalue)); break;
                   case 6: (yyval.intvalue) = ((yyvsp[-2].intvalue) != (yyvsp[0].intvalue)); break;
                   case 7: (yyval.intvalue) = ((yyvsp[-2].intvalue) && (yyvsp[0].intvalue)); break;
                   case 8: (yyval.intvalue) = ((yyvsp[-2].intvalue) || (yyvsp[0].intvalue)); break;
                   default: yyerror("Unknown comparison operator");
               }
               printf("Condition result: %d\n", (yyval.intvalue));
           }
#line 1814 "bison_Program.tab.c"
    break;

  case 72: /* COMPARISON: TOKEN_LESS_THAN  */
#line 278 "bison_Program.y"
                             { (yyval.intvalue) = 1; printf("Less than\n"); }
#line 1820 "bison_Program.tab.c"
    break;

  case 73: /* COMPARISON: TOKEN_GREATER_THAN  */
#line 279 "bison_Program.y"
                                { (yyval.intvalue) = 2; printf("Greater than\n"); }
#line 1826 "bison_Program.tab.c"
    break;

  case 74: /* COMPARISON: TOKEN_LESS_THAN_EQUAL  */
#line 280 "bison_Program.y"
                                   { (yyval.intvalue) = 3; printf("Less or equal than \n");}
#line 1832 "bison_Program.tab.c"
    break;

  case 75: /* COMPARISON: TOKEN_GREATER_THAN_EQUAL  */
#line 281 "bison_Program.y"
                                      { (yyval.intvalue) = 4 ; printf("Greater or equal than\n"); }
#line 1838 "bison_Program.tab.c"
    break;

  case 76: /* COMPARISON: TOKEN_EQUAL  */
#line 282 "bison_Program.y"
                         { (yyval.intvalue) = 5 ; printf("Equal\n");}
#line 1844 "bison_Program.tab.c"
    break;

  case 77: /* COMPARISON: TOKEN_NOT_EQUAL  */
#line 283 "bison_Program.y"
                             { (yyval.intvalue) = 6 ; printf("Not equal\n"); }
#line 1850 "bison_Program.tab.c"
    break;

  case 78: /* COMPARISON: TOKEN_AND  */
#line 284 "bison_Program.y"
                        { (yyval.intvalue) = 7 ; printf("And");}
#line 1856 "bison_Program.tab.c"
    break;

  case 79: /* COMPARISON: TOKEN_OR  */
#line 285 "bison_Program.y"
                      { (yyval.intvalue) = 8 ; printf("Or");}
#line 1862 "bison_Program.tab.c"
    break;

  case 80: /* EXPRESSION: VALUE  */
#line 289 "bison_Program.y"
                   { (yyval.intvalue) = (yyvsp[0].intvalue);}
#line 1868 "bison_Program.tab.c"
    break;

  case 81: /* EXPRESSION: OPERATION  */
#line 290 "bison_Program.y"
                       { (yyval.intvalue) = (yyvsp[0].intvalue); }
#line 1874 "bison_Program.tab.c"
    break;

  case 82: /* EXPRESSION: STATEMENT_NEW  */
#line 291 "bison_Program.y"
                           { (yyval.intvalue) = (yyvsp[0].intvalue); }
#line 1880 "bison_Program.tab.c"
    break;

  case 83: /* STATEMENT_NEW: TOKEN_NEW VARIABLE_TYPE TOKEN_SEMICOLON  */
#line 297 "bison_Program.y"
                                                        { printf("New Statement\n"); }
#line 1886 "bison_Program.tab.c"
    break;

  case 84: /* STATEMENT_NEW: TOKEN_NEW IDENTIFIER TOKEN_LPAREN TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 298 "bison_Program.y"
                                                                               { printf("New Statement\n");
                  if (!isupper((yyvsp[-3].strvalue)[0])) {
                       yyerror("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   } }
#line 1896 "bison_Program.tab.c"
    break;

  case 85: /* VALUE: NUMBER  */
#line 305 "bison_Program.y"
               {(yyval.intvalue) = (yyvsp[0].intvalue); printf("Value: %d\n", (yyval.intvalue)); }
#line 1902 "bison_Program.tab.c"
    break;

  case 86: /* VALUE: TOKEN_LPAREN OPERATION TOKEN_RPAREN  */
#line 306 "bison_Program.y"
                                            { (yyval.intvalue) = (yyvsp[-1].intvalue);}
#line 1908 "bison_Program.tab.c"
    break;

  case 87: /* VALUE: BOOLEAN  */
#line 307 "bison_Program.y"
                {(yyval.intvalue)= (yyvsp[0].intvalue);}
#line 1914 "bison_Program.tab.c"
    break;

  case 88: /* VALUE: DOUBLE_NUMBER  */
#line 308 "bison_Program.y"
                      {(yyval.intvalue) =(yyvsp[0].dvalue); printf("Value: %f\n", (yyvsp[0].dvalue));}
#line 1920 "bison_Program.tab.c"
    break;

  case 89: /* VALUE: CHARACTER  */
#line 309 "bison_Program.y"
                  {(yyval.intvalue)= (yyvsp[0].charvalue); printf("Char value: %c\n",(yyvsp[0].charvalue));}
#line 1926 "bison_Program.tab.c"
    break;

  case 90: /* VALUE: STRING_LITERAL  */
#line 310 "bison_Program.y"
                       { (yyval.intvalue) = STRING_LITERAL; printf("String Value: %s\n", (yyvsp[0].strvalue)); }
#line 1932 "bison_Program.tab.c"
    break;

  case 91: /* VALUE: IDENTIFIER  */
#line 311 "bison_Program.y"
                   { }
#line 1938 "bison_Program.tab.c"
    break;

  case 92: /* OPERATION: ADDITION  */
#line 314 "bison_Program.y"
                     { (yyval.intvalue) = (yyvsp[0].intvalue); }
#line 1944 "bison_Program.tab.c"
    break;

  case 93: /* OPERATION: MULTIPLICATION  */
#line 315 "bison_Program.y"
                           { (yyval.intvalue) = (yyvsp[0].intvalue);  }
#line 1950 "bison_Program.tab.c"
    break;

  case 94: /* OPERATION: SUBTRACTION  */
#line 316 "bison_Program.y"
                        { (yyval.intvalue) = (yyvsp[0].intvalue); }
#line 1956 "bison_Program.tab.c"
    break;

  case 95: /* OPERATION: DIVISION  */
#line 317 "bison_Program.y"
                     { (yyval.intvalue) = (yyvsp[0].intvalue); }
#line 1962 "bison_Program.tab.c"
    break;

  case 96: /* ADDITION: VALUE TOKEN_PLUS VALUE  */
#line 321 "bison_Program.y"
                                 { (yyval.intvalue) = (yyvsp[-2].intvalue) + (yyvsp[0].intvalue); printf("Addition: %d\n", (yyval.intvalue)); }
#line 1968 "bison_Program.tab.c"
    break;

  case 97: /* MULTIPLICATION: VALUE TOKEN_MULT VALUE  */
#line 324 "bison_Program.y"
                                        { (yyval.intvalue) = (yyvsp[-2].intvalue) * (yyvsp[0].intvalue); printf("Multiplication: %d\n", (yyval.intvalue)); }
#line 1974 "bison_Program.tab.c"
    break;

  case 98: /* SUBTRACTION: VALUE TOKEN_MINUS VALUE  */
#line 326 "bison_Program.y"
                                      { (yyval.intvalue) = (yyvsp[-2].intvalue) - (yyvsp[0].intvalue); printf("Subtraction: %d\n", (yyval.intvalue)); }
#line 1980 "bison_Program.tab.c"
    break;

  case 99: /* DIVISION: VALUE TOKEN_DIV VALUE  */
#line 329 "bison_Program.y"
                          {
        if ((yyvsp[0].intvalue) == 0) {
            yyerror("Error: Division by zero");
            YYABORT;
        } else {
            (yyval.intvalue) = (yyvsp[-2].intvalue) / (yyvsp[0].intvalue); 
            printf("Division: %d\n", (yyval.intvalue)); 
        }
    }
#line 1994 "bison_Program.tab.c"
    break;


#line 1998 "bison_Program.tab.c"

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

#line 340 "bison_Program.y"

/* CODE */
int yydebug=0;
void yyerror( char *s) {
    fprintf(stderr, "%s at line %d\n", s, yylineno);
    // Optionally, print more context about the error
    exit(1);
}

int main(int argc, char **argv) {
    if (argc > 1) {
        FILE *file = fopen(argv[1], "r");
        if (!file) {
            perror("Could not open file");
            return 1;
        }
        yyin = file;
    }
    yyparse();
    return 0;
}
