%{
int yylex(void);
void yyerror(const char *);
#include "TablaSimbolos.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "System.h"
using namespace std;
extern FILE *yyin;
extern int lineCounter;
extern char *yytext;
bool compileSucess=false;
#define PRINT(x)			cout<<"Sintactico: "<<x<<endl;
%}

%start inicio
%token INICIO_PROG 
%token FIN_PROG 
%token WHILE 
%token DO 
%token ENDWHILE
%token FUNCION_LONG
%token IN
%token AND 
%token OR 
%token NOT 
%token MAYOR 
%token MAYOR_IGUAL
%token MENOR
%token MENOR_IGUAL
%token IGUAL
%token DISTINTO
%token MAS
%token MENOS
%token MUL
%token DIV
%token MAS_STRING
%token ASIGNACION
%token PARENT_ABRE
%token PARENT_CIERRA
%token WRITE
%token READ
%token IF
%token THEN
%token ENDIF
%token ELSE
%token COMA
%token REAL
%token INT
%token STRING
%token CORCHETE_ABRE
%token CORCHETE_CIERRA
%token DOS_PUNTOS
%token PUNTO
%token VAR
%token ENDVAR
%token CONCATENACION
%token CONSTANTE_STRING
%token CONSTANTE_INT
%token CONSTANTE_REAL
%token COMENTARIO
%token COMENTARIO2
%token CONST
%token ID
%token END_OF_FILE

%left MAS MENOS
%left MUL DIV							


%%


inicio: INICIO_PROG declaracion lista_sentencia FIN_PROG END_OF_FILE	{PRINT("Inicio de programa completo"); compileSucess=true; TS_INICIO_DECLARACIONES;};
		| INICIO_PROG declaracion FIN_PROG END_OF_FILE					{PRINT("Inicio de Programa solo declaracion");compileSucess=true; TS_INICIO_DECLARACIONES;};
		| INICIO_PROG lista_sentencia FIN_PROG	END_OF_FILE 			{PRINT("Inicio de Programa solo sentencias");compileSucess=true; TS_FIN_DECLARACIONES;};
		| INICIO_PROG FIN_PROG END_OF_FILE								{PRINT("Inicio de programa vacio");compileSucess=true;TS_FIN_DECLARACIONES;};

															


lista_sentencia : sentencia 											{ PRINT("Sentencia"); };
                | lista_sentencia sentencia 							{ PRINT("Lista de Sentencias"); };

sentencia : iteracion 													{PRINT("Sentencia loop");};
          | decision 													{PRINT("Sentencia condicion");};
          | asignacion 													{PRINT("Sentencia igualacion");};
          | impresion 													{PRINT("Sentencia standard output");};
          | ingreso 													{PRINT("Sentencia standard input");};
          | exp															{PRINT("Sentencia exp");};


iteracion : WHILE cond DO 												{PRINT("While");} 
			lista_sentencia ENDWHILE 									{PRINT("While step");};
		  | WHILE IID IN 												{PRINT("WhileIN cabecera");}
	    	CORCHETE_ABRE lista_expresiones CORCHETE_CIERRA				{PRINT("WhileIN expresiones");}
	    	DO lista_sentencia ENDWHILE									{PRINT("WhileIN sentencias");};
			

lista_expresiones : exp													{PRINT("WhileIN expresion");}; 
		  | lista_expresiones COMA exp									{PRINT("WhileIN expresiones");};

cond : exp_logica AND exp_logica				 						{PRINT("Expresion logica and");};
     | exp_logica OR exp_logica 										{PRINT("Expresion logica or");};
     | exp_logica 														{PRINT("Expresion logica");};
     | NOT exp_logica 													{PRINT("Expresion logica NOT");};

exp_logica : exp comp exp				 								{PRINT("Expresion logica");};

comp : MAYOR_IGUAL 														{PRINT("Comparacion mayor igual");};
     | MENOR_IGUAL 														{PRINT("Comparacion menor igual");};
     | DISTINTO 														{PRINT("Comparacion distinto");};
     | IGUAL 															{PRINT("Comparacion igual");};
     | MAYOR 															{PRINT("Comparacion mayor");};
     | MENOR				 											{PRINT("Comparacion menor");};

exp : exp MAS termino 													{PRINT("Expresion suma termino");};
    | exp MENOS termino 												{PRINT("Expresion menos termino");};
    | termino 															{PRINT("Expresion termino");};
	| concatenacion 													{PRINT("Expresion concatenacion");};
	| funcion_Longitud

funcion_Longitud: FUNCION_LONG PARENT_ABRE CORCHETE_ABRE
					 valores_func_long 
			 	CORCHETE_CIERRA PARENT_CIERRA							{PRINT("Funcion longitud");};

valores_func_long: exp													{PRINT("Funcion longitud valor final");};			
				|valores_func_long COMA exp								{PRINT("Funcion longitud valor sub i");};

termino: termino MUL factor 											{PRINT("Termino por factor");};
       | termino DIV  factor 											{PRINT("Termino div factor");};
       | factor 														{PRINT("Termino factor");};

factor : IID 															{PRINT("Identificador");};
       | cte 															{PRINT("Constante");};
       | PARENT_ABRE exp PARENT_CIERRA 									{PRINT("Expresion entre parentesis");};

asignacion :  IID ASIGNACION exp 										{PRINT("Asignacion");};

impresion : WRITE exp 													{PRINT("Standard output Identificador");};
          | WRITE cadena 												{PRINT("Standard output constante");};
		

ingreso: READ IID 														{PRINT("Standard input");};

decisionPrimera : IF cond THEN 											{PRINT("if sin else aux")};
				
decision : decisionPrimera lista_sentencia ENDIF 						{ PRINT("if sin else body");};
         | decisionPrimera lista_sentencia ELSE	lista_sentencia ENDIF 	{PRINT("if con else\n");};



declaracion: VAR lista_declaraciones ENDVAR 							{PRINT("Declaraciones de variables"); TS_FIN_DECLARACIONES;};

lista_declaraciones: tipo IID 			  								{PRINT("Declaracion sub i");};
					| lista_declaraciones tipo IID				 		{PRINT("Declaracion de variabl"); TS_FIN_DECLARACION_ACTUAL;};
					| declaracion_especial								{PRINT("Declaracion de variable especial"); TS_FIN_DECLARACION_ACTUAL;}
					| lista_declaraciones declaracion_especial			{PRINT("Declaracion especial sub i");}

declaracion_especial:	tipos_datos_varios DOS_PUNTOS ids_datos_varios	{PRINT("Declaracion especial tipo dos puntos ids"); TS_FIN_DECLARACION_ACTUAL;}

tipos_datos_varios: CORCHETE_ABRE tipos_datos CORCHETE_CIERRA			{PRINT("Declaracion especial corchete tipos corchete");}

ids_datos_varios:CORCHETE_ABRE ids_datos CORCHETE_CIERRA				{PRINT("Declaracion especial corchete ids corchete");}

tipos_datos: tipo														{PRINT("Declaracion especial tipo");}
			|tipo COMA tipos_datos										{PRINT("Declaracion especial tipo coma");}	
			
ids_datos: IID															{PRINT("Declaracion especial id");}
		| IID COMA ids_datos											{PRINT("Declaracion especial id coma");}
	
 
					
cte : CONSTANTE_REAL 													{PRINT("Constante real");};
    | CONSTANTE_INT  													{PRINT("Constante entera");};
    | CONSTANTE_STRING 													{PRINT("Constante string");}; 
	
	
concatenacion:  cadena CONCATENACION cadena 							{PRINT("Concatena Cadena ");};
			   | IID CONCATENACION cadena 								{PRINT("Concatena Identificador Cadena");};
			   | cadena CONCATENACION IID 								{PRINT("Concatena Cadena Identificador");};
			   | IID CONCATENACION IID 									{PRINT("Concatena Identificador Identificador\n");};
			   | concatenacion  CONCATENACION IID
			   |  concatenacion  CONCATENACION cadena
    
tipo :  REAL 															{PRINT("tipo real"); TS_ADD_TIPO(yytext);};
	| INT 																{PRINT("tipo entero"); TS_ADD_TIPO(yytext);};
	| STRING 															{PRINT("tipo string"); TS_ADD_TIPO(yytext);};

cadena : CONSTANTE_STRING												{PRINT("Constante string");};

IID : ID 																{PRINT("Id"); TS_ADD_ID(yytext,lineCounter);};

%%


int main(int argc,char **argv)
{
	cout<<APP_ABOUT<<endl;	
	if(argc<2)
	{
		cout<<"Ingrese el archivo a compilar."<<endl;
		return -1;
	}
	yyin=fopen(argv[1],"r");
	if(yyin==NULL)
	{
		cout<<"Error abriendo archivo: "<<argv[1]<<endl;
		return -1;
	}
	
	yyparse();
	
	return 0;
}

void yyerror(const char *error)
{
	if(compileSucess)
	{
		PRINT("Compilacion OK");
		fclose(yyin);
		exit(0);
	}
	PRINT(error<<" line number: "<<lineCounter);
}