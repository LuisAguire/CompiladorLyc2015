/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_SINTACTICO_TAB_H_INCLUDED
# define YY_YY_SINTACTICO_TAB_H_INCLUDED
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
    INICIO_PROG = 258,
    FIN_PROG = 259,
    WHILE = 260,
    DO = 261,
    ENDWHILE = 262,
    FUNCION_LONG = 263,
    IN = 264,
    AND = 265,
    OR = 266,
    NOT = 267,
    MAYOR = 268,
    MAYOR_IGUAL = 269,
    MENOR = 270,
    MENOR_IGUAL = 271,
    IGUAL = 272,
    DISTINTO = 273,
    MAS = 274,
    MENOS = 275,
    MUL = 276,
    DIV = 277,
    MAS_STRING = 278,
    ASIGNACION = 279,
    PARENT_ABRE = 280,
    PARENT_CIERRA = 281,
    WRITE = 282,
    READ = 283,
    IF = 284,
    THEN = 285,
    ENDIF = 286,
    ELSE = 287,
    COMA = 288,
    REAL = 289,
    INT = 290,
    STRING = 291,
    CORCHETE_ABRE = 292,
    CORCHETE_CIERRA = 293,
    DOS_PUNTOS = 294,
    PUNTO = 295,
    VAR = 296,
    ENDVAR = 297,
    CONCATENACION = 298,
    CONSTANTE_STRING = 299,
    CONSTANTE_INT = 300,
    CONSTANTE_REAL = 301,
    COMENTARIO = 302,
    COMENTARIO2 = 303,
    CONST = 304,
    ID = 305,
    END_OF_FILE = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTACTICO_TAB_H_INCLUDED  */
