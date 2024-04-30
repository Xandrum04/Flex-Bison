%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "y.tab.h"

int error_type;

void yyerror(char *s);

int line_number=1;

char str_buffer[];

%}
DIGIT [0-9]
LETTER [a-zA-Z]

NUMBER [1-9]{DIGIT}*|"0"

IDENTIFIER [a-zA-Z_][a-zA-Z0-9_]*




%%
   
                              



"IF"                        { yylval.strvalue = strdup(yytext); return TOKEN_IF; }
"ELSE"                      { yylval.strvalue = strdup(yytext); return TOKEN_ELSE; }
"ELSE IF"                   { yylval.strvalue = strdup(yytext); return TOKEN_ELSE_IF; }
"WHILE"                     { yylval.strvalue = strdup(yytext); return TOKEN_WHILE; }
"DO"                        { yylval.strvalue = strdup(yytext); return TOKEN_DO; }
"FOR"                       { yylval.strvalue = strdup(yytext); return TOKEN_FOR; }
"SWITCH"                    { yylval.strvalue = strdup(yytext); return TOKEN_SWITCH; }
"CASE"                      { yylval.strvalue = strdup(yytext); return TOKEN_CASE; }
"DEFAULT"                   { yylval.strvalue = strdup(yytext); return TOKEN_DEFAULT; }
"BREAK"                     { yylval.strvalue = strdup(yytext); return TOKEN_BREAK; }
"RETURN"                    { yylval.strvalue = strdup(yytext); return TOKEN_RETURN; }
"CLASS"                     { yylval.strvalue = strdup(yytext); return TOKEN_CLASS; }
"PUBLIC"                    { yylval.strvalue = strdup(yytext); return TOKEN_PUBLIC; }
"PRIVATE"                   { yylval.strvalue = strdup(yytext); return TOKEN_PRIVATE; }
"INT"                       { yylval.strvalue = strdup(yytext); return TOKEN_INT; }
"CHAR"                      { yylval.strvalue = strdup(yytext); return TOKEN_CHAR; }
"DOUBLE"                    { yylval.strvalue = strdup(yytext); return TOKEN_DOUBLE; }
"BOOLEAN"                   { yylval.strvalue = strdup(yytext); return TOKEN_BOOLEAN; }
"STRING"                    { yylval.strvalue = strdup(yytext); return TOKEN_STRING; }
"TRUE"                      { yylval.strvalue = strdup(yytext); return TOKEN_TRUE; }
"FALSE"                     { yylval.strvalue = strdup(yytext); return TOKEN_FALSE; }
"NEW"                       { yylval.strvalue = strdup(yytext); return TOKEN_NEW; }
"OUT.PRINT(\""              { yylval.strvalue = strdup(yytext); return TOKEN_OUT_PRINT; }

";"                         { return TOKEN_SEMICOLON; }
"{"                         { return TOKEN_LBRACE; }
"}"                         { return TOKEN_RBRACE; }
"("                         { return TOKEN_LPAREN; }
")"                         { return TOKEN_RPAREN; }
"["                         { return TOKEN_LBRACKET; }
"]"                         { return TOKEN_RBRACKET; }
"="                         { return TOKEN_ASSIGN; }
","                         { return TOKEN_COMMA; }
"+"                         { return TOKEN_PLUS; }
"-"                         { return TOKEN_MINUS; }
"*"                         { return TOKEN_MULT; }
"/"                         { return TOKEN_DIV; }
"<"                         { return TOKEN_LESS_THAN; }
">"                         { return TOKEN_GREATER_THAN; }
"=="                        { return TOKEN_EQUAL; }
"!="                        { return TOKEN_NOT_EQUAL; }
"<="                        { return TOKEN_LESS_THAN_EQUAL; }
">="                        { return TOKEN_GREATER_THAN_EQUAL; }
"&&"                        { return TOKEN_AND; }
"||"                        { return TOKEN_OR; }
"%"                         { return TOKEN_MODULO; }
"#"                         { return TOKEN_HASH; }
"@"                         { return TOKEN_AT; }
"^"                         { return TOKEN_CARET; }
"?"                         { return TOKEN_QUESTION_MARK; }
"'"                         { return TOKEN_SINGLE_QUOTE; }
"\""                        { return TOKEN_DOUBLE_QUOTE; }
"."                         { return TOKEN_DOT; }
"!"                         { return TOKEN_EXCLAMATION_POINT; }
"|"                         { return TOKEN_PIPE; }
":"                         { return TOKEN_COLON; }

{NUMBER}                    { yylval.intvalue = atoi(yytext); return NUMBER; }

{IDENTIFIER}                { if (isupper(yytext[0])) { yylval.strvalue = strdup(yytext); return CLASS_IDENTIFIER;}
                              else { yylval.strvalue = strdup(yytext); return IDENTIFIER;}
                            } 

\"[^\"]*\"                     { return STRING_LITERAL; }
"//".*                      { return ONE_LINE_COMMENT; }
"/*".*"*/"                  { return MULTIPLE_LINE_COMMENTS; }


[ \t\n]                     { return IGNORE_WHITESPACE_NEWLINE; }
.                           {printf("Invalid Character:%s\n",yytext); return yytext[0];}


%%


int yywrap(){
return 1;
}


