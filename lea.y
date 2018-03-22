%{
#include  <stdio.h>
#include  <ctype.h>
extern int yylex();
int yyerror(char *s);
%}

%token AFF COMMA TYPE TRUE FALSE NULL COLON READLN PRINTLN NEW DISPOSE RETURN OF SEMICOLON RANGE IF THEN ELSE WHILE DO PLUS MINUS TIMES DIV OR AND NOT LT LE GT GE EQ DIFF LPAR RPAR LBRACKET RBRACKET
%token VAR IDENTIFIER PROC FUNC CIRCON ARRAY INTEGER BOOLEAN CHARACTER TOKEN_BEGIN TOKEN_END

%%
program:
  type_declaration_part
  variable_declaration_part
  procedure_and_function_definition_part
  TOKEN_BEGIN
  statement_list
  TOKEN_END

type_declaration_part:
  TYPE type_declaration_list
  | /* empty */
  ;

type_declaration_list:
  type_declaration_list type_declaration
  | type_declaration
  ;

type_declaration:
  IDENTIFIER EQ type SEMICOLON
  ;

type:
  simple_type
  | named_type
  | index_type
  | array_type
  | pointer_type
  ;

simple_type:
  CHARACTER
  | INTEGER
  | BOOLEAN
  ;

named_type:
  IDENTIFIER
  ;

index_type:
  enumerated_type
  | subrange_type
  ;

  enumerated_type:
  LPAR identifier_list RPAR
  ;

subrange_type:
  INTEGER RANGE INTEGER
  ;

array_type:
  ARRAY LBRACKET range_type RBRACKET OF type
  ;

range_type:
  enumerated_type
  | subrange_type
  | named_type
  ;

pointer_type:
  CIRCON type
  ;

variable_declaration_part:
  VAR variable_declaration_list
  | /* empty */
  ;

variable_declaration_list:
  variable_declaration_list variable_declaration
  | variable_declaration
  ;

variable_declaration:
  identifier_list COLON type SEMICOLON
  ;

identifier_list:
  identifier_list COMMA IDENTIFIER
  | IDENTIFIER
  ;

procedure_and_function_definition_part:
  procedure_and_function_definition_list
  | /* empty */
  ;

procedure_and_function_definition_list:
  procedure_and_function_definition_list procedure_and_function_definition
  | procedure_and_function_definition
  ;

procedure_and_function_definition:
  procedure_and_function_definition_head variable_declaration_part block
  | procedure_and_function_definition_head SEMICOLON
  ;

procedure_and_function_definition_head:
  PROC IDENTIFIER LPAR argt_part RPAR
  | FUNC IDENTIFIER LPAR argt_part RPAR COLON type
  ;

argt_part:
  argt_list
  | /* empty */
  ;

argt_list:
  argt_list COMMA argt
  | argt
  ;

argt:
  IDENTIFIER COLON type
  ;

block:
  TOKEN_BEGIN
  statement_list
  TOKEN_END
  ;

statement_list:
  statement_list statement
  | statement
  ;

statement:
  simple_statement
  | structured_statement
  ;

simple_statement:
  assignment_statement
  | procedure_statement
  | new_statement
  | dispose_statement
  | println_statement
  | readln_statement
  | return_statement
  ;

assignment_statement:
  variable_access AFF expression SEMICOLON
  ;

procedure_statement:
  procedure_expression SEMICOLON
  ;

procedure_expression:
  IDENTIFIER LPAR expression_part RPAR
  ;

expression_part:
  expression_list
  | /* empty */
  ;

expression_list:
  expression_list COMMA expression
  | expression
  ;

new_statement:
  NEW LPAR variable_access RPAR SEMICOLON
  ;

dispose_statement:
  DISPOSE LPAR variable_access RPAR SEMICOLON
  ;

println_statement:
  PRINTLN LPAR expression RPAR SEMICOLON
  ;

readln_statement:
  READLN LPAR expression RPAR SEMICOLON
  ;

return_statement:
  RETURN LPAR expression RPAR SEMICOLON
  ;

structured_statement:
  block
  | if_statement
  | while_statement
  ;

if_statement:
  IF expression THEN statement
  | IF expression THEN statement ELSE statement
  ;

while_statement:
  WHILE expression DO statement
  ;

variable_access:
 IDENTIFIER
 | indexed_variable
 | variable_access CIRCON
 ;

indexed_variable:
  variable_access LBRACKET expression RBRACKET
  ;

expression:
  variable_access
  | expression PLUS expression
  | expression TIMES expression
  | expression MINUS expression
  | expression DIV expression
  | expression OR expression
  | expression AND expression
  | MINUS expression
  | NOT expression
  | expression LT expression
  | expression LE expression
  | expression GT expression
  | expression GE expression
  | expression EQ expression
  | expression DIFF expression
  | LPAR expression RPAR
  | procedure_expression
  | literal
  ;

literal:
  INTEGER
  | CHARACTER
  | TRUE
  | FALSE
  | NULL
  ;

%%

int yyerror(char *s){
  fprintf( stderr, "*** ERROR: %s\n", s );
  return 0;
}

int main(int argn, char **argv){
  yyparse();
}
