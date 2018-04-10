/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_LEA_TAB_H_INCLUDED
# define YY_YY_LEA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AFF = 258,
    COMMA = 259,
    TYPE = 260,
    TRUE = 261,
    FALSE = 262,
    NULL_TOKEN = 263,
    COLON = 264,
    READLN = 265,
    PRINTLN = 266,
    NEW = 267,
    DISPOSE = 268,
    RETURN = 269,
    OF = 270,
    SEMICOLON = 271,
    RANGE = 272,
    IF = 273,
    THEN = 274,
    ELSE = 275,
    WHILE = 276,
    DO = 277,
    PLUS = 278,
    MINUS = 279,
    TIMES = 280,
    DIV = 281,
    OR = 282,
    AND = 283,
    NOT = 284,
    LT = 285,
    LE = 286,
    GT = 287,
    GE = 288,
    EQ = 289,
    DIFF = 290,
    LPAR = 291,
    RPAR = 292,
    LBRACKET = 293,
    RBRACKET = 294,
    VAR = 295,
    IDENTIFIER = 296,
    PROC = 297,
    FUNC = 298,
    CIRCON = 299,
    ARRAY = 300,
    INTEGER = 301,
    CHARACTER = 302,
    INTEGER_TOKEN = 303,
    BOOLEAN_TOKEN = 304,
    CHARACTER_TOKEN = 305,
    TOKEN_BEGIN = 306,
    TOKEN_END = 307,
    UNARYMINUS = 308
  };
#endif
/* Tokens.  */
#define AFF 258
#define COMMA 259
#define TYPE 260
#define TRUE 261
#define FALSE 262
#define NULL_TOKEN 263
#define COLON 264
#define READLN 265
#define PRINTLN 266
#define NEW 267
#define DISPOSE 268
#define RETURN 269
#define OF 270
#define SEMICOLON 271
#define RANGE 272
#define IF 273
#define THEN 274
#define ELSE 275
#define WHILE 276
#define DO 277
#define PLUS 278
#define MINUS 279
#define TIMES 280
#define DIV 281
#define OR 282
#define AND 283
#define NOT 284
#define LT 285
#define LE 286
#define GT 287
#define GE 288
#define EQ 289
#define DIFF 290
#define LPAR 291
#define RPAR 292
#define LBRACKET 293
#define RBRACKET 294
#define VAR 295
#define IDENTIFIER 296
#define PROC 297
#define FUNC 298
#define CIRCON 299
#define ARRAY 300
#define INTEGER 301
#define CHARACTER 302
#define INTEGER_TOKEN 303
#define BOOLEAN_TOKEN 304
#define CHARACTER_TOKEN 305
#define TOKEN_BEGIN 306
#define TOKEN_END 307
#define UNARYMINUS 308

/* Value type.  */


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LEA_TAB_H_INCLUDED  */
