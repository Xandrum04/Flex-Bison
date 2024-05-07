%{ 
/* DEFINITIONS*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern FILE *yyin;
extern FILE *yyout;

extern int yylex();
extern int yywrap;

extern int yylineno;
extern int line_in;

extern char string_buffer[];
extern char* string_buffer_pointer;

void yyerror(char * s);
%}




/*DECLARATIONS*/
%token <strvalue> TOKEN_IF TOKEN_ELSE TOKEN_ELSE_IF TOKEN_WHILE TOKEN_DO TOKEN_FOR TOKEN_SWITCH TOKEN_CASE TOKEN_DEFAULT TOKEN_BREAK TOKEN_RETURN
%token <strvalue> TOKEN_CLASS TOKEN_PUBLIC TOKEN_PRIVATE TOKEN_INT TOKEN_CHAR TOKEN_DOUBLE TOKEN_BOOLEAN TOKEN_STRING TOKEN_TRUE TOKEN_FALSE
%token <strvalue> TOKEN_NEW TOKEN_OUT_PRINT TOKEN_SEMICOLON TOKEN_LBRACE TOKEN_RBRACE TOKEN_LPAREN TOKEN_RPAREN TOKEN_LBRACKET TOKEN_RBRACKET
%token <strvalue> TOKEN_ASSIGN TOKEN_COMMA TOKEN_PLUS TOKEN_MINUS TOKEN_MULT TOKEN_DIV TOKEN_LESS_THAN TOKEN_GREATER_THAN TOKEN_EQUAL 
%token <strvalue> TOKEN_NOT_EQUAL TOKEN_LESS_THAN_EQUAL TOKEN_GREATER_THAN_EQUAL TOKEN_AND TOKEN_OR TOKEN_MODULO TOKEN_HASH TOKEN_AT TOKEN_CARET
%token <strvalue> TOKEN_QUESTION_MARK TOKEN_SINGLE_QUOTE TOKEN_DOUBLE_QUOTE TOKEN_UNDERSCORE TOKEN_DOT TOKEN_EXCLAMATION_POINT TOKEN_PIPE 
%token <strvalue> STRING_LITERAL TOKEN_ADD LOWER_THAN_DEFAULT
%token <strvalue> TOKEN_START TOKEN_END TOKEN_COLON TOKEN_VOID IGNORE_WHITESPACE_NEWLINE


%type <strvalue> PROGRAM STATEMENTS STATEMENT STATEMENT_IF_ELSE ELSE_CLAUSE STATEMENT_WHILE STATEMENT_BREAK STATEMENT_ASSIGN STATEMENT_SWITCH
%type <strvalue> SWITCH_BODY STATEMENT_RETURN STATEMENT_CLASS CREATE_CLASS_OBJECT STATEMENT_DO_WHILE ACCESS_TO_CLASS_MEMBERS STATEMENT_FOR
%type <strvalue> STATEMENT_PRINT VARIABLE_DECLARATION METHOD_DECLARATION ACCESS_MODIFIER VARIABLE_TYPE PARAMETER_LIST CONDITION 
%type <strvalue> COMPARISON EXPRESSION BOOLEAN STATEMENT_NEW VALUE OPERATION OPERATION_CONTINUE ADDITION MULTIPLICATION SUBTRACTION DIVISION 
%type <strvalue> PRINT_OPTIONAL_VAR DEFAULT_BODY SWITCH_CASE_BODY


%union {
    int intvalue;
    char* strvalue;
    double doublevalue;
}



%left TOKEN_COMMA
%right TOKEN_ASSIGN
%left TOKEN_ADD TOKEN_SUB
%left TOKEN_MUL TOKEN_DIV
%nonassoc UMINUS
%left TOKEN_LPAREN TOKEN_RPAREN 
%left TOKEN_LBRACKET TOKEN_RBRACKET

%nonassoc LOWER_THAN_DEFAULT
%nonassoc TOKEN_DEFAULT

%nonassoc LOWER_THAN_CASE
%nonassoc TOKEN_CASE

%token <intvalue> NUMBER
%token <strvalue> IDENTIFIER 
%token <strvalue> CLASS_IDENTIFIER






%%
  /* RULES / BNF */


PROGRAM: TOKEN_START STATEMENTS TOKEN_END { printf("Program parsed successfully.\n"); };

STATEMENTS : STATEMENT                 { printf("Statement\n"); }
           | STATEMENT STATEMENTS      { printf("Statement\n"); }
           ;
STATEMENT : METHOD_DECLARATION         { printf("Statement\n"); }
          | VARIABLE_DECLARATION       { printf("Statement\n"); }
          | STATEMENT_IF_ELSE          { printf("Statement\n"); }
          | STATEMENT_WHILE            { printf("Statement\n"); }
          | STATEMENT_DO_WHILE         { printf("Statement\n"); }
          | STATEMENT_FOR              { printf("Statement\n"); }
          | STATEMENT_SWITCH           { printf("Statement\n"); }
          | STATEMENT_RETURN           { printf("Statement\n"); }
          | STATEMENT_ASSIGN           { printf("Statement\n"); }
          | STATEMENT_CLASS            { printf("Statement\n"); }
          | CREATE_CLASS_OBJECT        { printf("Statement\n"); }
          | STATEMENT_PRINT            { printf("Statement\n"); }
          | STATEMENT_BREAK            { printf("Statement\n"); }
          ;

          

STATEMENT_IF_ELSE: TOKEN_IF TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE ELSE_CLAUSE { printf("IF Statement\n"); }
            ;

ELSE_CLAUSE: TOKEN_ELSE TOKEN_LBRACE STATEMENTS TOKEN_RBRACE
           | TOKEN_ELSE STATEMENT_IF_ELSE   
           | %empty                   {}
           ;

STATEMENT_WHILE: TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE { printf("WHILE Statement\n"); }
               ;

STATEMENT_BREAK: TOKEN_BREAK TOKEN_SEMICOLON { printf("BREAK Statement\n"); }
               ;

STATEMENT_ASSIGN: IDENTIFIER TOKEN_ASSIGN EXPRESSION TOKEN_SEMICOLON { printf("Assignment Statement\n"); }
                | ACCESS_TO_CLASS_MEMBERS TOKEN_ASSIGN EXPRESSION TOKEN_SEMICOLON
                ;

STATEMENT_SWITCH: TOKEN_SWITCH TOKEN_LPAREN EXPRESSION TOKEN_RPAREN SWITCH_BODY { printf("SWITCH Statement\n"); }
                ;


SWITCH_BODY: SWITCH_CASE_BODY DEFAULT_BODY { printf("DEFAULT Statement\n"); }
           ;

SWITCH_CASE_BODY: TOKEN_CASE EXPRESSION TOKEN_COLON STATEMENT SWITCH_CASE_BODY
                | %empty {} %prec LOWER_THAN_CASE
                ;


DEFAULT_BODY: TOKEN_DEFAULT TOKEN_COLON STATEMENT
            | %empty {} %prec LOWER_THAN_DEFAULT

STATEMENT_RETURN: TOKEN_RETURN EXPRESSION TOKEN_SEMICOLON { printf("RETURN Statement\n"); }
                ;

STATEMENT_CLASS: ACCESS_MODIFIER TOKEN_CLASS CLASS_IDENTIFIER TOKEN_LBRACE VARIABLE_DECLARATION METHOD_DECLARATION TOKEN_RBRACE{ printf("CLASS Statement\n"); }
               ;

CREATE_CLASS_OBJECT: CLASS_IDENTIFIER IDENTIFIER TOKEN_ASSIGN TOKEN_NEW CLASS_IDENTIFIER TOKEN_LPAREN TOKEN_RPAREN TOKEN_SEMICOLON { printf("Create Class Object Statement\n"); }
                   ;

STATEMENT_DO_WHILE: TOKEN_DO TOKEN_LBRACE STATEMENTS TOKEN_RBRACE TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN { printf("DO WHILE Statement\n"); }
                  ;

ACCESS_TO_CLASS_MEMBERS: IDENTIFIER TOKEN_DOT IDENTIFIER { printf("Access to Class Members Statement\n"); }
                       ;

STATEMENT_FOR: TOKEN_FOR TOKEN_LPAREN STATEMENT_ASSIGN TOKEN_SEMICOLON CONDITION TOKEN_SEMICOLON STATEMENT_ASSIGN TOKEN_RPAREN TOKEN_LBRACE TOKEN_RBRACE { printf("FOR Statement\n"); }
             ;

STATEMENT_PRINT: TOKEN_OUT_PRINT TOKEN_LPAREN STRING_LITERAL TOKEN_RPAREN TOKEN_SEMICOLON { printf("Print Statement\n"); printf("%s\n", $3); }
               | TOKEN_OUT_PRINT TOKEN_LPAREN STRING_LITERAL PRINT_OPTIONAL_VAR TOKEN_RPAREN TOKEN_SEMICOLON { printf("Print Statement\n"); printf("%s\n", $3, $5); }
               

PRINT_OPTIONAL_VAR : TOKEN_COMMA EXPRESSION 
                   | TOKEN_COMMA EXPRESSION PRINT_OPTIONAL_VAR 
                   ;

VARIABLE_DECLARATION: ACCESS_MODIFIER VARIABLE_TYPE IDENTIFIER TOKEN_SEMICOLON { printf("Variable Declaration\n"); }
                    | VARIABLE_TYPE IDENTIFIER TOKEN_SEMICOLON { printf("Variable Declaration\n"); }
                    ;

METHOD_DECLARATION: ACCESS_MODIFIER VARIABLE_TYPE IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE { printf("Method Declaration\n"); }
                  | ACCESS_MODIFIER TOKEN_VOID IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE { printf("Method Declaration\n"); }
                  ;

ACCESS_MODIFIER: TOKEN_PUBLIC { printf("Public\n"); }
               | TOKEN_PRIVATE { printf("Private\n"); }
               ;

VARIABLE_TYPE: TOKEN_INT { printf("Int\n"); }
             | TOKEN_CHAR { printf("Char\n"); }
             | TOKEN_DOUBLE { printf("Double\n"); }
             | TOKEN_BOOLEAN { printf("Boolean\n"); }
             | TOKEN_STRING { printf("String\n"); }
             ;


PARAMETER_LIST : VARIABLE_TYPE IDENTIFIER TOKEN_COMMA PARAMETER_LIST { printf("Parameter List\n"); }
               | VARIABLE_TYPE IDENTIFIER { printf("Parameter List\n"); }
               | %empty {}
               ;

CONDITION : EXPRESSION COMPARISON EXPRESSION { printf("Condition\n"); }
          | EXPRESSION COMPARISON EXPRESSION TOKEN_AND CONDITION { printf("Condition\n"); }
          | EXPRESSION COMPARISON EXPRESSION TOKEN_OR CONDITION { printf("Condition\n"); }
          ;

COMPARISON : TOKEN_LESS_THAN { printf("Comparison\n"); }
           | TOKEN_GREATER_THAN { printf("Comparison\n"); }
           | TOKEN_LESS_THAN_EQUAL { printf("Comparison\n"); }
           | TOKEN_GREATER_THAN_EQUAL { printf("Comparison\n"); }
           | TOKEN_EQUAL { printf("Comparison\n"); }
           | TOKEN_NOT_EQUAL { printf("Comparison\n"); }
           ;

EXPRESSION : VALUE { printf("Expression\n"); }
           | OPERATION { printf("Expression\n"); }
           | STATEMENT_NEW { printf("Expression\n"); }
           | BOOLEAN { printf("Expression\n"); }
           | STRING_LITERAL
           ;

BOOLEAN : TOKEN_TRUE { printf("True\n"); }
        | TOKEN_FALSE { printf("False\n"); }
        ;

STATEMENT_NEW : TOKEN_NEW VARIABLE_TYPE { printf("New Statement\n"); }
              | TOKEN_NEW CLASS_IDENTIFIER { printf("New Statement\n"); }
              ;

VALUE : NUMBER { printf("Value\n"); }
      | IDENTIFIER { printf("Value\n"); }
      ;
 
OPERATION : ADDITION { printf("Operation\n"); }
          | MULTIPLICATION { printf("Operation\n"); }
          | SUBTRACTION { printf("Operation\n"); }
          | DIVISION { printf("Operation\n"); }
          ;

OPERATION_CONTINUE : %empty  {}
                   | TOKEN_PLUS TOKEN_LPAREN OPERATION TOKEN_RPAREN { printf("Operation Continue PLUS\n"); }
                   | TOKEN_MINUS TOKEN_LPAREN OPERATION TOKEN_RPAREN { printf("Operation Continue MINUS\n"); }
                   | TOKEN_MULT TOKEN_LPAREN OPERATION TOKEN_RPAREN { printf("Operation Continue MULT\n"); }
                   | TOKEN_DIV TOKEN_LPAREN OPERATION TOKEN_RPAREN { printf("Operation Continue DIV\n"); }
                   ;

ADDITION: VALUE TOKEN_PLUS VALUE OPERATION_CONTINUE { printf("Addition\n"); }
        ;
       
MULTIPLICATION : VALUE TOKEN_MULT VALUE OPERATION_CONTINUE { printf("Multiplication\n"); }


SUBTRACTION : VALUE TOKEN_MINUS VALUE OPERATION_CONTINUE { printf("Subtraction\n"); }
            ;


DIVISION : VALUE TOKEN_DIV VALUE OPERATION_CONTINUE { printf("Division\n"); }
         ;









%%
 /* CODE */

void yyerror(char *s)
{
 fprintf(stderr, "%s at line: %d\n",s, yylineno);
 exit(1);
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
 



