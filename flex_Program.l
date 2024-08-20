%{

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "bison_Program.tab.h"

extern FILE *yyin;
extern FILE *yyout;


extern void yyerror(char *s);  

char string_buffer[1000];        
char* string_buffer_pointer;
int line_in=-1;

%}

%option noyywrap
%option yylineno


%x COMMENT_CONTENTS
%x ONELINE_COMMENT_CONTENTS
%x STRING_CONTENTS


DIGIT [0-9]     
LETTER [a-zA-Z]   
WHITESPACE [ \t]+
NEWLINE [\n]+

NUMBER [1-9]{DIGIT}*|"0"  
DOUBLE {DIGIT}+\.{DIGIT}+d
IDENTIFIER [a-zA-Z_][a-zA-Z0-9_]*  


%%                 

"if"                        { yylval.strvalue = strdup(yytext); return TOKEN_IF; }
"else"                      { yylval.strvalue = strdup(yytext); return TOKEN_ELSE; }
"else_if "                  { yylval.strvalue = strdup(yytext); return TOKEN_ELSE_IF; }
"while"                     { yylval.strvalue = strdup(yytext); return TOKEN_WHILE; }
"do"                        { yylval.strvalue = strdup(yytext); return TOKEN_DO; }
"for"                       { yylval.strvalue = strdup(yytext); return TOKEN_FOR; }
"switch"                    { yylval.strvalue = strdup(yytext); return TOKEN_SWITCH; }
"case"                      { yylval.strvalue = strdup(yytext); return TOKEN_CASE; }
"default"                   { yylval.strvalue = strdup(yytext); return TOKEN_DEFAULT; }
"break"                     { yylval.strvalue = strdup(yytext); return TOKEN_BREAK; }
"return"                    { yylval.strvalue = strdup(yytext); return TOKEN_RETURN; }
"class"                     { yylval.strvalue = strdup(yytext); return TOKEN_CLASS; }
"public"                    { yylval.strvalue = strdup(yytext); return TOKEN_PUBLIC; }         
"private"                   { yylval.strvalue = strdup(yytext); return TOKEN_PRIVATE; }
"int"                       { yylval.strvalue = strdup(yytext); return TOKEN_INT; }
"char"                      { yylval.strvalue = strdup(yytext); return TOKEN_CHAR; }
"void"                      { yylval.strvalue = strdup(yytext); return TOKEN_VOID; }
"double"                    { yylval.strvalue = strdup(yytext); return TOKEN_DOUBLE; }
"bool"                      { yylval.strvalue = strdup(yytext); return TOKEN_BOOLEAN; }
"string"                    { yylval.strvalue = strdup(yytext); return TOKEN_STRING; }
"true"                      { yylval.strvalue = strdup(yytext); return TOKEN_TRUE; }
"false"                     { yylval.strvalue = strdup(yytext); return TOKEN_FALSE; }
"new"                       { yylval.strvalue = strdup(yytext); return TOKEN_NEW; }
"out.print"                 { yylval.strvalue = strdup(yytext); return TOKEN_OUT_PRINT; }
"START"                     { yylval.strvalue = strdup(yytext); return TOKEN_START; }
"END"                       { yylval.strvalue = strdup(yytext); return TOKEN_END; }




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
"."                         { return TOKEN_DOT; }
"!"                         { return TOKEN_EXCLAMATION_POINT; }
"|"                         { return TOKEN_PIPE; }
":"                         { return TOKEN_COLON; }


{DOUBLE}                    { yylval.dvalue = atof(yytext); return DOUBLE_NUMBER;}
{NUMBER}                    { yylval.intvalue = atoi(yytext); return NUMBER; }
\'[^\']\'                   { yylval.charvalue = yytext[1]; return CHARACTER; }


{IDENTIFIER}                { yylval.strvalue = strdup(yytext); return IDENTIFIER;}
                             
                            





"/*"                                     {BEGIN(COMMENT_CONTENTS); string_buffer_pointer = string_buffer;line_in=0;}
<COMMENT_CONTENTS>"*"+"/"                {BEGIN(INITIAL); *string_buffer_pointer ='\0';
                                              line_in=-1;}
<COMMENT_CONTENTS>"\n"                   {line_in++;}
<COMMENT_CONTENTS>[^*\n]*                {char *ypointer = yytext;
                                              while (*ypointer ) *string_buffer_pointer++ = *ypointer++; }
<COMMENT_CONTENTS>[*]*                   {}
<COMMENT_CONTENTS><<EOF>>                {yyerror("Comment not terminated"); return 0;}



"//"                                     {BEGIN(ONELINE_COMMENT_CONTENTS); string_buffer_pointer = string_buffer;}
<ONELINE_COMMENT_CONTENTS>.              {}
<ONELINE_COMMENT_CONTENTS>[^\\\n\"]+     {char *ypointer = yytext;
                                              while( *ypointer) *string_buffer_pointer++ = *ypointer++; }
<ONELINE_COMMENT_CONTENTS>"\n"           {BEGIN(INITIAL); *string_buffer_pointer = '\0';}



\"                                       {BEGIN(STRING_CONTENTS); string_buffer_pointer= string_buffer; }
<STRING_CONTENTS>\"                      {BEGIN(INITIAL); *string_buffer_pointer = '\0';yylval.strvalue = strdup(string_buffer); 
                                               return STRING_LITERAL; }
<STRING_CONTENTS>\\n                     {*string_buffer_pointer++ = '\n';}
<STRING_CONTENTS>\\t                     {*string_buffer_pointer++ = '\t';}
<STRING_CONTENTS>\\\"                    {*string_buffer_pointer++ = '"';} 
<STRING_CONTENTS>[^\\\n\"]+              {char *ypointer = yytext; 
                                               while ( *ypointer ) *string_buffer_pointer++ = *ypointer++;}

<STRING_CONTENTS><<EOF>>                    {yyerror("String not terminated"); return 0;}

{WHITESPACE}                             {}
{NEWLINE}                                {} 

%%




