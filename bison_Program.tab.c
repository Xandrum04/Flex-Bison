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


#line 98 "bison_Program.tab.c"

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
    TOKEN_WHILE = 260,             /* TOKEN_WHILE  */
    TOKEN_DO = 261,                /* TOKEN_DO  */
    TOKEN_FOR = 262,               /* TOKEN_FOR  */
    TOKEN_SWITCH = 263,            /* TOKEN_SWITCH  */
    TOKEN_CASE = 264,              /* TOKEN_CASE  */
    TOKEN_DEFAULT = 265,           /* TOKEN_DEFAULT  */
    TOKEN_BREAK = 266,             /* TOKEN_BREAK  */
    TOKEN_RETURN = 267,            /* TOKEN_RETURN  */
    TOKEN_CLASS = 268,             /* TOKEN_CLASS  */
    TOKEN_PUBLIC = 269,            /* TOKEN_PUBLIC  */
    TOKEN_PRIVATE = 270,           /* TOKEN_PRIVATE  */
    TOKEN_INT = 271,               /* TOKEN_INT  */
    TOKEN_CHAR = 272,              /* TOKEN_CHAR  */
    TOKEN_DOUBLE = 273,            /* TOKEN_DOUBLE  */
    TOKEN_BOOLEAN = 274,           /* TOKEN_BOOLEAN  */
    TOKEN_STRING = 275,            /* TOKEN_STRING  */
    TOKEN_TRUE = 276,              /* TOKEN_TRUE  */
    TOKEN_FALSE = 277,             /* TOKEN_FALSE  */
    TOKEN_NEW = 278,               /* TOKEN_NEW  */
    TOKEN_OUT_PRINT = 279,         /* TOKEN_OUT_PRINT  */
    TOKEN_SEMICOLON = 280,         /* TOKEN_SEMICOLON  */
    TOKEN_LBRACE = 281,            /* TOKEN_LBRACE  */
    TOKEN_RBRACE = 282,            /* TOKEN_RBRACE  */
    TOKEN_LPAREN = 283,            /* TOKEN_LPAREN  */
    TOKEN_RPAREN = 284,            /* TOKEN_RPAREN  */
    TOKEN_LBRACKET = 285,          /* TOKEN_LBRACKET  */
    TOKEN_RBRACKET = 286,          /* TOKEN_RBRACKET  */
    TOKEN_ASSIGN = 287,            /* TOKEN_ASSIGN  */
    TOKEN_COMMA = 288,             /* TOKEN_COMMA  */
    TOKEN_PLUS = 289,              /* TOKEN_PLUS  */
    TOKEN_MINUS = 290,             /* TOKEN_MINUS  */
    TOKEN_MULT = 291,              /* TOKEN_MULT  */
    TOKEN_DIV = 292,               /* TOKEN_DIV  */
    TOKEN_LESS_THAN = 293,         /* TOKEN_LESS_THAN  */
    TOKEN_GREATER_THAN = 294,      /* TOKEN_GREATER_THAN  */
    TOKEN_EQUAL = 295,             /* TOKEN_EQUAL  */
    TOKEN_NOT_EQUAL = 296,         /* TOKEN_NOT_EQUAL  */
    TOKEN_LESS_THAN_EQUAL = 297,   /* TOKEN_LESS_THAN_EQUAL  */
    TOKEN_GREATER_THAN_EQUAL = 298, /* TOKEN_GREATER_THAN_EQUAL  */
    TOKEN_AND = 299,               /* TOKEN_AND  */
    TOKEN_OR = 300,                /* TOKEN_OR  */
    TOKEN_MODULO = 301,            /* TOKEN_MODULO  */
    TOKEN_HASH = 302,              /* TOKEN_HASH  */
    TOKEN_AT = 303,                /* TOKEN_AT  */
    TOKEN_CARET = 304,             /* TOKEN_CARET  */
    TOKEN_QUESTION_MARK = 305,     /* TOKEN_QUESTION_MARK  */
    TOKEN_DOUBLE_QUOTE = 306,      /* TOKEN_DOUBLE_QUOTE  */
    TOKEN_UNDERSCORE = 307,        /* TOKEN_UNDERSCORE  */
    TOKEN_DOT = 308,               /* TOKEN_DOT  */
    TOKEN_EXCLAMATION_POINT = 309, /* TOKEN_EXCLAMATION_POINT  */
    TOKEN_PIPE = 310,              /* TOKEN_PIPE  */
    STRING_LITERAL = 311,          /* STRING_LITERAL  */
    TOKEN_ADD = 312,               /* TOKEN_ADD  */
    LOWER_THAN_DEFAULT = 313,      /* LOWER_THAN_DEFAULT  */
    TOKEN_COLON = 314,             /* TOKEN_COLON  */
    TOKEN_VOID = 315,              /* TOKEN_VOID  */
    IGNORE_WHITESPACE_NEWLINE = 316, /* IGNORE_WHITESPACE_NEWLINE  */
    CHARACTER = 317,               /* CHARACTER  */
    TOKEN_SUB = 318,               /* TOKEN_SUB  */
    TOKEN_MUL = 319,               /* TOKEN_MUL  */
    UMINUS = 320,                  /* UMINUS  */
    LOWER_THAN_CASE = 321,         /* LOWER_THAN_CASE  */
    DOUBLE_NUMBER = 322,           /* DOUBLE_NUMBER  */
    NUMBER = 323,                  /* NUMBER  */
    IDENTIFIER = 324               /* IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "bison_Program.y"

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
  YYSYMBOL_TOKEN_WHILE = 5,                /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_DO = 6,                   /* TOKEN_DO  */
  YYSYMBOL_TOKEN_FOR = 7,                  /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_SWITCH = 8,               /* TOKEN_SWITCH  */
  YYSYMBOL_TOKEN_CASE = 9,                 /* TOKEN_CASE  */
  YYSYMBOL_TOKEN_DEFAULT = 10,             /* TOKEN_DEFAULT  */
  YYSYMBOL_TOKEN_BREAK = 11,               /* TOKEN_BREAK  */
  YYSYMBOL_TOKEN_RETURN = 12,              /* TOKEN_RETURN  */
  YYSYMBOL_TOKEN_CLASS = 13,               /* TOKEN_CLASS  */
  YYSYMBOL_TOKEN_PUBLIC = 14,              /* TOKEN_PUBLIC  */
  YYSYMBOL_TOKEN_PRIVATE = 15,             /* TOKEN_PRIVATE  */
  YYSYMBOL_TOKEN_INT = 16,                 /* TOKEN_INT  */
  YYSYMBOL_TOKEN_CHAR = 17,                /* TOKEN_CHAR  */
  YYSYMBOL_TOKEN_DOUBLE = 18,              /* TOKEN_DOUBLE  */
  YYSYMBOL_TOKEN_BOOLEAN = 19,             /* TOKEN_BOOLEAN  */
  YYSYMBOL_TOKEN_STRING = 20,              /* TOKEN_STRING  */
  YYSYMBOL_TOKEN_TRUE = 21,                /* TOKEN_TRUE  */
  YYSYMBOL_TOKEN_FALSE = 22,               /* TOKEN_FALSE  */
  YYSYMBOL_TOKEN_NEW = 23,                 /* TOKEN_NEW  */
  YYSYMBOL_TOKEN_OUT_PRINT = 24,           /* TOKEN_OUT_PRINT  */
  YYSYMBOL_TOKEN_SEMICOLON = 25,           /* TOKEN_SEMICOLON  */
  YYSYMBOL_TOKEN_LBRACE = 26,              /* TOKEN_LBRACE  */
  YYSYMBOL_TOKEN_RBRACE = 27,              /* TOKEN_RBRACE  */
  YYSYMBOL_TOKEN_LPAREN = 28,              /* TOKEN_LPAREN  */
  YYSYMBOL_TOKEN_RPAREN = 29,              /* TOKEN_RPAREN  */
  YYSYMBOL_TOKEN_LBRACKET = 30,            /* TOKEN_LBRACKET  */
  YYSYMBOL_TOKEN_RBRACKET = 31,            /* TOKEN_RBRACKET  */
  YYSYMBOL_TOKEN_ASSIGN = 32,              /* TOKEN_ASSIGN  */
  YYSYMBOL_TOKEN_COMMA = 33,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_PLUS = 34,                /* TOKEN_PLUS  */
  YYSYMBOL_TOKEN_MINUS = 35,               /* TOKEN_MINUS  */
  YYSYMBOL_TOKEN_MULT = 36,                /* TOKEN_MULT  */
  YYSYMBOL_TOKEN_DIV = 37,                 /* TOKEN_DIV  */
  YYSYMBOL_TOKEN_LESS_THAN = 38,           /* TOKEN_LESS_THAN  */
  YYSYMBOL_TOKEN_GREATER_THAN = 39,        /* TOKEN_GREATER_THAN  */
  YYSYMBOL_TOKEN_EQUAL = 40,               /* TOKEN_EQUAL  */
  YYSYMBOL_TOKEN_NOT_EQUAL = 41,           /* TOKEN_NOT_EQUAL  */
  YYSYMBOL_TOKEN_LESS_THAN_EQUAL = 42,     /* TOKEN_LESS_THAN_EQUAL  */
  YYSYMBOL_TOKEN_GREATER_THAN_EQUAL = 43,  /* TOKEN_GREATER_THAN_EQUAL  */
  YYSYMBOL_TOKEN_AND = 44,                 /* TOKEN_AND  */
  YYSYMBOL_TOKEN_OR = 45,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_MODULO = 46,              /* TOKEN_MODULO  */
  YYSYMBOL_TOKEN_HASH = 47,                /* TOKEN_HASH  */
  YYSYMBOL_TOKEN_AT = 48,                  /* TOKEN_AT  */
  YYSYMBOL_TOKEN_CARET = 49,               /* TOKEN_CARET  */
  YYSYMBOL_TOKEN_QUESTION_MARK = 50,       /* TOKEN_QUESTION_MARK  */
  YYSYMBOL_TOKEN_DOUBLE_QUOTE = 51,        /* TOKEN_DOUBLE_QUOTE  */
  YYSYMBOL_TOKEN_UNDERSCORE = 52,          /* TOKEN_UNDERSCORE  */
  YYSYMBOL_TOKEN_DOT = 53,                 /* TOKEN_DOT  */
  YYSYMBOL_TOKEN_EXCLAMATION_POINT = 54,   /* TOKEN_EXCLAMATION_POINT  */
  YYSYMBOL_TOKEN_PIPE = 55,                /* TOKEN_PIPE  */
  YYSYMBOL_STRING_LITERAL = 56,            /* STRING_LITERAL  */
  YYSYMBOL_TOKEN_ADD = 57,                 /* TOKEN_ADD  */
  YYSYMBOL_LOWER_THAN_DEFAULT = 58,        /* LOWER_THAN_DEFAULT  */
  YYSYMBOL_TOKEN_COLON = 59,               /* TOKEN_COLON  */
  YYSYMBOL_TOKEN_VOID = 60,                /* TOKEN_VOID  */
  YYSYMBOL_IGNORE_WHITESPACE_NEWLINE = 61, /* IGNORE_WHITESPACE_NEWLINE  */
  YYSYMBOL_CHARACTER = 62,                 /* CHARACTER  */
  YYSYMBOL_TOKEN_SUB = 63,                 /* TOKEN_SUB  */
  YYSYMBOL_TOKEN_MUL = 64,                 /* TOKEN_MUL  */
  YYSYMBOL_UMINUS = 65,                    /* UMINUS  */
  YYSYMBOL_LOWER_THAN_CASE = 66,           /* LOWER_THAN_CASE  */
  YYSYMBOL_DOUBLE_NUMBER = 67,             /* DOUBLE_NUMBER  */
  YYSYMBOL_NUMBER = 68,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 69,                /* IDENTIFIER  */
  YYSYMBOL_YYACCEPT = 70,                  /* $accept  */
  YYSYMBOL_PROGRAM = 71,                   /* PROGRAM  */
  YYSYMBOL_STATEMENTS = 72,                /* STATEMENTS  */
  YYSYMBOL_STATEMENT = 73,                 /* STATEMENT  */
  YYSYMBOL_STATEMENT_IF_ELSE = 74,         /* STATEMENT_IF_ELSE  */
  YYSYMBOL_ELSE_CLAUSE = 75,               /* ELSE_CLAUSE  */
  YYSYMBOL_STATEMENT_BREAK = 76,           /* STATEMENT_BREAK  */
  YYSYMBOL_STATEMENT_ASSIGN = 77,          /* STATEMENT_ASSIGN  */
  YYSYMBOL_STATEMENT_SWITCH = 78,          /* STATEMENT_SWITCH  */
  YYSYMBOL_SWITCH_BODY = 79,               /* SWITCH_BODY  */
  YYSYMBOL_SWITCH_CASE_BODY = 80,          /* SWITCH_CASE_BODY  */
  YYSYMBOL_DEFAULT_BODY = 81,              /* DEFAULT_BODY  */
  YYSYMBOL_STATEMENT_RETURN = 82,          /* STATEMENT_RETURN  */
  YYSYMBOL_STATEMENT_CLASS = 83,           /* STATEMENT_CLASS  */
  YYSYMBOL_CLASS_BODY = 84,                /* CLASS_BODY  */
  YYSYMBOL_CREATE_CLASS_OBJECT = 85,       /* CREATE_CLASS_OBJECT  */
  YYSYMBOL_STATEMENT_DO_WHILE = 86,        /* STATEMENT_DO_WHILE  */
  YYSYMBOL_ACCESS_TO_CLASS_MEMBERS = 87,   /* ACCESS_TO_CLASS_MEMBERS  */
  YYSYMBOL_STATEMENT_FOR = 88,             /* STATEMENT_FOR  */
  YYSYMBOL_STATEMENT_PRINT = 89,           /* STATEMENT_PRINT  */
  YYSYMBOL_PRINT_OPTIONAL_VAR = 90,        /* PRINT_OPTIONAL_VAR  */
  YYSYMBOL_VARIABLE_DECLARATION = 91,      /* VARIABLE_DECLARATION  */
  YYSYMBOL_VARIABLE_DECLARATION_BODY = 92, /* VARIABLE_DECLARATION_BODY  */
  YYSYMBOL_MORE_DECLARATIONS = 93,         /* MORE_DECLARATIONS  */
  YYSYMBOL_MORE_DECLARATIONS_ASSIGN = 94,  /* MORE_DECLARATIONS_ASSIGN  */
  YYSYMBOL_METHOD_DECLARATION = 95,        /* METHOD_DECLARATION  */
  YYSYMBOL_METHOD_CALL = 96,               /* METHOD_CALL  */
  YYSYMBOL_ACCESS_MODIFIER = 97,           /* ACCESS_MODIFIER  */
  YYSYMBOL_VARIABLE_TYPE = 98,             /* VARIABLE_TYPE  */
  YYSYMBOL_PARAMETER_LIST = 99,            /* PARAMETER_LIST  */
  YYSYMBOL_BOOLEAN = 100,                  /* BOOLEAN  */
  YYSYMBOL_CONDITION = 101,                /* CONDITION  */
  YYSYMBOL_COMPARISON = 102,               /* COMPARISON  */
  YYSYMBOL_EXPRESSION = 103,               /* EXPRESSION  */
  YYSYMBOL_STATEMENT_NEW = 104,            /* STATEMENT_NEW  */
  YYSYMBOL_VALUE = 105,                    /* VALUE  */
  YYSYMBOL_OPERATION = 106,                /* OPERATION  */
  YYSYMBOL_ADDITION = 107,                 /* ADDITION  */
  YYSYMBOL_MULTIPLICATION = 108,           /* MULTIPLICATION  */
  YYSYMBOL_SUBTRACTION = 109,              /* SUBTRACTION  */
  YYSYMBOL_DIVISION = 110                  /* DIVISION  */
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
#define YYFINAL  44
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   221

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  97
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  199

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   324


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
      65,    66,    67,    68,    69
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    78,    78,    91,    92,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   112,   120,
     124,   128,   135,   138,   139,   142,   145,   148,   149,   152,
     153,   155,   158,   168,   169,   170,   171,   174,   181,   186,
     187,   190,   197,   200,   201,   206,   207,   210,   211,   214,
     215,   217,   218,   222,   223,   226,   229,   230,   233,   234,
     235,   236,   237,   240,   241,   242,   244,   245,   247,   248,
     266,   267,   268,   269,   270,   271,   272,   273,   277,   278,
     279,   285,   286,   293,   294,   295,   296,   297,   298,   299,
     302,   303,   304,   305,   309,   312,   314,   317
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
  "TOKEN_ELSE", "TOKEN_WHILE", "TOKEN_DO", "TOKEN_FOR", "TOKEN_SWITCH",
  "TOKEN_CASE", "TOKEN_DEFAULT", "TOKEN_BREAK", "TOKEN_RETURN",
  "TOKEN_CLASS", "TOKEN_PUBLIC", "TOKEN_PRIVATE", "TOKEN_INT",
  "TOKEN_CHAR", "TOKEN_DOUBLE", "TOKEN_BOOLEAN", "TOKEN_STRING",
  "TOKEN_TRUE", "TOKEN_FALSE", "TOKEN_NEW", "TOKEN_OUT_PRINT",
  "TOKEN_SEMICOLON", "TOKEN_LBRACE", "TOKEN_RBRACE", "TOKEN_LPAREN",
  "TOKEN_RPAREN", "TOKEN_LBRACKET", "TOKEN_RBRACKET", "TOKEN_ASSIGN",
  "TOKEN_COMMA", "TOKEN_PLUS", "TOKEN_MINUS", "TOKEN_MULT", "TOKEN_DIV",
  "TOKEN_LESS_THAN", "TOKEN_GREATER_THAN", "TOKEN_EQUAL",
  "TOKEN_NOT_EQUAL", "TOKEN_LESS_THAN_EQUAL", "TOKEN_GREATER_THAN_EQUAL",
  "TOKEN_AND", "TOKEN_OR", "TOKEN_MODULO", "TOKEN_HASH", "TOKEN_AT",
  "TOKEN_CARET", "TOKEN_QUESTION_MARK", "TOKEN_DOUBLE_QUOTE",
  "TOKEN_UNDERSCORE", "TOKEN_DOT", "TOKEN_EXCLAMATION_POINT", "TOKEN_PIPE",
  "STRING_LITERAL", "TOKEN_ADD", "LOWER_THAN_DEFAULT", "TOKEN_COLON",
  "TOKEN_VOID", "IGNORE_WHITESPACE_NEWLINE", "CHARACTER", "TOKEN_SUB",
  "TOKEN_MUL", "UMINUS", "LOWER_THAN_CASE", "DOUBLE_NUMBER", "NUMBER",
  "IDENTIFIER", "$accept", "PROGRAM", "STATEMENTS", "STATEMENT",
  "STATEMENT_IF_ELSE", "ELSE_CLAUSE", "STATEMENT_BREAK",
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

#define YYPACT_NINF (-109)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-69)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,   -11,    -7,    -5,    -3,   -10,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,     2,    41,    42,  -109,    21,  -109,  -109,
      -4,  -109,  -109,  -109,  -109,    12,  -109,  -109,  -109,  -109,
    -109,  -109,    38,    -1,    61,    21,   129,    61,  -109,    14,
     134,    61,     5,    48,  -109,  -109,  -109,    61,    22,    24,
    -109,    28,    89,    75,    12,  -109,  -109,    30,    64,  -109,
    -109,  -109,  -109,  -109,   -13,    52,    96,  -109,   130,  -109,
    -109,  -109,  -109,  -109,    84,    61,   134,  -109,    83,    86,
      56,   127,  -109,   132,  -109,   138,  -109,   131,   141,    74,
      93,   145,   102,   147,   146,   148,   130,   149,   150,  -109,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,    61,    64,    64,
      64,    64,   170,   152,   171,    61,   153,   151,   154,  -109,
     129,   134,   134,   155,  -109,   -19,    75,  -109,   156,  -109,
    -109,    21,  -109,  -109,  -109,  -109,  -109,   158,   102,    61,
    -109,   173,    86,   162,   134,  -109,  -109,   163,   129,   129,
     160,   164,  -109,  -109,   166,   165,    61,   167,   122,   135,
    -109,  -109,  -109,  -109,  -109,  -109,  -109,   169,   172,  -109,
     193,   174,   175,    21,    21,    21,    21,     7,  -109,   177,
      21,   171,  -109,   178,   187,    21,  -109,  -109,   179,  -109,
    -109,    61,   180,   181,  -109,   184,  -109,  -109,  -109
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     2,     3,     7,    15,
       0,    10,    12,    13,     8,    17,     9,    14,     6,    46,
       5,    16,     0,     0,     0,     3,     0,     0,    22,     0,
      65,     0,     0,     0,     1,     4,    11,     0,     0,     0,
      45,     0,    50,    52,     0,    66,    67,     0,     0,    88,
      87,    86,    83,    89,    85,     0,     0,    80,    78,    79,
      90,    91,    92,    93,     0,     0,     0,    85,     0,    44,
       0,     0,    23,    39,    40,     0,    24,     0,     0,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      71,    74,    75,    72,    73,    76,    77,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,    64,     0,    37,
      36,    65,    65,    50,    47,     0,    52,    48,     0,    81,
      84,     3,    69,    94,    96,    95,    97,     0,     0,     0,
      25,    30,    44,     0,    65,    55,    35,     0,    36,    36,
       0,     0,    49,    51,     0,     0,     0,     0,     0,     0,
      26,    43,    42,    63,    32,    33,    34,     0,     0,    82,
      21,     0,     0,     0,     0,     3,     3,     0,    18,     0,
       3,    28,    29,     0,     0,     3,    20,    38,     0,    27,
      54,     0,     0,     0,    41,     0,    53,    19,    31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -109,  -109,   -17,  -108,    23,  -109,  -109,   -29,  -109,  -109,
      29,  -109,  -109,   -48,   -71,  -109,  -109,   -25,  -109,  -109,
      62,   -33,   -12,    88,    87,   -44,   176,   183,   -26,   -69,
     -32,   -68,  -109,   -36,   136,   -49,   157,  -109,  -109,  -109,
    -109
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    15,    16,    17,    18,   178,    19,    20,    21,   140,
     141,   160,   192,    22,   147,    23,    24,    25,    26,    27,
     116,    28,    29,    91,    93,    30,    31,    32,    33,    81,
      77,    65,   107,    66,    67,    68,    69,    70,    71,    72,
      73
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    78,    64,    75,    53,    82,    51,   113,    54,    96,
       1,    86,   -68,    41,    80,    38,   -68,    34,    74,    35,
      50,    46,    53,    36,     1,    37,    54,     2,     3,     4,
      39,    95,     5,   185,    42,     6,     7,     8,     9,    10,
      11,    12,    44,    64,    47,    13,     8,     9,    10,    11,
      12,    48,   150,   151,     8,     9,    10,    11,    12,   133,
     134,   135,   136,   126,    50,   181,   182,    54,    52,    40,
      79,   132,   146,    41,    83,   163,   149,   165,   166,   142,
      85,    98,    55,    56,    57,    55,    56,   148,   171,    58,
      14,    87,    58,    88,    42,    80,    80,    89,    49,    94,
     146,   146,   122,   158,   149,   149,    41,    90,    92,   157,
      43,   112,   114,    54,   155,   148,   148,    59,    80,   115,
      59,    41,    90,    60,    64,   117,    60,    42,    61,    62,
      63,    61,    62,    63,    99,   100,   101,   102,   103,   104,
     105,   106,    42,     6,     7,     8,     9,    10,    11,    12,
       8,     9,    10,    11,    12,   195,   118,   120,   183,   184,
      40,    57,   123,   188,   108,   109,   110,   111,   193,   121,
     124,   125,   127,   129,   128,   137,   131,   138,   130,   145,
     139,   173,   143,   159,   144,   154,   156,   162,    90,   167,
     164,   169,   170,   168,   174,   175,   172,   177,   176,   191,
     186,   180,   187,   179,   161,   190,   194,   196,   197,   198,
     189,   152,     0,   153,     0,    97,     0,     0,    84,    76,
       0,   119
};

static const yytype_int16 yycheck[] =
{
      17,    37,    34,    36,    33,    41,    32,    75,    33,    58,
       3,    47,    25,    32,    40,    25,    29,    28,    35,    26,
      32,    25,    51,    28,     3,    28,    51,     6,     7,     8,
      28,    57,    11,    26,    53,    14,    15,    16,    17,    18,
      19,    20,     0,    75,    32,    24,    16,    17,    18,    19,
      20,    13,   121,   122,    16,    17,    18,    19,    20,   108,
     109,   110,   111,    92,    76,   173,   174,    92,    69,    28,
      56,   107,   120,    32,    69,   144,   120,   148,   149,   115,
      32,    29,    21,    22,    23,    21,    22,   120,   156,    28,
      69,    69,    28,    69,    53,   121,   122,    69,    60,    69,
     148,   149,    28,   139,   148,   149,    32,    33,    33,   138,
      69,    27,    29,   138,   131,   148,   149,    56,   144,    33,
      56,    32,    33,    62,   156,    69,    62,    53,    67,    68,
      69,    67,    68,    69,    38,    39,    40,    41,    42,    43,
      44,    45,    53,    14,    15,    16,    17,    18,    19,    20,
      16,    17,    18,    19,    20,   191,    29,    26,   175,   176,
      28,    23,    69,   180,    34,    35,    36,    37,   185,    28,
      25,    69,    25,    25,    28,     5,    26,    25,    29,    25,
       9,    59,    29,    10,    33,    29,    28,    25,    33,    29,
      27,    25,    27,    29,    59,    26,    29,     4,    26,    12,
     177,    26,    25,    29,   142,    27,    27,    27,    27,    25,
     181,   123,    -1,   126,    -1,    58,    -1,    -1,    42,    36,
      -1,    85
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     6,     7,     8,    11,    14,    15,    16,    17,
      18,    19,    20,    24,    69,    71,    72,    73,    74,    76,
      77,    78,    83,    85,    86,    87,    88,    89,    91,    92,
      95,    96,    97,    98,    28,    26,    28,    28,    25,    28,
      28,    32,    53,    69,     0,    72,    25,    32,    13,    60,
      92,    98,    69,    77,    87,    21,    22,    23,    28,    56,
      62,    67,    68,    69,   100,   101,   103,   104,   105,   106,
     107,   108,   109,   110,    72,    91,    97,   100,   103,    56,
      98,    99,   103,    69,    96,    32,   103,    69,    69,    69,
      33,    93,    33,    94,    69,    98,   105,   106,    29,    38,
      39,    40,    41,    42,    43,    44,    45,   102,    34,    35,
      36,    37,    27,   101,    29,    33,    90,    69,    29,   104,
      26,    28,    28,    69,    25,    69,    77,    25,    28,    25,
      29,    26,   103,   105,   105,   105,   105,     5,    25,     9,
      79,    80,   103,    29,    33,    25,    83,    84,    91,    95,
      99,    99,    93,    94,    29,    72,    28,    77,   103,    10,
      81,    90,    25,    99,    27,    84,    84,    29,    29,    25,
      27,   101,    29,    59,    59,    26,    26,     4,    75,    29,
      26,    73,    73,    72,    72,    26,    74,    25,    72,    80,
      27,    12,    82,    72,    27,   103,    27,    27,    25
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    70,    71,    72,    72,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    75,
      75,    75,    76,    77,    77,    78,    79,    80,    80,    81,
      81,    82,    83,    84,    84,    84,    84,    85,    86,    87,
      87,    88,    89,    90,    90,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    95,    96,    97,    97,    98,    98,
      98,    98,    98,    99,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   102,   102,   102,   102,   102,   103,   103,
     103,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   106,   107,   108,   109,   110
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     8,     4,
       2,     0,     2,     3,     3,     5,     2,     5,     0,     3,
       0,     3,     6,     2,     2,     1,     0,     4,     9,     3,
       3,    10,     6,     3,     0,     2,     1,     4,     4,     3,
       0,     3,     0,    10,     9,     5,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     0,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     5,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3
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
#line 78 "bison_Program.y"
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
#line 1478 "bison_Program.tab.c"
    break;

  case 3: /* STATEMENTS: %empty  */
#line 91 "bison_Program.y"
                     {(yyval.intvalue) = 0;}
#line 1484 "bison_Program.tab.c"
    break;

  case 4: /* STATEMENTS: STATEMENT STATEMENTS  */
#line 92 "bison_Program.y"
                                    {(yyval.intvalue)= 1;}
#line 1490 "bison_Program.tab.c"
    break;

  case 18: /* STATEMENT_IF_ELSE: TOKEN_IF TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE ELSE_CLAUSE  */
#line 113 "bison_Program.y"
                  {
                      printf("IF Statement\n");
                  }
#line 1498 "bison_Program.tab.c"
    break;

  case 19: /* ELSE_CLAUSE: TOKEN_ELSE TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 121 "bison_Program.y"
           {
               printf("ELSE Statement\n");
           }
#line 1506 "bison_Program.tab.c"
    break;

  case 20: /* ELSE_CLAUSE: TOKEN_ELSE STATEMENT_IF_ELSE  */
#line 125 "bison_Program.y"
           {
               printf("ELSE ");
           }
#line 1514 "bison_Program.tab.c"
    break;

  case 21: /* ELSE_CLAUSE: %empty  */
#line 129 "bison_Program.y"
           {
              
           }
#line 1522 "bison_Program.tab.c"
    break;

  case 22: /* STATEMENT_BREAK: TOKEN_BREAK TOKEN_SEMICOLON  */
#line 135 "bison_Program.y"
                                             { printf("BREAK Statement\n"); }
#line 1528 "bison_Program.tab.c"
    break;

  case 23: /* STATEMENT_ASSIGN: IDENTIFIER TOKEN_ASSIGN EXPRESSION  */
#line 138 "bison_Program.y"
                                                      { }
#line 1534 "bison_Program.tab.c"
    break;

  case 25: /* STATEMENT_SWITCH: TOKEN_SWITCH TOKEN_LPAREN EXPRESSION TOKEN_RPAREN SWITCH_BODY  */
#line 142 "bison_Program.y"
                                                                                { printf("SWITCH Statement\n"); }
#line 1540 "bison_Program.tab.c"
    break;

  case 26: /* SWITCH_BODY: SWITCH_CASE_BODY DEFAULT_BODY  */
#line 145 "bison_Program.y"
                                           {}
#line 1546 "bison_Program.tab.c"
    break;

  case 28: /* SWITCH_CASE_BODY: %empty  */
#line 149 "bison_Program.y"
                         {}
#line 1552 "bison_Program.tab.c"
    break;

  case 30: /* DEFAULT_BODY: %empty  */
#line 153 "bison_Program.y"
                     {}
#line 1558 "bison_Program.tab.c"
    break;

  case 31: /* STATEMENT_RETURN: TOKEN_RETURN EXPRESSION TOKEN_SEMICOLON  */
#line 155 "bison_Program.y"
                                                          { printf("RETURN Statement\n"); }
#line 1564 "bison_Program.tab.c"
    break;

  case 32: /* STATEMENT_CLASS: ACCESS_MODIFIER TOKEN_CLASS IDENTIFIER TOKEN_LBRACE CLASS_BODY TOKEN_RBRACE  */
#line 159 "bison_Program.y"
               {
                   class_found = 1;
                   printf("CLASS Statement\n");
                   if (!isupper((yyvsp[-3].strvalue)[0])) {
                       yyerror("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   }
               }
#line 1577 "bison_Program.tab.c"
    break;

  case 36: /* CLASS_BODY: %empty  */
#line 171 "bison_Program.y"
                   {}
#line 1583 "bison_Program.tab.c"
    break;

  case 37: /* CREATE_CLASS_OBJECT: IDENTIFIER IDENTIFIER TOKEN_ASSIGN STATEMENT_NEW  */
#line 174 "bison_Program.y"
                                                                      { printf("Create Class Object Statement\n");
                        if (!isupper((yyvsp[-3].strvalue)[0])) {
                       yyerror("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   } }
#line 1593 "bison_Program.tab.c"
    break;

  case 38: /* STATEMENT_DO_WHILE: TOKEN_DO TOKEN_LBRACE STATEMENTS TOKEN_RBRACE TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 181 "bison_Program.y"
                                                                                                                                  { printf("DO WHILE Statement\n");
                
 }
#line 1601 "bison_Program.tab.c"
    break;

  case 39: /* ACCESS_TO_CLASS_MEMBERS: IDENTIFIER TOKEN_DOT IDENTIFIER  */
#line 186 "bison_Program.y"
                                                         { printf("Access to Class Members Statement\n"); }
#line 1607 "bison_Program.tab.c"
    break;

  case 40: /* ACCESS_TO_CLASS_MEMBERS: IDENTIFIER TOKEN_DOT METHOD_CALL  */
#line 187 "bison_Program.y"
                                                          { printf("Access to Class Members Statement\n"); }
#line 1613 "bison_Program.tab.c"
    break;

  case 41: /* STATEMENT_FOR: TOKEN_FOR TOKEN_LPAREN VARIABLE_DECLARATION CONDITION TOKEN_SEMICOLON STATEMENT_ASSIGN TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 191 "bison_Program.y"
              {

                  printf("FOR loop executed.\n");
              }
#line 1622 "bison_Program.tab.c"
    break;

  case 42: /* STATEMENT_PRINT: TOKEN_OUT_PRINT TOKEN_LPAREN STRING_LITERAL PRINT_OPTIONAL_VAR TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 197 "bison_Program.y"
                                                                                                             { printf("Print Statement\n"); printf("%s\n", (yyvsp[-3].strvalue));}
#line 1628 "bison_Program.tab.c"
    break;

  case 43: /* PRINT_OPTIONAL_VAR: TOKEN_COMMA EXPRESSION PRINT_OPTIONAL_VAR  */
#line 200 "bison_Program.y"
                                                               {(yyval.intvalue)=(yyvsp[-1].intvalue);}
#line 1634 "bison_Program.tab.c"
    break;

  case 44: /* PRINT_OPTIONAL_VAR: %empty  */
#line 201 "bison_Program.y"
                            {}
#line 1640 "bison_Program.tab.c"
    break;

  case 47: /* VARIABLE_DECLARATION_BODY: VARIABLE_TYPE IDENTIFIER MORE_DECLARATIONS TOKEN_SEMICOLON  */
#line 210 "bison_Program.y"
                                                                                        { printf("Variable Declaration of type: %s\n", (yyvsp[-3].strvalue)); }
#line 1646 "bison_Program.tab.c"
    break;

  case 48: /* VARIABLE_DECLARATION_BODY: VARIABLE_TYPE STATEMENT_ASSIGN MORE_DECLARATIONS_ASSIGN TOKEN_SEMICOLON  */
#line 211 "bison_Program.y"
                                                                                                    { printf("Variable Declaration of type: %s\n", (yyvsp[-3].strvalue)); }
#line 1652 "bison_Program.tab.c"
    break;

  case 49: /* MORE_DECLARATIONS: TOKEN_COMMA IDENTIFIER MORE_DECLARATIONS  */
#line 214 "bison_Program.y"
                                                              {}
#line 1658 "bison_Program.tab.c"
    break;

  case 50: /* MORE_DECLARATIONS: %empty  */
#line 215 "bison_Program.y"
                           {}
#line 1664 "bison_Program.tab.c"
    break;

  case 51: /* MORE_DECLARATIONS_ASSIGN: TOKEN_COMMA STATEMENT_ASSIGN MORE_DECLARATIONS_ASSIGN  */
#line 217 "bison_Program.y"
                                                                                 {}
#line 1670 "bison_Program.tab.c"
    break;

  case 52: /* MORE_DECLARATIONS_ASSIGN: %empty  */
#line 218 "bison_Program.y"
                           {}
#line 1676 "bison_Program.tab.c"
    break;

  case 53: /* METHOD_DECLARATION: ACCESS_MODIFIER VARIABLE_TYPE IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS STATEMENT_RETURN TOKEN_RBRACE  */
#line 222 "bison_Program.y"
                                                                                                                                                            { printf("Method Declaration\n"); }
#line 1682 "bison_Program.tab.c"
    break;

  case 54: /* METHOD_DECLARATION: ACCESS_MODIFIER TOKEN_VOID IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 223 "bison_Program.y"
                                                                                                                                        { printf("Method Declaration\n"); }
#line 1688 "bison_Program.tab.c"
    break;

  case 55: /* METHOD_CALL: IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 226 "bison_Program.y"
                                                                                 { printf("Method call\n");}
#line 1694 "bison_Program.tab.c"
    break;

  case 56: /* ACCESS_MODIFIER: TOKEN_PUBLIC  */
#line 229 "bison_Program.y"
                              {printf("public scope\n");}
#line 1700 "bison_Program.tab.c"
    break;

  case 57: /* ACCESS_MODIFIER: TOKEN_PRIVATE  */
#line 230 "bison_Program.y"
                               {printf("private scope\n");}
#line 1706 "bison_Program.tab.c"
    break;

  case 58: /* VARIABLE_TYPE: TOKEN_INT  */
#line 233 "bison_Program.y"
                         { (yyval.strvalue) = "int"; }
#line 1712 "bison_Program.tab.c"
    break;

  case 59: /* VARIABLE_TYPE: TOKEN_CHAR  */
#line 234 "bison_Program.y"
                          { (yyval.strvalue) = "char"; }
#line 1718 "bison_Program.tab.c"
    break;

  case 60: /* VARIABLE_TYPE: TOKEN_DOUBLE  */
#line 235 "bison_Program.y"
                            { (yyval.strvalue) = "double"; }
#line 1724 "bison_Program.tab.c"
    break;

  case 61: /* VARIABLE_TYPE: TOKEN_BOOLEAN  */
#line 236 "bison_Program.y"
                             { (yyval.strvalue) = "boolean"; }
#line 1730 "bison_Program.tab.c"
    break;

  case 62: /* VARIABLE_TYPE: TOKEN_STRING  */
#line 237 "bison_Program.y"
                            { (yyval.strvalue) = "string"; }
#line 1736 "bison_Program.tab.c"
    break;

  case 63: /* PARAMETER_LIST: VARIABLE_TYPE IDENTIFIER TOKEN_COMMA PARAMETER_LIST  */
#line 240 "bison_Program.y"
                                                                     { printf("Parameter List\n"); }
#line 1742 "bison_Program.tab.c"
    break;

  case 64: /* PARAMETER_LIST: VARIABLE_TYPE IDENTIFIER  */
#line 241 "bison_Program.y"
                                          { printf("Parameter List\n"); }
#line 1748 "bison_Program.tab.c"
    break;

  case 65: /* PARAMETER_LIST: %empty  */
#line 242 "bison_Program.y"
                        {}
#line 1754 "bison_Program.tab.c"
    break;

  case 66: /* BOOLEAN: TOKEN_TRUE  */
#line 244 "bison_Program.y"
                      {(yyval.intvalue)=1; printf("Assigned true\n");}
#line 1760 "bison_Program.tab.c"
    break;

  case 67: /* BOOLEAN: TOKEN_FALSE  */
#line 245 "bison_Program.y"
                      {(yyval.intvalue)=0; printf("Assigned false\n");}
#line 1766 "bison_Program.tab.c"
    break;

  case 68: /* CONDITION: BOOLEAN  */
#line 247 "bison_Program.y"
                    {(yyval.intvalue)=(yyvsp[0].intvalue);}
#line 1772 "bison_Program.tab.c"
    break;

  case 69: /* CONDITION: EXPRESSION COMPARISON EXPRESSION  */
#line 249 "bison_Program.y"
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
#line 1791 "bison_Program.tab.c"
    break;

  case 70: /* COMPARISON: TOKEN_LESS_THAN  */
#line 266 "bison_Program.y"
                             { (yyval.intvalue) = 1; printf("Less than\n"); }
#line 1797 "bison_Program.tab.c"
    break;

  case 71: /* COMPARISON: TOKEN_GREATER_THAN  */
#line 267 "bison_Program.y"
                                { (yyval.intvalue) = 2; printf("Greater than\n"); }
#line 1803 "bison_Program.tab.c"
    break;

  case 72: /* COMPARISON: TOKEN_LESS_THAN_EQUAL  */
#line 268 "bison_Program.y"
                                   { (yyval.intvalue) = 3; printf("Less or equal than \n");}
#line 1809 "bison_Program.tab.c"
    break;

  case 73: /* COMPARISON: TOKEN_GREATER_THAN_EQUAL  */
#line 269 "bison_Program.y"
                                      { (yyval.intvalue) = 4 ; printf("Greater or equal than\n"); }
#line 1815 "bison_Program.tab.c"
    break;

  case 74: /* COMPARISON: TOKEN_EQUAL  */
#line 270 "bison_Program.y"
                         { (yyval.intvalue) = 5 ; printf("Equal\n");}
#line 1821 "bison_Program.tab.c"
    break;

  case 75: /* COMPARISON: TOKEN_NOT_EQUAL  */
#line 271 "bison_Program.y"
                             { (yyval.intvalue) = 6 ; printf("Not equal\n"); }
#line 1827 "bison_Program.tab.c"
    break;

  case 76: /* COMPARISON: TOKEN_AND  */
#line 272 "bison_Program.y"
                        { (yyval.intvalue) = 7 ; printf("And");}
#line 1833 "bison_Program.tab.c"
    break;

  case 77: /* COMPARISON: TOKEN_OR  */
#line 273 "bison_Program.y"
                      { (yyval.intvalue) = 8 ; printf("Or");}
#line 1839 "bison_Program.tab.c"
    break;

  case 78: /* EXPRESSION: VALUE  */
#line 277 "bison_Program.y"
                   { (yyval.intvalue) = (yyvsp[0].intvalue);}
#line 1845 "bison_Program.tab.c"
    break;

  case 79: /* EXPRESSION: OPERATION  */
#line 278 "bison_Program.y"
                       { (yyval.intvalue) = (yyvsp[0].intvalue); }
#line 1851 "bison_Program.tab.c"
    break;

  case 80: /* EXPRESSION: STATEMENT_NEW  */
#line 279 "bison_Program.y"
                           { (yyval.intvalue) = (yyvsp[0].intvalue); }
#line 1857 "bison_Program.tab.c"
    break;

  case 81: /* STATEMENT_NEW: TOKEN_NEW VARIABLE_TYPE TOKEN_SEMICOLON  */
#line 285 "bison_Program.y"
                                                        { printf("New Statement\n"); }
#line 1863 "bison_Program.tab.c"
    break;

  case 82: /* STATEMENT_NEW: TOKEN_NEW IDENTIFIER TOKEN_LPAREN TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 286 "bison_Program.y"
                                                                               { printf("New Statement\n");
                  if (!isupper((yyvsp[-3].strvalue)[0])) {
                       yyerror("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   } }
#line 1873 "bison_Program.tab.c"
    break;

  case 83: /* VALUE: NUMBER  */
#line 293 "bison_Program.y"
               {(yyval.intvalue) = (yyvsp[0].intvalue); printf("Assigned int Value: %d\n", (yyval.intvalue)); }
#line 1879 "bison_Program.tab.c"
    break;

  case 84: /* VALUE: TOKEN_LPAREN OPERATION TOKEN_RPAREN  */
#line 294 "bison_Program.y"
                                            { (yyval.intvalue) = (yyvsp[-1].intvalue);}
#line 1885 "bison_Program.tab.c"
    break;

  case 85: /* VALUE: BOOLEAN  */
#line 295 "bison_Program.y"
                {(yyval.intvalue)= (yyvsp[0].intvalue);}
#line 1891 "bison_Program.tab.c"
    break;

  case 86: /* VALUE: DOUBLE_NUMBER  */
#line 296 "bison_Program.y"
                      {(yyval.intvalue) =(yyvsp[0].dvalue); printf("Assigned double Value: %f\n", (yyvsp[0].dvalue));}
#line 1897 "bison_Program.tab.c"
    break;

  case 87: /* VALUE: CHARACTER  */
#line 297 "bison_Program.y"
                  {(yyval.intvalue)= (yyvsp[0].charvalue); printf("Char value: %c\n",(yyvsp[0].charvalue));}
#line 1903 "bison_Program.tab.c"
    break;

  case 88: /* VALUE: STRING_LITERAL  */
#line 298 "bison_Program.y"
                       { (yyval.intvalue) = STRING_LITERAL; printf("Assigned String Value: %s\n", (yyvsp[0].strvalue)); }
#line 1909 "bison_Program.tab.c"
    break;

  case 89: /* VALUE: IDENTIFIER  */
#line 299 "bison_Program.y"
                   { }
#line 1915 "bison_Program.tab.c"
    break;

  case 90: /* OPERATION: ADDITION  */
#line 302 "bison_Program.y"
                     { (yyval.intvalue) = (yyvsp[0].intvalue); }
#line 1921 "bison_Program.tab.c"
    break;

  case 91: /* OPERATION: MULTIPLICATION  */
#line 303 "bison_Program.y"
                           { (yyval.intvalue) = (yyvsp[0].intvalue);  }
#line 1927 "bison_Program.tab.c"
    break;

  case 92: /* OPERATION: SUBTRACTION  */
#line 304 "bison_Program.y"
                        { (yyval.intvalue) = (yyvsp[0].intvalue); }
#line 1933 "bison_Program.tab.c"
    break;

  case 93: /* OPERATION: DIVISION  */
#line 305 "bison_Program.y"
                     { (yyval.intvalue) = (yyvsp[0].intvalue); }
#line 1939 "bison_Program.tab.c"
    break;

  case 94: /* ADDITION: VALUE TOKEN_PLUS VALUE  */
#line 309 "bison_Program.y"
                                 { (yyval.intvalue) = (yyvsp[-2].intvalue) + (yyvsp[0].intvalue); printf("Addition: %d\n", (yyval.intvalue)); }
#line 1945 "bison_Program.tab.c"
    break;

  case 95: /* MULTIPLICATION: VALUE TOKEN_MULT VALUE  */
#line 312 "bison_Program.y"
                                        { (yyval.intvalue) = (yyvsp[-2].intvalue) * (yyvsp[0].intvalue); printf("Multiplication: %d\n", (yyval.intvalue)); }
#line 1951 "bison_Program.tab.c"
    break;

  case 96: /* SUBTRACTION: VALUE TOKEN_MINUS VALUE  */
#line 314 "bison_Program.y"
                                      { (yyval.intvalue) = (yyvsp[-2].intvalue) - (yyvsp[0].intvalue); printf("Subtraction: %d\n", (yyval.intvalue)); }
#line 1957 "bison_Program.tab.c"
    break;

  case 97: /* DIVISION: VALUE TOKEN_DIV VALUE  */
#line 317 "bison_Program.y"
                          {
        if ((yyvsp[0].intvalue) == 0) {
            yyerror("Error: Division by zero");
            YYABORT;
        } else {
            (yyval.intvalue) = (yyvsp[-2].intvalue) / (yyvsp[0].intvalue); 
            printf("Division: %d\n", (yyval.intvalue)); 
        }
    }
#line 1971 "bison_Program.tab.c"
    break;


#line 1975 "bison_Program.tab.c"

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

#line 328 "bison_Program.y"

/* CODE */
int yydebug=0;
void yyerror( char *s) {
    fprintf(stderr, "%s at line %d\n", s, yylineno);
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
