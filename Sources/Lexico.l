%{
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
%}
%option noyywrap  
%option yylineno

OPERADOR_NUMERICO			"+"|"-"|"*"|"/"
OPERADOR_LOGICO				"and"|"or"
OPERADOR_NEGACION			"not"
OPERADOR_COMPARADOR			"<"|">"|"<="|">="|"=="|"!="
TIPO_DATO					Integer|String|Float
ESPACIO						" "*
NUMERO						[0-9]
CONSTANTE_ENTERA			{ESPACIO}+({NUMERO}+)+{ESPACIO}
CONSTANTE_REAL				{CONSTANTE_ENTERA}+"."+{CONSTANTE_ENTERA}|{ESPACIO}+"."+{CONSTANTE_ENTERA}
CONSTANTE_NUMERICA			{CONSTANTE_ENTERA}|{CONSTANTE_REAL}
CONSTANTE_STRING_AUX		\".{0,30}\"	
CONSTANTE_STRING			{ESPACIO}+{CONSTANTE_STRING_AUX}
CONSTANTE_STRING_SUPERA_AUX	\".{31,}\"
CONSTANTE_STRING_SUPERA		{ESPACIO}+{CONSTANTE_STRING_SUPERA_AUX}
LETRA						[a-zA-Z]
CARACTER_ESPECIAL			_|-|
DIGITO						NUMERO|LETRA|CARACTER_ESPECIAL
PALABRA						{LETRA}({LETRA}|{DIGITO})*
VARIABLE					{TIPO_DATO}+" "+{PALABRA}+";"
MULTI_VAR_LINE				({TIPO_DATO}+",")+
VAR_MULTI					({PALABRA}+",")+
MULTI_VAR					"["+{MULTI_VAR_LINE}+{TIPO_DATO}+"]"+":["+{VAR_MULTI}+{PALABRA}+"];"
PALABRA_OR_CONTANTE_N		{PALABRA}|{CONSTANTE_NUMERICA}
EXPRESION_NUMERICA			("(")*+{PALABRA_OR_CONTANTE_N}+(")")*+{OPERADOR_NUMERICO}
CONJUNTO_DE_EXPRESIONES		({EXPRESION_NUMERICA}+)+{PALABRA_OR_CONTANTE_N}+(")")*
COMPARADOR_NUMERICO			{CONJUNTO_DE_EXPRESIONES}|{PALABRA_OR_CONTANTE_N}
COMPARACION_NUMERICA		{COMPARADOR_NUMERICO}+{OPERADOR_COMPARADOR}+{COMPARADOR_NUMERICO}				
OPERACION_LOGICA_SIMPLE		{COMPARACION_NUMERICA}+{OPERADOR_LOGICO}+{COMPARACION_NUMERICA}
OPERACION_LOGICA			{OPERACION_LOGICA_SIMPLE}|"("+{OPERACION_LOGICA_SIMPLE}+")"
IF							"IF("+{COMPARACION_NUMERICA}+")"|"IF("+{OPERACION_LOGICA}+")"
ENDIF						"ENDIF"
WHILE						"WHILE("+{COMPARACION_NUMERICA}+")"|"WHILE("+{OPERACION_LOGICA}+")"
ENDWHILE					"ENDWHILE"
WRITE						"WRITE "+{PALABRA_OR_CONTANTE_N}
READ						"READ "+{PALABRA}
COMENTARIO					"-/"+.+"-/"
FAIL						.*
LINEA_BLANCO				" "+

%%
{VARIABLE}					{cout<<"DETECTA Declaracion de variable: "<<yytext;}
{COMENTARIO}				{cout<<"DETECTA comentario: "<<yytext;}
{CONSTANTE_ENTERA}			{cout<<"DETECTA Constante entera: "<<yytext;}
{CONSTANTE_REAL}			{cout<<"DETECTA Constante Real: "<<yytext;}
{CONSTANTE_STRING}			{cout<<"DETECTA Constante string: "<<yytext;}
{CONSTANTE_STRING_SUPERA}	{cout<<"DETECTA *** Error sintax, linea nro: "<<yylineno<<". Constante string: "<<yytext<<" .Supera maximo de 30 caracteres: " ;}
{MULTI_VAR}					{cout<<"DETECTA Declaracion multiple variables: "<<yytext;}
{CONJUNTO_DE_EXPRESIONES}	{cout<<"DETECTA Expresion numerica: "<<yytext;}
{COMPARACION_NUMERICA}		{cout<<"DETECTA Comparacion numerica: "<<yytext;}
{OPERACION_LOGICA}			{cout<<"DETECTA Operacion logica: "<<yytext;}
{IF}						{cout<<"DETECTA inicio de if: "<<yytext;}
{ENDIF}						{cout<<"DETECTA Fin de if: "<<yytext;}
{WHILE}						{cout<<"DETECTA Inicio de while: "<<yytext;}
{ENDWHILE}					{cout<<"DETECTA Fin de while: "<<yytext;}
{WRITE}						{cout<<"DETECTA Standard output: "<<yytext;}
{READ}						{cout<<"DETECTA Standard input: "<<yytext;}
{FAIL}						{cout<<"DETECTA *** Error Sintax, linea nro: "<<yylineno<<". Unrecognized simbol: "<<yytext;}
%%

int main(int argc,char **argv)
{
	if(argc<2)
	{
		cout<<"Ingrese el archivo a compilar"<<endl;
		return -1;
	}
	yyin=fopen(argv[1],"r");
	if(yyin==NULL)
	{
		cout<<"Error abriendo archivo "<<argv[1]<<endl;
		return -1;
	}
	yylex();
	return 0;
}