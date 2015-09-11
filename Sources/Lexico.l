%{
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Singleton.hpp"
using namespace std;
int lineCounter=1;
%}
%option noyywrap  
%option yylineno
CONSTANTE_ENTERA_AUX		{NUMERO}+
CONSTANTE_REAL_AUX			{CONSTANTE_ENTERA_AUX}"."{CONSTANTE_ENTERA_AUX}|"."{CONSTANTE_ENTERA_AUX}|{CONSTANTE_ENTERA_AUX}"."
CONSTANTE_ENTERA			{CONSTANTE_ENTERA_AUX}|"-"{CONSTANTE_ENTERA_AUX}
CONSTANTE_REAL				{CONSTANTE_REAL_AUX}|"-"{CONSTANTE_REAL_AUX}	
CONSTANTE					{CONSTANTE_ENTERA}|{CONSTANTE_REAL}
CONSTANTE_STRING			\".{0,30}\"
CONSTANTE_STRING_SUPERA		\".{31,}\"
DIGITO						NUMERO|LETRA|CARACTER_ESPECIAL
IF							"IF"
ENDIF						"ENDIF"
WHILE						"WHILE"
DO							"DO"
ENDWHILE					"ENDWHILE"
IN							"IN"
LECTURA						"READ"
ESCRITURA					"WRITE"
VAR							"VAR"
ENDVAR						"ENDVAR"
SIMBOLOS_ESPECIALES			"["|"]"|"("|")"|","|":"
FUNCION_LONG				"Longitud"
TIPO_DATO					"Integer"|"String"|"Float"
PALABRA						{LETRA}+{DIGITO}*
LETRA						[a-zA-Z]
NUMERO						[0-9]
CARACTER_ESPECIAL			_|-|
OPERADOR_STRING				"++"
OPERADOR_NUMERICO			"+"|"-"|"*"|"/"
OPERADOR_LOGICO				"and"|"or"|"not"
OPERADOR_COMPARADOR			"<"|">"|"<="|">="|"=="|"!="
ASIGNACION					":="
COMENTARIO					"-/".*"-/"
CARRI_LINE					\n
ESPACIO						" "|\t
UNRECOGNIZED				.
%%
{CONSTANTE_ENTERA}			{cout<<"Detecta constante entera: "<<yytext<<endl;}
{CONSTANTE_REAL}			{cout<<"Detecta constante real: "<<yytext<<endl;}
{CONSTANTE_STRING}			{cout<<"Detecta constante string: "<<yytext<<endl;}
{CONSTANTE_STRING_SUPERA}	{cout<<"Detecta constante string supera maximo: "<<yytext<<endl;}
{IF}						{cout<<"Detecta if: "<<yytext<<endl;}
{ENDIF}						{cout<<"Detecta endif: "<<yytext<<endl;}	
{WHILE}						{cout<<"Detecta while: "<<yytext<<endl;}
{DO}						{cout<<"Detecta do: "<<yytext<<endl;}
{ENDWHILE}					{cout<<"Detecta endwhile: "<<yytext<<endl;}
{IN}						{cout<<"Detecta in: "<<yytext<<endl;}
{LECTURA}					{cout<<"Detecta lectura: "<<yytext<<endl;}
{ESCRITURA}					{cout<<"Detecta escritura: "<<yytext<<endl;}
{VAR}						{cout<<"Detecta var declaracion: "<<yytext<<endl;}
{ENDVAR}					{cout<<"Detecta endvar: "<<yytext<<endl;}
{SIMBOLOS_ESPECIALES}		{cout<<"Detecta simbolo especial: "<<yytext<<endl;}
{FUNCION_LONG}				{cout<<"Detecta Funcion Longitud"<<yytext<<endl;}
{TIPO_DATO}					{cout<<"Detecta tipo de dato: "<<yytext<<endl;}
{OPERADOR_STRING}			{cout<<"Detecta operador string: "<<yytext<<endl;}
{OPERADOR_NUMERICO}			{cout<<"Detecta operador numerico: "<<yytext<<endl;}
{OPERADOR_LOGICO}			{cout<<"Detecta operador logico: "<<yytext<<endl;}
{OPERADOR_COMPARADOR}		{cout<<"Detecta comparador: "<<yytext<<endl;}
{ASIGNACION}				{cout<<"Detecta asignacion: "<<yytext<<endl;}
{COMENTARIO}				{cout<<"Detecta comentario: "<<yytext<<endl;}
{CARRI_LINE}				{lineCounter++;cout<<"Detecta salto de linea: "<<yytext<<endl;}
{ESPACIO}					{cout<<"Detecta espacio: "<<yytext<<endl;}
{PALABRA}					{cout<<"Detecta id: "<<yytext<<endl;}
{UNRECOGNIZED}				{cout<<"*** Error Unrecognized Token: \""<<yytext<<"\". Line Number: "<<lineCounter<<endl;} 


%%


