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


extern int line_number;
int str_buffer[];
int yylex();

int error_count=0; 
int error_type=0;

void yyerror(char *s)

#line 88 "bison_Program.tab.c"

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

#include "bison_Program.tab.h"
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
  YYSYMBOL_TOKEN_START = 62,               /* TOKEN_START  */
  YYSYMBOL_TOKEN_END = 63,                 /* TOKEN_END  */
  YYSYMBOL_TOKEN_COLON = 64,               /* TOKEN_COLON  */
  YYSYMBOL_TOKEN_VOID = 65,                /* TOKEN_VOID  */
  YYSYMBOL_TOKEN_SUB = 66,                 /* TOKEN_SUB  */
  YYSYMBOL_TOKEN_MUL = 67,                 /* TOKEN_MUL  */
  YYSYMBOL_UMINUS = 68,                    /* UMINUS  */
  YYSYMBOL_LOWER_ELSE = 69,                /* LOWER_ELSE  */
  YYSYMBOL_NUMBER = 70,                    /* NUMBER  */
  YYSYMBOL_IDENTIFIER = 71,                /* IDENTIFIER  */
  YYSYMBOL_CLASS_IDENTIFIER = 72,          /* CLASS_IDENTIFIER  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_PROGRAM = 74,                   /* PROGRAM  */
  YYSYMBOL_STATEMENTS = 75,                /* STATEMENTS  */
  YYSYMBOL_STATEMENT = 76,                 /* STATEMENT  */
  YYSYMBOL_STATEMENT_IF_ELSE = 77,         /* STATEMENT_IF_ELSE  */
  YYSYMBOL_ELSE_CLAUSE = 78,               /* ELSE_CLAUSE  */
  YYSYMBOL_STATEMENT_WHILE = 79,           /* STATEMENT_WHILE  */
  YYSYMBOL_STATEMENT_BREAK = 80,           /* STATEMENT_BREAK  */
  YYSYMBOL_STATEMENT_ASSIGN = 81,          /* STATEMENT_ASSIGN  */
  YYSYMBOL_STATEMENT_SWITCH = 82,          /* STATEMENT_SWITCH  */
  YYSYMBOL_SWITCH_BODY = 83,               /* SWITCH_BODY  */
  YYSYMBOL_STATEMENT_RETURN = 84,          /* STATEMENT_RETURN  */
  YYSYMBOL_STATEMENT_CLASS = 85,           /* STATEMENT_CLASS  */
  YYSYMBOL_CREATE_CLASS_OBJECT = 86,       /* CREATE_CLASS_OBJECT  */
  YYSYMBOL_STATEMENT_DO_WHILE = 87,        /* STATEMENT_DO_WHILE  */
  YYSYMBOL_ACCESS_TO_CLASS_MEMBERS = 88,   /* ACCESS_TO_CLASS_MEMBERS  */
  YYSYMBOL_STATEMENT_FOR = 89,             /* STATEMENT_FOR  */
  YYSYMBOL_COMMENTS = 90,                  /* COMMENTS  */
  YYSYMBOL_STATEMENT_PRINT = 91,           /* STATEMENT_PRINT  */
  YYSYMBOL_PRINT_OPTIONAL_VAR = 92,        /* PRINT_OPTIONAL_VAR  */
  YYSYMBOL_VARIABLE_DECLARATION = 93,      /* VARIABLE_DECLARATION  */
  YYSYMBOL_METHOD_DECLARATION = 94,        /* METHOD_DECLARATION  */
  YYSYMBOL_METHOD_TYPE = 95,               /* METHOD_TYPE  */
  YYSYMBOL_RETURN_TYPE = 96,               /* RETURN_TYPE  */
  YYSYMBOL_ACCESS_MODIFIER = 97,           /* ACCESS_MODIFIER  */
  YYSYMBOL_VARIABLE_TYPE = 98,             /* VARIABLE_TYPE  */
  YYSYMBOL_PARAMETER_LIST = 99,            /* PARAMETER_LIST  */
  YYSYMBOL_CONDITION = 100,                /* CONDITION  */
  YYSYMBOL_COMPARISON = 101,               /* COMPARISON  */
  YYSYMBOL_EXPRESSION = 102,               /* EXPRESSION  */
  YYSYMBOL_BOOLEAN = 103,                  /* BOOLEAN  */
  YYSYMBOL_STATEMENT_NEW = 104,            /* STATEMENT_NEW  */
  YYSYMBOL_VALUE = 105,                    /* VALUE  */
  YYSYMBOL_OPERATION = 106,                /* OPERATION  */
  YYSYMBOL_OPERATION_CONTINUE = 107,       /* OPERATION_CONTINUE  */
  YYSYMBOL_ADDITION = 108,                 /* ADDITION  */
  YYSYMBOL_MULTIPLICATION = 109,           /* MULTIPLICATION  */
  YYSYMBOL_SUBTRACTION = 110,              /* SUBTRACTION  */
  YYSYMBOL_DIVISION = 111                  /* DIVISION  */
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
#define YYLAST   243

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  231

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   327


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
      65,    66,    67,    68,    69,    70,    71,    72
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    73,    73,    75,    76,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    96,
      99,   100,   101,   104,   107,   110,   111,   114,   117,   118,
     119,   122,   125,   128,   131,   134,   137,   140,   141,   144,
     145,   148,   149,   152,   153,   154,   155,   158,   159,   160,
     161,   164,   168,   169,   172,   173,   176,   177,   178,   179,
     180,   184,   185,   188,   189,   190,   193,   194,   195,   196,
     197,   198,   201,   202,   203,   204,   205,   208,   209,   212,
     213,   216,   217,   220,   221,   222,   223,   226,   227,   228,
     229,   230,   233,   236,   239,   243
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
  "TOKEN_START", "TOKEN_END", "TOKEN_COLON", "TOKEN_VOID", "TOKEN_SUB",
  "TOKEN_MUL", "UMINUS", "LOWER_ELSE", "NUMBER", "IDENTIFIER",
  "CLASS_IDENTIFIER", "$accept", "PROGRAM", "STATEMENTS", "STATEMENT",
  "STATEMENT_IF_ELSE", "ELSE_CLAUSE", "STATEMENT_WHILE", "STATEMENT_BREAK",
  "STATEMENT_ASSIGN", "STATEMENT_SWITCH", "SWITCH_BODY",
  "STATEMENT_RETURN", "STATEMENT_CLASS", "CREATE_CLASS_OBJECT",
  "STATEMENT_DO_WHILE", "ACCESS_TO_CLASS_MEMBERS", "STATEMENT_FOR",
  "COMMENTS", "STATEMENT_PRINT", "PRINT_OPTIONAL_VAR",
  "VARIABLE_DECLARATION", "METHOD_DECLARATION", "METHOD_TYPE",
  "RETURN_TYPE", "ACCESS_MODIFIER", "VARIABLE_TYPE", "PARAMETER_LIST",
  "CONDITION", "COMPARISON", "EXPRESSION", "BOOLEAN", "STATEMENT_NEW",
  "VALUE", "OPERATION", "OPERATION_CONTINUE", "ADDITION", "MULTIPLICATION",
  "SUBTRACTION", "DIVISION", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-152)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -51,   129,    20,    25,    34,    -3,    42,    43,    47,   101,
    -152,  -152,  -152,  -152,  -152,  -152,  -152,    46,  -152,  -152,
    -152,   -23,   -25,    14,   129,  -152,  -152,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,    73,  -152,  -152,  -152,  -152,  -152,
       8,  -152,    17,    37,  -152,   101,   101,   129,    39,   101,
    -152,  -152,  -152,     9,  -152,  -152,  -152,    54,  -152,  -152,
      48,  -152,  -152,  -152,  -152,  -152,    53,   101,    68,    80,
    -152,  -152,   101,    85,    49,    69,    81,    82,    92,   121,
     126,   144,   145,   149,   146,  -152,  -152,  -152,   -21,   -21,
     -21,   -21,   -12,   151,  -152,   154,   153,    83,   155,   152,
     156,   157,  -152,   159,  -152,  -152,  -152,  -152,  -152,  -152,
     101,   160,   174,   101,   180,    91,    91,    91,    91,   158,
     101,   161,  -152,   123,  -152,   122,   166,    78,    83,    40,
    -152,   129,     7,   129,   168,   172,   101,  -152,   170,   173,
     175,   176,  -152,  -152,  -152,  -152,  -152,   169,   181,   177,
     178,   182,    50,   143,   183,   184,   185,   186,   101,   101,
     188,   101,    39,   162,   -21,   -21,   -21,   -21,  -152,  -152,
     187,    83,   129,   190,   143,   192,   129,   193,   206,  -152,
    -152,  -152,   191,   194,   129,    48,   195,   197,   198,   199,
     196,  -152,   202,  -152,    81,  -152,   129,   203,   129,   129,
      16,  -152,  -152,   205,    58,  -152,  -152,  -152,  -152,  -152,
    -152,   207,  -152,   208,   209,   129,   129,  -152,   210,   179,
    -152,  -152,  -152,  -152,   211,   212,  -152,   129,  -152,  -152,
    -152
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,    59,    60,     0,    37,    38,
      53,     0,     0,     0,     3,     7,     8,    17,    13,    11,
      12,    14,    15,     9,     0,    10,    18,    16,     6,     5,
       0,    51,     0,     0,     1,     0,     0,     0,     0,     0,
      24,    77,    78,     0,    76,    81,    82,     0,    75,    74,
      72,    73,    83,    84,    85,    86,     0,     0,     0,     0,
       2,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    79,    31,     0,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,    45,     0,    66,    67,    70,    71,    68,    69,
       0,     0,     0,     0,     0,    87,    87,    87,    87,     0,
       0,     0,    25,     0,    26,     0,     0,     0,     0,     0,
      43,     0,    63,     0,     0,     0,     0,    27,     0,     0,
       0,     0,    92,    94,    93,    95,    39,    41,     0,     0,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    40,
       0,     0,     0,     0,     0,     0,     0,     0,    22,    64,
      65,    23,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    61,     0,    32,     0,    52,     0,     0,     6,     0,
       0,    19,    34,     0,    28,    88,    89,    90,    91,    33,
      46,     0,    47,     0,     0,     6,     0,    21,     0,     0,
      30,    44,    49,    48,     0,     0,    36,     0,    50,    20,
      29
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,   -24,  -151,    23,  -152,  -152,  -152,   -45,  -152,
      29,  -152,  -152,  -152,  -152,  -152,  -152,  -152,  -152,    87,
    -121,    89,   -37,   -40,  -110,   -41,  -120,   -39,  -152,    -5,
    -152,  -152,   -75,    -9,   -77,  -152,  -152,  -152,  -152
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    23,    24,    25,   201,    26,    27,    28,    29,
     137,    30,    31,    32,    33,    34,    35,    36,    37,   121,
      38,    39,    40,    41,    42,    43,   126,    79,   110,    80,
      58,    59,    60,    61,   142,    62,    63,    64,    65
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      71,    77,    76,    83,    57,    75,   152,    81,   154,   156,
      67,     1,    86,   115,   116,   117,   118,   153,   119,     3,
      44,   192,   120,    82,    47,   197,    12,    13,    14,    15,
      16,    74,    68,   204,    12,    13,    14,    15,    16,   143,
     144,   145,   174,   216,    84,   211,    69,   213,   214,    55,
      56,   191,   158,   159,    45,   198,   125,    12,    13,    14,
      15,    16,    93,    46,   224,    10,    11,    96,   136,   219,
     155,    48,    49,    50,   135,    66,   230,    70,   215,    73,
      87,    85,    20,    88,    89,    90,    91,   125,   125,   185,
     185,   185,   185,    10,    11,    12,    13,    14,    15,    16,
      12,    13,    14,    15,    16,   132,    72,   157,    78,   160,
      21,    92,    77,    95,    97,   147,    75,   183,   102,   179,
     180,    98,   182,    51,    52,    53,   138,   139,   140,   141,
     125,   163,     3,   195,   194,     4,     5,     6,     7,    94,
      99,     8,     9,    20,    10,    11,    12,    13,    14,    15,
      16,   103,   100,   101,    17,   186,   187,   188,   189,    54,
      12,    13,    14,    15,    16,   104,   105,   106,   107,   108,
     109,    55,    56,   112,   111,   113,   114,   122,   123,   124,
     134,   128,   127,   130,   146,   129,   131,   133,    18,    19,
     136,   148,   225,   150,    20,   149,   151,   161,   162,   164,
      21,    22,   165,   120,   166,   167,   170,   169,    20,   172,
     200,   176,   171,   175,   178,   177,   181,   190,   193,   196,
     199,   202,   209,   217,   203,   205,   184,   206,   207,   208,
     210,   212,   218,   220,   168,   221,   222,   223,   226,   228,
     229,   173,     0,   227
};

static const yytype_int16 yycheck[] =
{
      24,    42,    42,    48,     9,    42,   127,    46,   128,   129,
      33,    62,    53,    88,    89,    90,    91,   127,    30,     3,
       0,   172,    34,    47,    27,   176,    17,    18,    19,    20,
      21,    14,    55,   184,    17,    18,    19,    20,    21,   116,
     117,   118,   152,    27,    49,   196,    71,   198,   199,    70,
      71,   171,    45,    46,    29,   176,    97,    17,    18,    19,
      20,    21,    67,    29,   215,    15,    16,    72,    10,    11,
      30,    29,    29,    26,   113,    29,   227,    63,   199,    71,
      26,    72,    65,    35,    36,    37,    38,   128,   129,   164,
     165,   166,   167,    15,    16,    17,    18,    19,    20,    21,
      17,    18,    19,    20,    21,   110,    33,   131,    71,   133,
      71,    58,   153,    33,    29,   120,   153,   162,    26,   158,
     159,    72,   161,    22,    23,    24,    35,    36,    37,    38,
     171,   136,     3,   174,   174,     6,     7,     8,     9,    71,
      71,    12,    13,    65,    15,    16,    17,    18,    19,    20,
      21,    30,    71,    71,    25,   164,   165,   166,   167,    58,
      17,    18,    19,    20,    21,    39,    40,    41,    42,    43,
      44,    70,    71,    28,    30,    26,    30,    26,    24,    26,
       6,    29,    27,    26,    26,    29,    27,    27,    59,    60,
      10,    30,   216,    71,    65,    72,    30,    29,    26,    29,
      71,    72,    29,    34,    29,    29,    29,    26,    65,    27,
       4,    27,    34,    30,    28,    30,    28,    30,    28,    27,
      27,    30,    26,   200,    30,    30,    64,    30,    30,    30,
      28,    28,    27,   204,   147,    28,    28,    28,    28,    28,
      28,   152,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    62,    74,     3,     6,     7,     8,     9,    12,    13,
      15,    16,    17,    18,    19,    20,    21,    25,    59,    60,
      65,    71,    72,    75,    76,    77,    79,    80,    81,    82,
      84,    85,    86,    87,    88,    89,    90,    91,    93,    94,
      95,    96,    97,    98,     0,    29,    29,    27,    29,    29,
      26,    22,    23,    24,    58,    70,    71,   102,   103,   104,
     105,   106,   108,   109,   110,   111,    29,    33,    55,    71,
      63,    75,    33,    71,    14,    95,    96,    98,    71,   100,
     102,   100,    75,    81,   102,    72,    98,    26,    35,    36,
      37,    38,    58,   102,    71,    33,   102,    29,    72,    71,
      71,    71,    26,    30,    39,    40,    41,    42,    43,    44,
     101,    30,    28,    26,    30,   105,   105,   105,   105,    30,
      34,    92,    26,    24,    26,    98,    99,    27,    29,    29,
      26,    27,   102,    27,     6,   100,    10,    83,    35,    36,
      37,    38,   107,   107,   107,   107,    26,   102,    30,    72,
      71,    30,    93,    97,    99,    30,    99,    75,    45,    46,
      75,    29,    26,   102,    29,    29,    29,    29,    92,    26,
      29,    34,    27,    94,    97,    30,    27,    30,    28,   100,
     100,    28,   100,    81,    64,   105,   106,   106,   106,   106,
      30,    99,    76,    28,    96,    98,    27,    76,    93,    27,
       4,    78,    30,    30,    76,    30,    30,    30,    30,    26,
      28,    76,    28,    76,    76,    93,    27,    77,    27,    11,
      83,    28,    28,    28,    76,    75,    28,    64,    28,    28,
      76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    73,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    76,    76,    76,    76,    76,    76,    77,
      78,    78,    78,    79,    80,    81,    81,    82,    83,    83,
      83,    84,    85,    86,    87,    88,    89,    90,    90,    91,
      91,    92,    92,    93,    93,    93,    93,    94,    94,    94,
      94,    95,    96,    96,    97,    97,    98,    98,    98,    98,
      98,    99,    99,   100,   100,   100,   101,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   106,   106,   107,   107,   107,
     107,   107,   108,   109,   110,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     8,
       4,     2,     0,     7,     2,     4,     4,     5,     4,     7,
       5,     3,     7,     8,     8,     3,    10,     1,     1,     5,
       6,     2,     3,     4,     9,     3,     8,     8,     9,     9,
      10,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     2,     3,     5,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     1,     1,     1,     1,     0,     4,     4,
       4,     4,     4,     4,     4,     4
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
#line 73 "bison_Program.y"
                                          { printf("Program parsed successfully.\n"); }
#line 1356 "bison_Program.tab.c"
    break;

  case 3: /* STATEMENTS: STATEMENT  */
#line 75 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1362 "bison_Program.tab.c"
    break;

  case 4: /* STATEMENTS: STATEMENT STATEMENTS  */
#line 76 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1368 "bison_Program.tab.c"
    break;

  case 5: /* STATEMENT: METHOD_DECLARATION  */
#line 78 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1374 "bison_Program.tab.c"
    break;

  case 6: /* STATEMENT: VARIABLE_DECLARATION  */
#line 79 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1380 "bison_Program.tab.c"
    break;

  case 7: /* STATEMENT: STATEMENT_IF_ELSE  */
#line 80 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1386 "bison_Program.tab.c"
    break;

  case 8: /* STATEMENT: STATEMENT_WHILE  */
#line 81 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1392 "bison_Program.tab.c"
    break;

  case 9: /* STATEMENT: STATEMENT_DO_WHILE  */
#line 82 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1398 "bison_Program.tab.c"
    break;

  case 10: /* STATEMENT: STATEMENT_FOR  */
#line 83 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1404 "bison_Program.tab.c"
    break;

  case 11: /* STATEMENT: STATEMENT_SWITCH  */
#line 84 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1410 "bison_Program.tab.c"
    break;

  case 12: /* STATEMENT: STATEMENT_RETURN  */
#line 85 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1416 "bison_Program.tab.c"
    break;

  case 13: /* STATEMENT: STATEMENT_ASSIGN  */
#line 86 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1422 "bison_Program.tab.c"
    break;

  case 14: /* STATEMENT: STATEMENT_CLASS  */
#line 87 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1428 "bison_Program.tab.c"
    break;

  case 15: /* STATEMENT: CREATE_CLASS_OBJECT  */
#line 88 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1434 "bison_Program.tab.c"
    break;

  case 16: /* STATEMENT: STATEMENT_PRINT  */
#line 89 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1440 "bison_Program.tab.c"
    break;

  case 17: /* STATEMENT: STATEMENT_BREAK  */
#line 90 "bison_Program.y"
                                       { printf("Statement\n"); }
#line 1446 "bison_Program.tab.c"
    break;

  case 18: /* STATEMENT: COMMENTS  */
#line 91 "bison_Program.y"
                                       { printf("Comment\n"); }
#line 1452 "bison_Program.tab.c"
    break;

  case 19: /* STATEMENT_IF_ELSE: TOKEN_IF TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE ELSE_CLAUSE  */
#line 96 "bison_Program.y"
                                                                                                                 { printf("IF Statement\n"); }
#line 1458 "bison_Program.tab.c"
    break;

  case 22: /* ELSE_CLAUSE: %empty  */
#line 101 "bison_Program.y"
                                                       {}
#line 1464 "bison_Program.tab.c"
    break;

  case 23: /* STATEMENT_WHILE: TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  */
#line 104 "bison_Program.y"
                                                                                                      { printf("WHILE Statement\n"); }
#line 1470 "bison_Program.tab.c"
    break;

  case 24: /* STATEMENT_BREAK: TOKEN_BREAK TOKEN_SEMICOLON  */
#line 107 "bison_Program.y"
                                             { printf("BREAK Statement\n"); }
#line 1476 "bison_Program.tab.c"
    break;

  case 25: /* STATEMENT_ASSIGN: IDENTIFIER TOKEN_ASSIGN EXPRESSION TOKEN_SEMICOLON  */
#line 110 "bison_Program.y"
                                                                     { printf("Assignment Statement\n"); }
#line 1482 "bison_Program.tab.c"
    break;

  case 27: /* STATEMENT_SWITCH: TOKEN_SWITCH TOKEN_LPAREN EXPRESSION TOKEN_RPAREN SWITCH_BODY  */
#line 114 "bison_Program.y"
                                                                                { printf("SWITCH Statement\n"); }
#line 1488 "bison_Program.tab.c"
    break;

  case 28: /* SWITCH_BODY: TOKEN_CASE EXPRESSION TOKEN_COLON STATEMENT  */
#line 117 "bison_Program.y"
                                                         { printf("CASE Statement\n"); }
#line 1494 "bison_Program.tab.c"
    break;

  case 29: /* SWITCH_BODY: TOKEN_CASE EXPRESSION TOKEN_COLON STATEMENT TOKEN_DEFAULT TOKEN_COLON STATEMENT  */
#line 118 "bison_Program.y"
                                                                                             { printf("DEFAULT Statement\n"); }
#line 1500 "bison_Program.tab.c"
    break;

  case 30: /* SWITCH_BODY: TOKEN_CASE EXPRESSION TOKEN_COLON STATEMENT SWITCH_BODY  */
#line 119 "bison_Program.y"
                                                                     { printf("CASE Statement\n"); }
#line 1506 "bison_Program.tab.c"
    break;

  case 31: /* STATEMENT_RETURN: TOKEN_RETURN EXPRESSION TOKEN_SEMICOLON  */
#line 122 "bison_Program.y"
                                                          { printf("RETURN Statement\n"); }
#line 1512 "bison_Program.tab.c"
    break;

  case 32: /* STATEMENT_CLASS: ACCESS_MODIFIER TOKEN_CLASS CLASS_IDENTIFIER TOKEN_LBRACE VARIABLE_DECLARATION METHOD_DECLARATION TOKEN_RBRACE  */
#line 125 "bison_Program.y"
                                                                                                                               { printf("CLASS Statement\n"); }
#line 1518 "bison_Program.tab.c"
    break;

  case 33: /* CREATE_CLASS_OBJECT: CLASS_IDENTIFIER IDENTIFIER TOKEN_ASSIGN TOKEN_NEW CLASS_IDENTIFIER TOKEN_LPAREN TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 128 "bison_Program.y"
                                                                                                                                   { printf("Create Class Object Statement\n"); }
#line 1524 "bison_Program.tab.c"
    break;

  case 34: /* STATEMENT_DO_WHILE: TOKEN_DO TOKEN_LBRACE STATEMENTS TOKEN_RBRACE TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN  */
#line 131 "bison_Program.y"
                                                                                                                  { printf("DO WHILE Statement\n"); }
#line 1530 "bison_Program.tab.c"
    break;

  case 35: /* ACCESS_TO_CLASS_MEMBERS: IDENTIFIER TOKEN_DOT IDENTIFIER  */
#line 134 "bison_Program.y"
                                                         { printf("Access to Class Members Statement\n"); }
#line 1536 "bison_Program.tab.c"
    break;

  case 36: /* STATEMENT_FOR: TOKEN_FOR TOKEN_LPAREN STATEMENT_ASSIGN TOKEN_SEMICOLON CONDITION TOKEN_SEMICOLON STATEMENT_ASSIGN TOKEN_RPAREN TOKEN_LBRACE TOKEN_RBRACE  */
#line 137 "bison_Program.y"
                                                                                                                                                         { printf("FOR Statement\n"); }
#line 1542 "bison_Program.tab.c"
    break;

  case 37: /* COMMENTS: TOKEN_ONE_LINE_COMMENT  */
#line 140 "bison_Program.y"
                                  { printf("One Line Comment\n"); }
#line 1548 "bison_Program.tab.c"
    break;

  case 38: /* COMMENTS: TOKEN_MULTIPLE_LINE_COMMENTS  */
#line 141 "bison_Program.y"
                                        { printf("Multiple Line Comment\n"); }
#line 1554 "bison_Program.tab.c"
    break;

  case 39: /* STATEMENT_PRINT: TOKEN_OUT_PRINT TOKEN_LPAREN STRING_LITERAL TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 144 "bison_Program.y"
                                                                                          { printf("Print Statement\n"); printf("%s\n", (yyvsp[-2].strvalue)); }
#line 1560 "bison_Program.tab.c"
    break;

  case 40: /* STATEMENT_PRINT: TOKEN_OUT_PRINT TOKEN_LPAREN STRING_LITERAL PRINT_OPTIONAL_VAR TOKEN_RPAREN TOKEN_SEMICOLON  */
#line 145 "bison_Program.y"
                                                                                                             { printf("Print Statement\n"); printf("%s\n", (yyvsp[-3].strvalue), (yyvsp[-1].strvalue)); }
#line 1566 "bison_Program.tab.c"
    break;

  case 43: /* VARIABLE_DECLARATION: ACCESS_MODIFIER VARIABLE_TYPE IDENTIFIER TOKEN_SEMICOLON  */
#line 152 "bison_Program.y"
                                                                               { printf("Variable Declaration\n"); }
#line 1572 "bison_Program.tab.c"
    break;

  case 44: /* VARIABLE_DECLARATION: ACCESS_MODIFIER METHOD_TYPE IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENT TOKEN_RBRACE  */
#line 153 "bison_Program.y"
                                                                                                                                            { printf("Method Declaration\n"); }
#line 1578 "bison_Program.tab.c"
    break;

  case 45: /* VARIABLE_DECLARATION: VARIABLE_TYPE IDENTIFIER TOKEN_SEMICOLON  */
#line 154 "bison_Program.y"
                                                                { printf("Variable Declaration\n"); }
#line 1584 "bison_Program.tab.c"
    break;

  case 46: /* VARIABLE_DECLARATION: METHOD_TYPE IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENT TOKEN_RBRACE  */
#line 155 "bison_Program.y"
                                                                                                                           { printf("Method Declaration\n"); }
#line 1590 "bison_Program.tab.c"
    break;

  case 47: /* METHOD_DECLARATION: ACCESS_MODIFIER RETURN_TYPE IDENTIFIER TOKEN_LPAREN TOKEN_RPAREN TOKEN_LBRACE STATEMENT TOKEN_RBRACE  */
#line 158 "bison_Program.y"
                                                                                                                         { printf("Method Declaration\n"); }
#line 1596 "bison_Program.tab.c"
    break;

  case 48: /* METHOD_DECLARATION: ACCESS_MODIFIER RETURN_TYPE IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENT TOKEN_RBRACE  */
#line 159 "bison_Program.y"
                                                                                                                                        { printf("Method Declaration\n"); }
#line 1602 "bison_Program.tab.c"
    break;

  case 49: /* METHOD_DECLARATION: ACCESS_MODIFIER RETURN_TYPE IDENTIFIER TOKEN_LPAREN TOKEN_RPAREN TOKEN_LBRACE VARIABLE_DECLARATION STATEMENT TOKEN_RBRACE  */
#line 160 "bison_Program.y"
                                                                                                                                               { printf("Method Declaration\n"); }
#line 1608 "bison_Program.tab.c"
    break;

  case 50: /* METHOD_DECLARATION: ACCESS_MODIFIER RETURN_TYPE IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE VARIABLE_DECLARATION STATEMENT TOKEN_RBRACE  */
#line 161 "bison_Program.y"
                                                                                                                                                               { printf("Method Declaration\n"); }
#line 1614 "bison_Program.tab.c"
    break;

  case 51: /* METHOD_TYPE: RETURN_TYPE  */
#line 164 "bison_Program.y"
                         { printf("Method Type\n"); }
#line 1620 "bison_Program.tab.c"
    break;

  case 52: /* RETURN_TYPE: VARIABLE_TYPE  */
#line 168 "bison_Program.y"
                           { printf("Return Type\n"); }
#line 1626 "bison_Program.tab.c"
    break;

  case 53: /* RETURN_TYPE: TOKEN_VOID  */
#line 169 "bison_Program.y"
                        { printf("Void\n"); }
#line 1632 "bison_Program.tab.c"
    break;

  case 54: /* ACCESS_MODIFIER: TOKEN_PUBLIC  */
#line 172 "bison_Program.y"
                              { printf("Public\n"); }
#line 1638 "bison_Program.tab.c"
    break;

  case 55: /* ACCESS_MODIFIER: TOKEN_PRIVATE  */
#line 173 "bison_Program.y"
                               { printf("Private\n"); }
#line 1644 "bison_Program.tab.c"
    break;

  case 56: /* VARIABLE_TYPE: TOKEN_INT  */
#line 176 "bison_Program.y"
                         { printf("Int\n"); }
#line 1650 "bison_Program.tab.c"
    break;

  case 57: /* VARIABLE_TYPE: TOKEN_CHAR  */
#line 177 "bison_Program.y"
                           { printf("Char\n"); }
#line 1656 "bison_Program.tab.c"
    break;

  case 58: /* VARIABLE_TYPE: TOKEN_DOUBLE  */
#line 178 "bison_Program.y"
                             { printf("Double\n"); }
#line 1662 "bison_Program.tab.c"
    break;

  case 59: /* VARIABLE_TYPE: TOKEN_BOOLEAN  */
#line 179 "bison_Program.y"
                              { printf("Boolean\n"); }
#line 1668 "bison_Program.tab.c"
    break;

  case 60: /* VARIABLE_TYPE: TOKEN_STRING  */
#line 180 "bison_Program.y"
                             { printf("String\n"); }
#line 1674 "bison_Program.tab.c"
    break;

  case 61: /* PARAMETER_LIST: VARIABLE_TYPE IDENTIFIER TOKEN_COMMA PARAMETER_LIST  */
#line 184 "bison_Program.y"
                                                                     { printf("Parameter List\n"); }
#line 1680 "bison_Program.tab.c"
    break;

  case 62: /* PARAMETER_LIST: VARIABLE_TYPE IDENTIFIER  */
#line 185 "bison_Program.y"
                                          { printf("Parameter List\n"); }
#line 1686 "bison_Program.tab.c"
    break;

  case 63: /* CONDITION: EXPRESSION COMPARISON EXPRESSION  */
#line 188 "bison_Program.y"
                                             { printf("Condition\n"); }
#line 1692 "bison_Program.tab.c"
    break;

  case 64: /* CONDITION: EXPRESSION COMPARISON EXPRESSION TOKEN_AND CONDITION  */
#line 189 "bison_Program.y"
                                                                 { printf("Condition\n"); }
#line 1698 "bison_Program.tab.c"
    break;

  case 65: /* CONDITION: EXPRESSION COMPARISON EXPRESSION TOKEN_OR CONDITION  */
#line 190 "bison_Program.y"
                                                                { printf("Condition\n"); }
#line 1704 "bison_Program.tab.c"
    break;

  case 66: /* COMPARISON: TOKEN_LESS_THAN  */
#line 193 "bison_Program.y"
                             { printf("Comparison\n"); }
#line 1710 "bison_Program.tab.c"
    break;

  case 67: /* COMPARISON: TOKEN_GREATER_THAN  */
#line 194 "bison_Program.y"
                                { printf("Comparison\n"); }
#line 1716 "bison_Program.tab.c"
    break;

  case 68: /* COMPARISON: TOKEN_LESS_THAN_EQUAL  */
#line 195 "bison_Program.y"
                                   { printf("Comparison\n"); }
#line 1722 "bison_Program.tab.c"
    break;

  case 69: /* COMPARISON: TOKEN_GREATER_THAN_EQUAL  */
#line 196 "bison_Program.y"
                                      { printf("Comparison\n"); }
#line 1728 "bison_Program.tab.c"
    break;

  case 70: /* COMPARISON: TOKEN_EQUAL  */
#line 197 "bison_Program.y"
                         { printf("Comparison\n"); }
#line 1734 "bison_Program.tab.c"
    break;

  case 71: /* COMPARISON: TOKEN_NOT_EQUAL  */
#line 198 "bison_Program.y"
                             { printf("Comparison\n"); }
#line 1740 "bison_Program.tab.c"
    break;

  case 72: /* EXPRESSION: VALUE  */
#line 201 "bison_Program.y"
                   { printf("Expression\n"); }
#line 1746 "bison_Program.tab.c"
    break;

  case 73: /* EXPRESSION: OPERATION  */
#line 202 "bison_Program.y"
                       { printf("Expression\n"); }
#line 1752 "bison_Program.tab.c"
    break;

  case 74: /* EXPRESSION: STATEMENT_NEW  */
#line 203 "bison_Program.y"
                           { printf("Expression\n"); }
#line 1758 "bison_Program.tab.c"
    break;

  case 75: /* EXPRESSION: BOOLEAN  */
#line 204 "bison_Program.y"
                     { printf("Expression\n"); }
#line 1764 "bison_Program.tab.c"
    break;

  case 77: /* BOOLEAN: TOKEN_TRUE  */
#line 208 "bison_Program.y"
                     { printf("True\n"); }
#line 1770 "bison_Program.tab.c"
    break;

  case 78: /* BOOLEAN: TOKEN_FALSE  */
#line 209 "bison_Program.y"
                      { printf("False\n"); }
#line 1776 "bison_Program.tab.c"
    break;

  case 79: /* STATEMENT_NEW: TOKEN_NEW VARIABLE_TYPE  */
#line 212 "bison_Program.y"
                                        { printf("New Statement\n"); }
#line 1782 "bison_Program.tab.c"
    break;

  case 80: /* STATEMENT_NEW: TOKEN_NEW CLASS_IDENTIFIER  */
#line 213 "bison_Program.y"
                                           { printf("New Statement\n"); }
#line 1788 "bison_Program.tab.c"
    break;

  case 81: /* VALUE: NUMBER  */
#line 216 "bison_Program.y"
               { printf("Value\n"); }
#line 1794 "bison_Program.tab.c"
    break;

  case 82: /* VALUE: IDENTIFIER  */
#line 217 "bison_Program.y"
                   { printf("Value\n"); }
#line 1800 "bison_Program.tab.c"
    break;

  case 83: /* OPERATION: ADDITION  */
#line 220 "bison_Program.y"
                     { printf("Operation\n"); }
#line 1806 "bison_Program.tab.c"
    break;

  case 84: /* OPERATION: MULTIPLICATION  */
#line 221 "bison_Program.y"
                           { printf("Operation\n"); }
#line 1812 "bison_Program.tab.c"
    break;

  case 85: /* OPERATION: SUBTRACTION  */
#line 222 "bison_Program.y"
                        { printf("Operation\n"); }
#line 1818 "bison_Program.tab.c"
    break;

  case 86: /* OPERATION: DIVISION  */
#line 223 "bison_Program.y"
                     { printf("Operation\n"); }
#line 1824 "bison_Program.tab.c"
    break;

  case 87: /* OPERATION_CONTINUE: %empty  */
#line 226 "bison_Program.y"
                             {}
#line 1830 "bison_Program.tab.c"
    break;

  case 88: /* OPERATION_CONTINUE: TOKEN_PLUS TOKEN_LPAREN OPERATION TOKEN_RPAREN  */
#line 227 "bison_Program.y"
                                                                    { printf("Operation Continue PLUS\n"); }
#line 1836 "bison_Program.tab.c"
    break;

  case 89: /* OPERATION_CONTINUE: TOKEN_MINUS TOKEN_LPAREN OPERATION TOKEN_RPAREN  */
#line 228 "bison_Program.y"
                                                                     { printf("Operation Continue MINUS\n"); }
#line 1842 "bison_Program.tab.c"
    break;

  case 90: /* OPERATION_CONTINUE: TOKEN_MULT TOKEN_LPAREN OPERATION TOKEN_RPAREN  */
#line 229 "bison_Program.y"
                                                                    { printf("Operation Continue MULT\n"); }
#line 1848 "bison_Program.tab.c"
    break;

  case 91: /* OPERATION_CONTINUE: TOKEN_DIV TOKEN_LPAREN OPERATION TOKEN_RPAREN  */
#line 230 "bison_Program.y"
                                                                   { printf("Operation Continue DIV\n"); }
#line 1854 "bison_Program.tab.c"
    break;

  case 92: /* ADDITION: VALUE TOKEN_PLUS VALUE OPERATION_CONTINUE  */
#line 233 "bison_Program.y"
                                                    { printf("Addition\n"); }
#line 1860 "bison_Program.tab.c"
    break;

  case 93: /* MULTIPLICATION: VALUE TOKEN_MULT VALUE OPERATION_CONTINUE  */
#line 236 "bison_Program.y"
                                                           { printf("Multiplication\n"); }
#line 1866 "bison_Program.tab.c"
    break;

  case 94: /* SUBTRACTION: VALUE TOKEN_MINUS VALUE OPERATION_CONTINUE  */
#line 239 "bison_Program.y"
                                                         { printf("Subtraction\n"); }
#line 1872 "bison_Program.tab.c"
    break;

  case 95: /* DIVISION: VALUE TOKEN_DIV VALUE OPERATION_CONTINUE  */
#line 243 "bison_Program.y"
                                                    { printf("Division\n"); }
#line 1878 "bison_Program.tab.c"
    break;


#line 1882 "bison_Program.tab.c"

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

#line 254 "bison_Program.y"

 /* CODE */

void yyerror(char *s)
{
  error_count++;
    
    if(error_type==0){
        printf("-> ERROR at line %d caused by %s : %s\n", line_number, yytext, s);
    }else if(error_type==1){
        *str_buffer_ptr = '\0'; 
        printf("-> ERROR at line %d near \"%s\": %s\n", line_number, str_buffer, s);
    }
    error_type =0;
}



int main(int argc, char* argv[]){

if (argc < 2) {
        fprintf(stderr, "Usage: %s <input_file>\n", argv[0]);
        return 1;
    }

    yyin = fopen(argv[1], "r");
    if (!yyin) {
        fprintf(stderr, "Error opening file %s\n", argv[1]);
        return 1;
    }

    yyparse();

    fclose(yyin);

    if(error_count > 0){
        printf("Syntax Analysis failed ---> %d errors\n", error_count);
    }else{
        printf("Syntax Analysis completed successfully.\n");
    }
    return 0;

}
 



