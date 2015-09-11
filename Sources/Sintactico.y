%{
int yylex(void);
void yyerror(const char *);
#include "Singleton.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
extern FILE *yyin;
%}
%token regla
%%
algo: regla

%%

int main(int argc,char **argv)
{
	Singleton::getInstance()->mostrarMensage();
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
	
	//yyparse();
	return 0;
}

void yyerror(const char *)
{}