%{
#include "lea.h"
%}

%%
[A-Za-z][A-Za-z0-9]*                  {return IDENTIFIER;}
0[xX][\da-fA-F]+|0|[1-9]\d*           {return INTEGER;}
'[a-zA-Z\d]'                          {return CHARACTER;}
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
"!="                                  {return DIFF;}
"("                                   {return LPAR;}
")"                                   {return RPAR;}
"if"                                  {return IF;}
"then"                                {return THEN;}
"else"                                {return ELSE;}
"while"                               {return WHILE;}
"do"                                  {return DO;}
\/\/.*                                {;}
\/\*(\n.*)*\*\/                       {;}
[ \t\n]                               {;}
.                                     {return *yytext;}

%%

int yywrap(){
   return 1;
}
