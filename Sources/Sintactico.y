%{
int yylex(void);
void yyerror(const char *);
#include "Singleton.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
extern FILE *yyin;
extern int lineCounter;
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

%left MAS MENOS
%left MUL DIV							


%%
	
inicio: INICIO_PROG declaracion lista_sentencia FIN_PROG 				{PRINT("Inicio de programa");};
		| INICIO_PROG declaracion FIN_PROG 								{PRINT("Inicio de Programa solo declaracion");};
		| INICIO_PROG lista_sentencia FIN_PROG							{PRINT("Inicio de Programa solo sentencias");};
		| INICIO_PROG FIN_PROG 											{PRINT("Inicio de programa vacio");};

															

lista_sentencia : sentencia 											{ PRINT("Sentencia"); };
                | lista_sentencia sentencia 							{ PRINT("Lista de Sentencias"); };

sentencia : iteracion 													{PRINT("Loop");};
          | decision 													{PRINT("Condicion");};
          | asignacion 													{PRINT("Igualacion");};
          | impresion 													{PRINT("Standard output");};
          | ingreso 													{PRINT("Standard input");};


iteracion : WHILE cond DO 												{PRINT("While");} 
			lista_sentencia ENDWHILE 									{PRINT("While step");};

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

termino: termino MUL factor 											{PRINT("Termino por factor");};
       | termino DIV  factor 											{PRINT("Termino div factor");};
       | factor 														{PRINT("Termino factor");};

factor : IID 															{PRINT("Identificador");};
       | cte 															{PRINT("Constante");};
       | PARENT_ABRE exp PARENT_CIERRA 									{PRINT("Expresion entre parentesis");};

asignacion :  IID ASIGNACION exp 										{PRINT("Asignacion");};

impresion : WRITE IID 													{PRINT("Standard output Identificador");};
          | WRITE cadena 												{PRINT("Standard output constante");};
		

ingreso: READ IID 														{PRINT("Standard input");};

decisionPrimera : IF cond THEN 											{PRINT("if sin else aux")};
				
decision : decisionPrimera lista_sentencia ENDIF 						{ PRINT("if sin else body");};
         | decisionPrimera lista_sentencia ELSE	lista_sentencia ENDIF 	{PRINT("if con else\n");};



declaracion: VAR lista_declaraciones ENDVAR 							{PRINT("Declaraciones de variables");};

lista_declaraciones: tipo IID 			  								{PRINT("Declaracion sub i");};
					| lista_declaraciones tipo IID				 		{PRINT("declaracion de variables");};
					
cte : CONSTANTE_REAL 													{PRINT("Constante real");};
    | CONSTANTE_INT  													{PRINT("Constante entera");};
    | CONSTANTE_STRING 													{PRINT("Constante string");}; 
	
	
concatenacion:  cadena CONCATENACION cadena 							{PRINT("Concatena Cadena ");};
			   | IID CONCATENACION cadena 								{PRINT("Concatena Identificador Cadena");};
			   | cadena CONCATENACION IID 								{PRINT("Concatena Cadena Identificador");};
			   | IID CONCATENACION IID 									{PRINT("Concatena Identificador Identificador\n");}; 
    
tipo :  REAL 															{PRINT("tipo real");};
	| INT 																{PRINT("tipo entero");};
	| STRING 															{PRINT("tipo string");};

cadena : CONSTANTE_STRING												{PRINT("Constante string");};

IID : ID 																{PRINT("Id");};

%%


int main(int argc,char **argv)
{
	Singleton::getInstance()->mostrarMensage();
	if(argc<2)
	{
		PRINT("Ingrese el archivo a compilar");
		return -1;
	}
	yyin=fopen(argv[1],"r");
	if(yyin==NULL)
	{
		PRINT("Error abriendo archivo "<<argv[1]);
		return -1;
	}
	
	yyparse();
	
	return 0;
}

void yyerror(const char *error)
{
	PRINT(error<<" line number: "<<lineCounter);
}