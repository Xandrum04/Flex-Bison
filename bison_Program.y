%{
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
%}

/* DECLARATIONS */
%union {
    int intvalue;
    double dvalue;
    char* strvalue;
    char charvalue;
    
}


%token <strvalue> TOKEN_IF TOKEN_ELSE TOKEN_ELSE_IF TOKEN_WHILE TOKEN_DO TOKEN_FOR TOKEN_SWITCH TOKEN_CASE TOKEN_DEFAULT TOKEN_BREAK TOKEN_RETURN
%token <strvalue> TOKEN_CLASS TOKEN_PUBLIC TOKEN_PRIVATE TOKEN_INT TOKEN_CHAR TOKEN_DOUBLE TOKEN_BOOLEAN TOKEN_STRING TOKEN_TRUE TOKEN_FALSE
%token <strvalue> TOKEN_NEW TOKEN_OUT_PRINT TOKEN_SEMICOLON TOKEN_LBRACE TOKEN_RBRACE TOKEN_LPAREN TOKEN_RPAREN TOKEN_LBRACKET TOKEN_RBRACKET
%token <strvalue> TOKEN_ASSIGN TOKEN_COMMA TOKEN_PLUS TOKEN_MINUS TOKEN_MULT TOKEN_DIV TOKEN_LESS_THAN TOKEN_GREATER_THAN TOKEN_EQUAL 
%token <strvalue> TOKEN_NOT_EQUAL TOKEN_LESS_THAN_EQUAL TOKEN_GREATER_THAN_EQUAL TOKEN_AND TOKEN_OR TOKEN_MODULO TOKEN_HASH TOKEN_AT TOKEN_CARET
%token <strvalue> TOKEN_QUESTION_MARK TOKEN_DOUBLE_QUOTE TOKEN_UNDERSCORE TOKEN_DOT TOKEN_EXCLAMATION_POINT TOKEN_PIPE 
%token <strvalue> STRING_LITERAL TOKEN_ADD LOWER_THAN_DEFAULT TOKEN_START TOKEN_END
%token <strvalue> TOKEN_COLON TOKEN_VOID IGNORE_WHITESPACE_NEWLINE

%type <intvalue> PROGRAM STATEMENTS STATEMENT STATEMENT_IF_ELSE STATEMENT_WHILE STATEMENT_BREAK STATEMENT_ASSIGN STATEMENT_SWITCH VARIABLE_DECLARATION_BODY
%type <intvalue> SWITCH_BODY STATEMENT_RETURN STATEMENT_CLASS CREATE_CLASS_OBJECT STATEMENT_DO_WHILE ACCESS_TO_CLASS_MEMBERS STATEMENT_FOR CLASS_BODY
%type <intvalue> STATEMENT_PRINT VARIABLE_DECLARATION METHOD_DECLARATION ACCESS_MODIFIER VARIABLE_TYPE PARAMETER_LIST CONDITION PRINT_OPTIONAL_VAR METHOD_CALL
%type <intvalue> COMPARISON EXPRESSION BOOLEAN STATEMENT_NEW VALUE OPERATION ADDITION MULTIPLICATION SUBTRACTION DIVISION ELSE_CLAUSE MORE_DECLARATIONS MORE_DECLARATIONS_ASSIGN

%type <strvalue> DEFAULT_BODY SWITCH_CASE_BODY
%token <charvalue> CHARACTER

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

%token <dvalue> DOUBLE_NUMBER
%token <intvalue> NUMBER

%token <strvalue> IDENTIFIER 


%%
/* RULES / BNF */

PROGRAM: TOKEN_START STATEMENTS TOKEN_END
         {
              if ($2 == 0) {
                 printf("Error: No statement found in the input.");
                 YYABORT;
             } 
             else if  (!class_found) {
                 printf("Error: No class statement found in the input.");
                 YYABORT;
             } else {
                 printf("Program parsed successfully.\n");
             }
         };

STATEMENTS : %empty  {$$ = 0;}                   
           | STATEMENT STATEMENTS   {$$= 1;}         
           ;
STATEMENT : METHOD_DECLARATION                  
          | VARIABLE_DECLARATION                
          | STATEMENT_IF_ELSE                 
          | STATEMENT_WHILE                     
          | STATEMENT_DO_WHILE                  
          | STATEMENT_FOR                      
          | STATEMENT_SWITCH                    
          | STATEMENT_RETURN                    
          | STATEMENT_ASSIGN TOKEN_SEMICOLON    
          | STATEMENT_CLASS                     
          | CREATE_CLASS_OBJECT                 
          | STATEMENT_PRINT                     
          | STATEMENT_BREAK                 
          | METHOD_CALL    
          | ACCESS_TO_CLASS_MEMBERS
          ;




STATEMENT_IF_ELSE: TOKEN_IF TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS  TOKEN_RBRACE ELSE_CLAUSE
                  {
                      if ($3) {  
                          $$ = $6;
                          printf("IF block executed.\n");
                      } else if ($8) {  
                          $$ = $8; 
                          printf("ELSE IF block executed.\n");
                      } else {
                          printf("No condition met. No block executed.\n"); 
                      }
                  }
                  ;



ELSE_CLAUSE: TOKEN_ELSE TOKEN_LBRACE STATEMENTS TOKEN_RBRACE
           {
               $$ = $3; // Indicate that the 'else' clause exists and will be executed if reached
               printf("ELSE Statement\n");
           }
           | TOKEN_ELSE STATEMENT_IF_ELSE
           {
               $$ = $2; // Handle nested 'else if'
               printf("ELSE IF Statement\n");
           }
           | %empty
           {
              $$ = 0;
           }
           ;

STATEMENT_WHILE: TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE { printf("WHILE Statement\n"); }
               ;

STATEMENT_BREAK: TOKEN_BREAK TOKEN_SEMICOLON { printf("BREAK Statement\n"); }
               ;

STATEMENT_ASSIGN: IDENTIFIER TOKEN_ASSIGN EXPRESSION  { }
                | ACCESS_TO_CLASS_MEMBERS TOKEN_ASSIGN EXPRESSION
                ;

STATEMENT_SWITCH: TOKEN_SWITCH TOKEN_LPAREN EXPRESSION TOKEN_RPAREN SWITCH_BODY { printf("SWITCH Statement\n"); }
                ;

SWITCH_BODY: SWITCH_CASE_BODY DEFAULT_BODY {}
           ;

SWITCH_CASE_BODY: TOKEN_CASE EXPRESSION TOKEN_COLON STATEMENT SWITCH_CASE_BODY
                | %empty {} %prec LOWER_THAN_CASE
                ;

DEFAULT_BODY: TOKEN_DEFAULT TOKEN_COLON STATEMENT
            | %empty {} %prec LOWER_THAN_DEFAULT

STATEMENT_RETURN: TOKEN_RETURN EXPRESSION TOKEN_SEMICOLON { printf("RETURN Statement\n"); }
                ;

STATEMENT_CLASS: ACCESS_MODIFIER TOKEN_CLASS IDENTIFIER TOKEN_LBRACE CLASS_BODY TOKEN_RBRACE
               {
                   class_found = 1;
                   printf("CLASS Statement\n");
                   if (!isupper($3[0])) {
                       yyerror("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   }
               };

CLASS_BODY: VARIABLE_DECLARATION CLASS_BODY
          | METHOD_DECLARATION CLASS_BODY
          | STATEMENT_CLASS
          | %empty {}
          ;

CREATE_CLASS_OBJECT: IDENTIFIER IDENTIFIER TOKEN_ASSIGN STATEMENT_NEW { printf("Create Class Object Statement\n");
                        if (!isupper($1[0])) {
                       yyerror("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   } }
                   ;

STATEMENT_DO_WHILE: TOKEN_DO TOKEN_LBRACE STATEMENTS TOKEN_RBRACE TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_SEMICOLON { printf("DO WHILE Statement\n");
                
 }
                  ;

ACCESS_TO_CLASS_MEMBERS: IDENTIFIER TOKEN_DOT IDENTIFIER { printf("Access to Class Members Statement\n"); }
                       | IDENTIFIER TOKEN_DOT METHOD_CALL { printf("Access to Class Members Statement\n"); }
                       ;

STATEMENT_FOR: TOKEN_FOR TOKEN_LPAREN VARIABLE_DECLARATION CONDITION TOKEN_SEMICOLON STATEMENT_ASSIGN TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE 
              {
                  // Initialize the loop with the variable declaration
                  $$ = $3;

                  // Check the condition before starting the loop
                  while ($4) {
                      // Execute the statements inside the loop
                      $$ = $9;

                      // Perform the assignment operation (usually the increment/decrement)
                      $$ = $6;

                      // Re-evaluate the condition for the next iteration
                      $4 = $4; // Reevaluate the condition for next iteration
                  }
                  printf("FOR loop executed.\n");
              }
             ;

STATEMENT_PRINT: TOKEN_OUT_PRINT TOKEN_LPAREN STRING_LITERAL PRINT_OPTIONAL_VAR TOKEN_RPAREN TOKEN_SEMICOLON { printf("Print Statement\n"); printf("%s\n", $3); if($4 != 0){ printf("%d\n",$4); }}
               

PRINT_OPTIONAL_VAR : TOKEN_COMMA EXPRESSION PRINT_OPTIONAL_VAR {$$=$2;}
                   | %empty {}
                   ;



VARIABLE_DECLARATION: ACCESS_MODIFIER VARIABLE_DECLARATION_BODY
                    | VARIABLE_DECLARATION_BODY
                    ;

VARIABLE_DECLARATION_BODY : VARIABLE_TYPE IDENTIFIER MORE_DECLARATIONS TOKEN_SEMICOLON  { printf("Variable Declaration\n"); }
                          | VARIABLE_TYPE STATEMENT_ASSIGN MORE_DECLARATIONS_ASSIGN TOKEN_SEMICOLON { printf("Variable Declaration\n"); }
                          ;

MORE_DECLARATIONS :  TOKEN_COMMA IDENTIFIER MORE_DECLARATIONS {}
                  | %empty {}
                  ;
MORE_DECLARATIONS_ASSIGN : TOKEN_COMMA STATEMENT_ASSIGN MORE_DECLARATIONS_ASSIGN {}
                  | %empty {}
                  ;


METHOD_DECLARATION: ACCESS_MODIFIER VARIABLE_TYPE IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE { printf("Method Declaration\n"); }
                  | ACCESS_MODIFIER TOKEN_VOID IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE { printf("Method Declaration\n"); }
                  ;
                
METHOD_CALL: IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_SEMICOLON { printf("Method call\n");}
           ;

ACCESS_MODIFIER: TOKEN_PUBLIC {}
               | TOKEN_PRIVATE {}
               ;

VARIABLE_TYPE: TOKEN_INT {}
             | TOKEN_CHAR  {}
             | TOKEN_DOUBLE  {}
             | TOKEN_BOOLEAN {}
             | TOKEN_STRING  {}
             ;

PARAMETER_LIST : VARIABLE_TYPE IDENTIFIER TOKEN_COMMA PARAMETER_LIST { printf("Parameter List\n"); }
               | VARIABLE_TYPE IDENTIFIER { printf("Parameter List\n"); }
               | %empty {}
               ;
BOOLEAN : TOKEN_TRUE  {$$=1; printf("Assigned true\n");}
        | TOKEN_FALSE {$$=0; printf("Less false\n");}

CONDITION : BOOLEAN {$$=$1;}
        | EXPRESSION COMPARISON EXPRESSION 
           {
               switch ($2) {
                   case 1 :  $$ = ($1 < $3); break;
                   case 2:  $$ = ($1 > $3); break;
                   case 3: $$ = ($1 <= $3); break;
                   case 4: $$ = ($1 >= $3); break;
                   case 5: $$ = ($1 == $3); break;
                   case 6: $$ = ($1 != $3); break;
                   case 7: $$ = ($1 && $3); break;
                   case 8: $$ = ($1 && $3); break;
                   default: yyerror("Unknown comparison operator");
               }
               printf("Condition result: %d\n", $$);
           }
        


COMPARISON : TOKEN_LESS_THAN { $$ = 1; printf("Less than\n"); }
           | TOKEN_GREATER_THAN { $$ = 2; printf("Greater than\n"); }
           | TOKEN_LESS_THAN_EQUAL { $$ = 3; printf("Less or equal than \n");}
           | TOKEN_GREATER_THAN_EQUAL { $$ = 4 ; printf("Greater or equal than\n"); }
           | TOKEN_EQUAL { $$ = 5 ; printf("Equal\n");}
           | TOKEN_NOT_EQUAL { $$ = 6 ; printf("Not equal\n"); }
           | TOKEN_AND  { $$ = 7 ; printf("And");}
           | TOKEN_OR { $$ = 8 ; printf("Or");}
           ;


EXPRESSION : VALUE { $$ = $1;}
           | OPERATION { $$ = $1; }
           | STATEMENT_NEW { $$ = $1; }
           ;




STATEMENT_NEW : TOKEN_NEW VARIABLE_TYPE TOKEN_SEMICOLON { printf("New Statement\n"); }
              | TOKEN_NEW IDENTIFIER TOKEN_LPAREN TOKEN_RPAREN TOKEN_SEMICOLON { printf("New Statement\n");
                  if (!isupper($2[0])) {
                       yyerror("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   } }
              ;

VALUE : NUMBER {$$ = $1; printf("Value: %d\n", $$); }
      | TOKEN_LPAREN OPERATION TOKEN_RPAREN { $$ = $2;}
      | BOOLEAN {$$= $1;} 
      | DOUBLE_NUMBER {$$ =$1; printf("Value: %f\n", $1);}
      | CHARACTER {$$= $1; printf("Char value: %c\n",$1);}
      | STRING_LITERAL { $$ = STRING_LITERAL; printf("String Value: %s\n", $1); }
      | IDENTIFIER { }
      ;
 
OPERATION : ADDITION { $$ = $1; }
          | MULTIPLICATION { $$ = $1;  }
          | SUBTRACTION { $$ = $1; }
          | DIVISION { $$ = $1; }
          ;


ADDITION: VALUE TOKEN_PLUS VALUE { $$ = $1 + $3; printf("Addition: %d\n", $$); }
        ;
       
MULTIPLICATION : VALUE TOKEN_MULT VALUE { $$ = $1 * $3; printf("Multiplication: %d\n", $$); }

SUBTRACTION : VALUE TOKEN_MINUS VALUE { $$ = $1 - $3; printf("Subtraction: %d\n", $$); }

DIVISION:
    VALUE TOKEN_DIV VALUE {
        if ($3 == 0) {
            yyerror("Error: Division by zero");
            YYABORT;
        } else {
            $$ = $1 / $3; 
            printf("Division: %d\n", $$); 
        }
    }
  ;

%%
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