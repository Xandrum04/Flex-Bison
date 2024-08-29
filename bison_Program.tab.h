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
#line 61 "bison_Program.y"

    int intvalue;
    double dvalue;
    char* strvalue;
    char charvalue;
    

#line 141 "bison_Program.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_BISON_PROGRAM_TAB_H_INCLUDED  */
