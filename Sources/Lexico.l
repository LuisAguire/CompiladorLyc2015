%{
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Sintactico.tab.h"
#include "Singleton.hpp"
using namespace std;
int lineCounter=1;
#define PRINT(x)		
%}
%option noyywrap  
%option yylineno
CONSTANTE_ENTERA_AUX				{NUMERO}+
CONSTANTE_REAL_AUX					{CONSTANTE_ENTERA_AUX}"."{CONSTANTE_ENTERA_AUX}|"."{CONSTANTE_ENTERA_AUX}|{CONSTANTE_ENTERA_AUX}"."
CONSTANTE_ENTERA					{CONSTANTE_ENTERA_AUX}|"-"{CONSTANTE_ENTERA_AUX}
CONSTANTE_REAL						{CONSTANTE_REAL_AUX}|"-"{CONSTANTE_REAL_AUX}	
CONSTANTE							{CONSTANTE_ENTERA}|{CONSTANTE_REAL}
CONSTANTE_STRING					\".{0,30}\"
CONSTANTE_STRING_SUPERA				\".{31,}\"
DIGITO								NUMERO|LETRA|CARACTER_ESPECIAL
IF									"IF"
ENDIF								"ENDIF"
THEN								"THEN"	
ELSE								"ELSE"
WHILE								"WHILE"
DO									"DO"
ENDWHILE							"ENDWHILE"
IN									"IN"
LECTURA								"READ"
ESCRITURA							"WRITE"
VAR									"VAR"
ENDVAR								"ENDVAR"
INICIO_PROGRAMA						"INICIOPROG"
FIN_PROGRAMA						"FINPROG"
SIMBOLO_ESPECIAL_CORCHETE_ABRE		"["
SIMBOLO_ESPECIAL_CORCHETE_CIERRA	"]"
SIMBOLO_ESPECIAL_PARENTESIS_ABRE	"("
SIMBOLO_ESPECIAL_PARENTESIS_CIERRA	")"
SIMBOLO_ESPECIAL_COMA				","
SIMBOLO_ESPECIAL_DOS_PUNTOS			":"
FUNCION_LONG						"Longitud"
TIPO_INT							"Integer"
TIPO_REAL							"Float"
TIPO_STRING							"String"
PALABRA								{LETRA}+{DIGITO}*
LETRA								[a-zA-Z]
NUMERO								[0-9]
CARACTER_ESPECIAL					_|-|
OPERADOR_STRING						"++"
OPERADOR_NUMERICO_MAS				"+"
OPERADOR_NUMERICO_MENOS				"-"
OPERADOR_NUMERICO_POR				"*"
OPERADOR_NUMERICO_DIVISION			"/"
OPERADOR_LOGICO_AND					"AND"
OPERADOR_LOGICO_OR					"OR"
OPERADOR_LOGICO_NOT					"NOT"
OPERADOR_COMPARADOR_MENOR			"<"
OPERADOR_COMPARADOR_MENOR_IGUAL		"<="
OPERADOR_COMPARADOR_MAYOR			">"
OPERADOR_COMPARADOR_MAYOR_IGUAL		">="
OPERADOR_COMPARADOR_IGUAL			"=="
OPERADOR_COMPARADOR_DISTINTO		"!="
ASIGNACION							":="
COMENTARIO							"-/".*"-/"
CARRI_LINE							\n
ESPACIO								" "|\t
UNRECOGNIZED						.
%%
{INICIO_PROGRAMA}						{PRINT("Detecta inicio programa: "<<yytext); return INICIO_PROG;}
{FIN_PROGRAMA}							{PRINT("Detecta inicio programa: "<<yytext); return FIN_PROG;}
{CONSTANTE_ENTERA}						{PRINT("Detecta constante entera: "<<yytext); return CONSTANTE_INT;}
{CONSTANTE_REAL}						{PRINT("Detecta constante real: "<<yytext); return CONSTANTE_REAL;}
{CONSTANTE_STRING}						{PRINT("Detecta constante string: "<<yytext); return CONSTANTE_STRING;}
{CONSTANTE_STRING_SUPERA}				{PRINT("Detecta string supera maximo: \""<<yytext<<"\" .aborta"); fclose(yyin); exit(2);}
{IF}									{PRINT("Detecta if: "<<yytext); return IF;}
{ENDIF}									{PRINT("Detecta endif: "<<yytext); return ENDIF;}
{THEN}									{PRINT("Detecta then: "<<yytext); return THEN;}	
{ELSE}									{PRINT("Detecta else: "<<yytext); return ELSE;}
{WHILE}									{PRINT("Detecta while: "<<yytext); return WHILE;}
{DO}									{PRINT("Detecta do: "<<yytext); return DO;}
{ENDWHILE}								{PRINT("Detecta endwhile: "<<yytext); return ENDWHILE;}
{IN}									{PRINT("Detecta in: "<<yytext); return IN;}
{LECTURA}								{PRINT("Detecta lectura: "<<yytext); return READ;}
{ESCRITURA}								{PRINT("Detecta escritura: "<<yytext); return WRITE;}
{VAR}									{PRINT("Detecta var declaracion: "<<yytext); return VAR;}
{ENDVAR}								{PRINT("Detecta endvar: "<<yytext); return ENDVAR;}
{SIMBOLO_ESPECIAL_CORCHETE_ABRE}		{PRINT("Detecta simbolo especial: "<<yytext); return CORCHETE_ABRE;}
{SIMBOLO_ESPECIAL_CORCHETE_CIERRA}		{PRINT("Detecta simbolo especial: "<<yytext); return CORCHETE_CIERRA;}
{SIMBOLO_ESPECIAL_PARENTESIS_ABRE}		{PRINT("Detecta simbolo especial: "<<yytext); return PARENT_ABRE;}
{SIMBOLO_ESPECIAL_PARENTESIS_CIERRA}	{PRINT("Detecta simbolo especial: "<<yytext); return PARENT_CIERRA;}
{SIMBOLO_ESPECIAL_COMA}					{PRINT("Detecta simbolo especial: "<<yytext); return COMA;}
{SIMBOLO_ESPECIAL_DOS_PUNTOS}			{PRINT("Detecta simbolo especial: "<<yytext); return DOS_PUNTOS;}
{FUNCION_LONG}							{PRINT("Detecta Funcion Longitud"<<yytext); return FUNCION_LONG;}
{TIPO_INT}								{PRINT("Detecta tipo de dato entero: "<<yytext); return INT;}
{TIPO_REAL}							    {PRINT("Detecta tipo de dato real: "<<yytext); return REAL;}
{TIPO_STRING}						    {PRINT("Detecta tipo de dato string: "<<yytext); return STRING;}
{OPERADOR_STRING}						{PRINT("Detecta operador string: "<<yytext); return MAS_STRING;}
{OPERADOR_NUMERICO_MAS}					{PRINT("Detecta operador numerico: "<<yytext); return MAS;}
{OPERADOR_NUMERICO_MENOS}				{PRINT("Detecta operador numerico: "<<yytext); return MENOS;}
{OPERADOR_NUMERICO_POR}					{PRINT("Detecta operador numerico: "<<yytext); return MUL;}
{OPERADOR_NUMERICO_DIVISION}			{PRINT("Detecta operador numerico: "<<yytext); return DIV;}
{OPERADOR_LOGICO_AND}					{PRINT("Detecta operador logico: "<<yytext); return AND;}
{OPERADOR_LOGICO_OR}					{PRINT("Detecta operador logico: "<<yytext); return OR;}
{OPERADOR_LOGICO_NOT}					{PRINT("Detecta operador logico: "<<yytext); return NOT;}
{OPERADOR_COMPARADOR_MENOR}				{PRINT("Detecta operador comparacion: "<<yytext); return MENOR;}
{OPERADOR_COMPARADOR_MENOR_IGUAL}		{PRINT("Detecta operador comparacion: "<<yytext); return MENOR_IGUAL;}
{OPERADOR_COMPARADOR_MAYOR}				{PRINT("Detecta operador comparacion: "<<yytext); return MAYOR;}
{OPERADOR_COMPARADOR_MAYOR_IGUAL}		{PRINT("Detecta operador comparacion: "<<yytext); return MAYOR_IGUAL;}
{OPERADOR_COMPARADOR_IGUAL}				{PRINT("Detecta operador comparacion: "<<yytext); return IGUAL;}
{OPERADOR_COMPARADOR_DISTINTO}			{PRINT("Detecta operador comparacion: "<<yytext); return DISTINTO;}
{ASIGNACION}							{PRINT("Detecta asignacion: "<<yytext); return ASIGNACION;}
{COMENTARIO}							{PRINT("Detecta comentario: "<<yytext); }
{CARRI_LINE}							{lineCounter++;PRINT("Detecta salto de linea: "<<yytext); }
{ESPACIO}								{PRINT("Detecta espacio: "<<yytext);}
{PALABRA}								{PRINT("Detecta id: "<<yytext); return ID;}
{UNRECOGNIZED}							{PRINT("*** Error Unrecognized Token: \""<<yytext<<"\". Line Number: "<<lineCounter); fclose(yyin); exit(1);} 
%%


