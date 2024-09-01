%{
/* DEFINITIONS */
#include <stdio.h> /* Standard input/output library */
#include <stdlib.h> /* Standard library for memory allocation */
#include <string.h> /* String manipulation functions */
#include <ctype.h> /* Character classification functions */

extern FILE *yyin;
extern FILE *yyout;

extern int yylex(); /* lexer function */
extern int yywrap;

extern int yylineno; /* Line number counter*/

/* Buffer for storing strings */
extern int line_in;
extern char string_buffer[];
extern char* string_buffer_pointer;

/* Function for error handling */
void yyerror(char * s);

#define YYDEBUG 1 /* Enable debugging */
int yydebug;      /* debug flag*/
int class_found = 0; /* Flag to check if a class statement is found */
char* temp_type;  /*  Variable for temporary saving of the data type */
int case_type; /*Variable for identification of the type */ 

/* Symbol table structure for variables */
typedef struct Variable {
    char* name;
    char* type;
    struct Variable* next;
} Variable;

/* Symbol table structure for methods */
typedef struct Method {
    char* name;
    struct Method* next;
} Method;


Variable* var_table = NULL; // Linked list for variables
Method* method_table = NULL; // Linked list for methods

/* Function declarations for managing the symbol table */
void add_variable(char* name, char* type);
char* check_variable(char* name);
void add_method(char* name);
int check_method(char* name);
int type_check(char* var_type, int expr_type);

%}
/* DECLARATIONS */

/* Union for token types */
%union {
    int intvalue;
    double dvalue;
    char* strvalue;
    char charvalue;
    
}


%token <strvalue> TOKEN_IF TOKEN_ELSE TOKEN_WHILE TOKEN_DO TOKEN_FOR TOKEN_SWITCH TOKEN_CASE TOKEN_DEFAULT TOKEN_BREAK TOKEN_RETURN
%token <strvalue> TOKEN_CLASS TOKEN_PUBLIC TOKEN_PRIVATE TOKEN_INT TOKEN_CHAR TOKEN_DOUBLE TOKEN_BOOLEAN TOKEN_STRING TOKEN_TRUE TOKEN_FALSE
%token <strvalue> TOKEN_NEW TOKEN_OUT_PRINT TOKEN_SEMICOLON TOKEN_LBRACE TOKEN_RBRACE TOKEN_LPAREN TOKEN_RPAREN TOKEN_LBRACKET TOKEN_RBRACKET
%token <strvalue> TOKEN_ASSIGN TOKEN_COMMA TOKEN_PLUS TOKEN_MINUS TOKEN_MULT TOKEN_DIV TOKEN_LESS_THAN TOKEN_GREATER_THAN TOKEN_EQUAL 
%token <strvalue> TOKEN_NOT_EQUAL TOKEN_LESS_THAN_EQUAL TOKEN_GREATER_THAN_EQUAL TOKEN_AND TOKEN_OR TOKEN_MODULO TOKEN_HASH TOKEN_AT TOKEN_CARET
%token <strvalue> TOKEN_QUESTION_MARK TOKEN_DOUBLE_QUOTE TOKEN_UNDERSCORE TOKEN_DOT TOKEN_EXCLAMATION_POINT TOKEN_PIPE 
%token <strvalue> STRING_LITERAL TOKEN_ADD LOWER_THAN_DEFAULT 
%token <strvalue> TOKEN_COLON TOKEN_VOID IGNORE_WHITESPACE_NEWLINE

%type <intvalue> PROGRAM STATEMENTS STATEMENT STATEMENT_IF_ELSE STATEMENT_BREAK STATEMENT_ASSIGN STATEMENT_SWITCH VARIABLE_DECLARATION_BODY
%type <intvalue> SWITCH_BODY STATEMENT_RETURN STATEMENT_CLASS CREATE_CLASS_OBJECT STATEMENT_DO_WHILE ACCESS_TO_CLASS_MEMBERS STATEMENT_FOR CLASS_BODY
%type <intvalue> STATEMENT_PRINT VARIABLE_DECLARATION METHOD_DECLARATION ACCESS_MODIFIER  PARAMETER_LIST CONDITION PRINT_OPTIONAL_VAR METHOD_CALL
%type <intvalue> COMPARISON EXPRESSION BOOLEAN STATEMENT_NEW VALUE OPERATION ADDITION MULTIPLICATION SUBTRACTION DIVISION ELSE_CLAUSE MORE_DECLARATIONS MORE_DECLARATIONS_ASSIGN

%type <strvalue> DEFAULT_BODY VARIABLE_TYPE 
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

PROGRAM: STATEMENTS {
              if ($1 == 0) { //Check if there are valid Statements in the input file
                 printf("Error: No statement found in the input.");
                 YYABORT;
             } 
             else if  (!class_found) { //Check if there is at least one class in the input file
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
          | STATEMENT_DO_WHILE                  
          | STATEMENT_FOR                      
          | STATEMENT_SWITCH                                        
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
                      printf("IF Statement\n");
                  }
                  ;



ELSE_CLAUSE: TOKEN_ELSE TOKEN_LBRACE STATEMENTS TOKEN_RBRACE
           {
               printf("ELSE Statement\n");
           }
           | TOKEN_ELSE STATEMENT_IF_ELSE
           {
               printf("ELSE ");
           }
           | %empty
           {
              
           }
           ;

        
STATEMENT_BREAK: TOKEN_BREAK TOKEN_SEMICOLON { printf("BREAK Statement\n"); }
               ;

STATEMENT_ASSIGN: IDENTIFIER TOKEN_ASSIGN EXPRESSION  {
                    char* var_type = check_variable($1);
                    if (!var_type) { //Check if variable isn't declared
                        yyerror("Error: Variable not declared.");
                        YYABORT;
                    }
                    if (!type_check(var_type, case_type)) { // Check if types match
                        yyerror("Type mismatch in assignment.");
                        YYABORT;
                    }
                }
                | ACCESS_TO_CLASS_MEMBERS TOKEN_ASSIGN EXPRESSION
                ;

STATEMENT_SWITCH: TOKEN_SWITCH TOKEN_LPAREN EXPRESSION TOKEN_RPAREN SWITCH_BODY { printf("SWITCH Statement\n"); }
                ;


SWITCH_BODY: TOKEN_CASE EXPRESSION TOKEN_COLON TOKEN_LBRACE STATEMENTS  TOKEN_RBRACE SWITCH_BODY DEFAULT_BODY {}
                | %empty {} %prec LOWER_THAN_CASE
                ;

DEFAULT_BODY: TOKEN_DEFAULT TOKEN_COLON TOKEN_LBRACE STATEMENTS  TOKEN_RBRACE
            | %empty {} %prec LOWER_THAN_DEFAULT

STATEMENT_RETURN: TOKEN_RETURN EXPRESSION TOKEN_SEMICOLON { printf("RETURN Statement\n"); }
                ;

STATEMENT_CLASS: ACCESS_MODIFIER TOKEN_CLASS IDENTIFIER TOKEN_LBRACE CLASS_BODY TOKEN_RBRACE
               {
                   class_found = 1; //Set flag to 1;
                   printf("CLASS Statement\n");
                   if (!isupper($3[0])) {
                       printf("Error: Class identifier must start with an uppercase letter.");
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
                       printf("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   } }
                   ;

STATEMENT_DO_WHILE: TOKEN_DO TOKEN_LBRACE STATEMENTS TOKEN_RBRACE TOKEN_WHILE TOKEN_LPAREN CONDITION TOKEN_RPAREN TOKEN_SEMICOLON { printf("DO WHILE Statement\n");
                
 }
                  ;

ACCESS_TO_CLASS_MEMBERS: IDENTIFIER TOKEN_DOT IDENTIFIER {  if (!check_variable($3)) { //Check if variable is declared
                        yyerror("Error: Variable not declared.");
                        YYABORT;
                    }printf("Access to Class Members Statement\n"); }
                       | IDENTIFIER TOKEN_DOT METHOD_CALL { printf("Access to Class Members Statement\n"); }
                       ;

STATEMENT_FOR: TOKEN_FOR TOKEN_LPAREN VARIABLE_DECLARATION CONDITION TOKEN_SEMICOLON STATEMENT_ASSIGN TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE 
              {

                  printf("FOR loop statement.\n");
              }
             ;

STATEMENT_PRINT: TOKEN_OUT_PRINT TOKEN_LPAREN STRING_LITERAL PRINT_OPTIONAL_VAR TOKEN_RPAREN TOKEN_SEMICOLON { printf("Print Statement\n"); printf("%s \n", $3);}
               

PRINT_OPTIONAL_VAR : TOKEN_COMMA IDENTIFIER PRINT_OPTIONAL_VAR {if (!check_variable($2)) { //Check if variable is declared
                        yyerror("Error: Variable not declared.");
                        YYABORT;
                    }}
                   | %empty {}
                   ;



VARIABLE_DECLARATION: ACCESS_MODIFIER VARIABLE_DECLARATION_BODY
                    | VARIABLE_DECLARATION_BODY
                    ;

VARIABLE_DECLARATION_BODY : VARIABLE_TYPE IDENTIFIER MORE_DECLARATIONS TOKEN_SEMICOLON   { 
                              if (check_variable($2)) { //Check if variable is declared
                                  yyerror("Variable already declared.");
                                  YYABORT;
                              } else {
                                  add_variable($2,$1); //Add variable to the Symbol Table
                                  printf("Declared variable: %s\n",$2); 
                                  printf("Variable Declaration of type: %s\n", $1);
                                  
                              }
                          }
                          | VARIABLE_TYPE IDENTIFIER TOKEN_ASSIGN EXPRESSION MORE_DECLARATIONS_ASSIGN TOKEN_SEMICOLON { 
                              if (check_variable($2)) { //Check if variable is declared
                                  yyerror("Variable already declared.");
                                  YYABORT;
                              } else {
                                  if (!type_check($1, case_type)) { // Check if the types match
                                      yyerror("Type mismatch in assignment.");
                                      YYABORT;
                                  }
                                  add_variable($2, $1); //Add variable to the Symbol Table
                                  printf("Declared variable: %s\n", $2); 
                                  printf("Variable Declaration of type: %s\n", $1); 
                              }
                          }
                          ;

MORE_DECLARATIONS :  TOKEN_COMMA IDENTIFIER MORE_DECLARATIONS { if (check_variable($2)) { //Check if variable is declared
                                  yyerror("Variable already declared.");
                                  YYABORT;
                              } else {
                                  add_variable($2,temp_type); //Add variable to the Symbol Table
                                  printf("Declared variable: %s\n",$2); }}
                  | %empty {}
                  ;
MORE_DECLARATIONS_ASSIGN : TOKEN_COMMA IDENTIFIER TOKEN_ASSIGN EXPRESSION MORE_DECLARATIONS_ASSIGN {if (check_variable($2)) { //Check if variable is declared
                                  yyerror("Variable already declared.");
                                  YYABORT;
                              } else {
                                  add_variable($2,temp_type); //Add variable to the Symbol Table
                                  printf("Declared variable: %s\n",$2); }}
                  | %empty {}
                  ;


METHOD_DECLARATION: ACCESS_MODIFIER VARIABLE_TYPE IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS STATEMENT_RETURN TOKEN_RBRACE { 
                      if (check_method($3)) { //Check if method is declared
                          yyerror("Method already declared.");
                          YYABORT;
                      } else {
                          add_method($3); //Add method to the Symbol Table
                          printf("Method Declaration\n"); 
                      }
                  }
                  | ACCESS_MODIFIER TOKEN_VOID IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_LBRACE STATEMENTS TOKEN_RBRACE  { 
                      if (check_method($3)) {  //Check if method is declared
                          yyerror("Method already declared.");
                          YYABORT;
                      } else {
                          add_method($3);  //Add method to the Symbol Table
                          printf("Method Declaration\n"); 
                      }
                  }
                  ;
                
METHOD_CALL: IDENTIFIER TOKEN_LPAREN PARAMETER_LIST TOKEN_RPAREN TOKEN_SEMICOLON  {
               if (!check_method($1)) { //Check if method isn't declared
                   yyerror("Error: Method not declared.");
                   YYABORT;
               }
               printf("Method call\n");
           }
           ;

ACCESS_MODIFIER: TOKEN_PUBLIC {printf("public scope\n");}
               | TOKEN_PRIVATE {printf("private scope\n");}
               ;

VARIABLE_TYPE: TOKEN_INT { $$ = temp_type = "int"; }
             | TOKEN_CHAR { $$ = temp_type=  "char"; }
             | TOKEN_DOUBLE { $$ = temp_type = "double"; }
             | TOKEN_BOOLEAN { $$ = temp_type = "boolean"; }
             | TOKEN_STRING { $$ = temp_type = "string"; }
             ;

PARAMETER_LIST : VARIABLE_TYPE IDENTIFIER TOKEN_COMMA PARAMETER_LIST { printf("Parameter List\n"); }
               | VARIABLE_TYPE IDENTIFIER { printf("Parameter List\n"); }
               | %empty {}
               ;
BOOLEAN : TOKEN_TRUE  {$$=1; printf("Assigned true\n");}
        | TOKEN_FALSE {$$=0; printf("Assigned false\n");}

CONDITION : BOOLEAN {$$=$1;}
        | EXPRESSION COMPARISON EXPRESSION 
           { // Identify the comparison operation
               switch ($2) {
                   case 1 :  $$ = ($1 < $3); break;
                   case 2:  $$ = ($1 > $3); break;
                   case 3: $$ = ($1 <= $3); break;
                   case 4: $$ = ($1 >= $3); break;
                   case 5: $$ = ($1 == $3); break;
                   case 6: $$ = ($1 != $3); break;
                   case 7: $$ = ($1 && $3); break;
                   case 8: $$ = ($1 || $3); break;
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
           | OPERATION { case_type =6; $$ = $1; }
           | STATEMENT_NEW { $$ = $1; }
           ;




STATEMENT_NEW : TOKEN_NEW VARIABLE_TYPE TOKEN_SEMICOLON { printf("New Statement\n"); }
              | TOKEN_NEW IDENTIFIER TOKEN_LPAREN TOKEN_RPAREN TOKEN_SEMICOLON { printf("New Statement\n");
                  if (!isupper($2[0])) {
                       printf("Error: Class identifier must start with an uppercase letter.");
                       YYABORT;
                   } }
              ;

VALUE : NUMBER { case_type =1; $$ = $1; printf("Assigned int Value: %d\n", $1); }
      | TOKEN_LPAREN OPERATION TOKEN_RPAREN { $$ = $2;}
      | BOOLEAN {case_type =0; $$= $1;} 
      | DOUBLE_NUMBER {case_type =2; $$ =$1; printf("Assigned double Value: %f\n", $1);}
      | CHARACTER {case_type =3; $$= $1; printf("Char value: %c\n",$1);}
      | STRING_LITERAL {case_type =4; $$ = STRING_LITERAL; printf("Assigned String Value: %s\n", $1); }
      | IDENTIFIER {case_type = 5; }
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
        if ($3 == 0) { //Check if divisor is 0
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

int yydebug=0; // Disable Bison debugging by default

/* Symbol table management functions */

/* Add variable to the symbol table */
void add_variable(char* name, char* type) {
    // Allocate memory for a new variable structure
    Variable* new_var = (Variable*)malloc(sizeof(Variable));
    // Duplicate the variable name and type strings and assign them to the new variable's fields
    new_var->name = strdup(name);
    new_var->type = strdup(type);
    // Insert the new variable at the beginning of the linked list
    new_var->next = var_table;
    // Update the head of the list to point to the new variable
    var_table = new_var;
}


/* Check if a variable is already declared and return its type */
char* check_variable(char* name) {
    // Temporary pointer to traverse the variable linked list
    Variable* temp = var_table;
    // Iterate through the list to check for a matching variable name
    while (temp) {
        if (strcmp(temp->name, name) == 0) return temp->type; // Return type if name matches
        temp = temp->next; // Move to the next variable in the list
    }
    return NULL; // Return NULL if the variable is not declared
}

/* Type checking function */
int type_check(char* var_type, int expr_type) {
    if (strcmp(var_type, "int") == 0 && expr_type == 1) return 1; // If both are integers
    if (strcmp(var_type, "double") == 0 && expr_type == 2) return 1; // If both are doubles
    if (strcmp(var_type, "boolean") == 0 && expr_type == 0) return 1; // If it's a boolean
    if (strcmp(var_type, "char") == 0 && expr_type == 3) return 1; // If it's a character
    if (strcmp(var_type, "string") == 0 && expr_type == 4) return 1; // If it's a string
    if (expr_type ==5 ) return 1; //If it's an identifier
    if (strcmp(var_type, "int") ==0 && expr_type == 6 ) return 1; //If it's an operation
    return 0; // Otherwise, return 0 indicating a type mismatch
}


/* Add method to the symbol table */
void add_method(char* name) {
    // Allocate memory for a new method structure
    Method* new_method = (Method*)malloc(sizeof(Method));
     // Duplicate the method name string and assign it to the new method's name field
    new_method->name = strdup(name);
    // Insert the new method at the beginning of the linked list
    new_method->next = method_table;
    // Update the head of the list to point to the new method
    method_table = new_method;
}

/* Check if a method is already declared */
int check_method(char* name) {
    // Temporary pointer to traverse the method linked list
    Method* temp = method_table;
    // Iterate through the list to check for a matching method name
    while (temp) {
        if (strcmp(temp->name, name) == 0) return 1; // If the name matches, return 1 (method is declared)
        temp = temp->next; // Move to the next method in the list
    }
    return 0; // If no matching name is found, return 0 (method is not declared)
}
/* Error handling */
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
    yyparse(); // Start the parsing process
    return 0;
}