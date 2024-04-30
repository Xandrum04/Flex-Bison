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

#ifndef YY_YY_BISON_PROGRAM_TAB_H_INCLUDED
# define YY_YY_BISON_PROGRAM_TAB_H_INCLUDED
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
    TOKEN_START = 317,             /* TOKEN_START  */
    TOKEN_END = 318,               /* TOKEN_END  */
    TOKEN_COLON = 319,             /* TOKEN_COLON  */
    TOKEN_VOID = 320,              /* TOKEN_VOID  */
    TOKEN_SUB = 321,               /* TOKEN_SUB  */
    TOKEN_MUL = 322,               /* TOKEN_MUL  */
    UMINUS = 323,                  /* UMINUS  */
    NUMBER = 324,                  /* NUMBER  */
    IDENTIFIER = 325,              /* IDENTIFIER  */
    CLASS_IDENTIFIER = 326         /* CLASS_IDENTIFIER  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 39 "bison_Program.y"

    int intvalue;
    char* strvalue;
    double doublevalue;

#line 141 "bison_Program.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISON_PROGRAM_TAB_H_INCLUDED  */
