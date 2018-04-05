%{
#include "lea.h"
%}

%%
[A-Za-z][A-Za-z0-9]*                  {return IDENTIFIER;}
0[xX][\da-fA-F]+|0|[1-9]\d*           {return INTEGER;}
'[a-zA-Z\d]'                          {return CHARACTER;}
"integer"                             {return INTEGER_TOKEN;}
"character"                           {return CHARACTER_TOKEN;}
"boolean"                             {return BOOLEAN_TOKEN;}
"true"                                {return TRUE;}
"false"                               {return FALSE;}
";"                                   {return SEMICOLON;}
"+"                                   {return PLUS;}
"-"                                   {return MINUS;}
"*"                                   {return TIMES;}
"/"                                   {return DIV;}
"||"                                  {return OR;}
"&&"                                  {return AND;}
"!"                                   {return NOT;}
"<"                                   {return LT;}
"<="                                  {return LE;}
">"                                   {return GT;}
">="                                  {return GE;}
"="                                   {return EQ;}
":="                                  {return AFF;}
"!="                                  {return DIFF;}
"("                                   {return LPAR;}
")"                                   {return RPAR;}
"if"                                  {return IF;}
"then"                                {return THEN;}
"else"                                {return ELSE;}
"while"                               {return WHILE;}
"do"                                  {return DO;}
"array"                               {return ARRAY;}
"^"                                   {return CIRCON;}
","                                   {return COMMA;}
"begin"                               {return TOKEN_BEGIN;}
"end"                                 {return TOKEN_END;}
"dispose"                             {return DISPOSE;}
"new"                                 {return NEW;}
"null"                                {return NULL;}
"return"                              {return RETURN;}
"of"                                  {return OF;}
"["                                   {return LBRACKET;}
"]"                                   {return RBRACKET;}
":"                                   {return COLON;}
"var"                                 {return VAR;}
"function"                            {return FUNC;}
"procedure"                           {return PROC;}
"println"                             {return PRINTLN;}
"readln"                              {return READLN;}
".."                                  {return RANGE;}
"type"                                {return TYPE;}
\/\/.*                                {;}
\/\*(\n.*)*\*\/                       {;}
[ \t\n]                               {;}
.                                     {return *yytext;}

%%

int yywrap(){
   return 1;
}
