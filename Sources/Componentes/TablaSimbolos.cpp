/*
 * TablaSimbolos.cpp
 *
 *  Created on: Sep 14, 2015
 *      Author: laser
 */

#include "TablaSimbolos.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define PRINT(x)
TablaSimbolos* TablaSimbolos::instance=0;

TablaSimbolos::TablaSimbolos()
{
	currentState=EstadoAceptaDeclaraciones;
	lastLine=0;
}

TablaSimbolos *TablaSimbolos::getInstance()
{
	if(!instance)
		instance=new TablaSimbolos;
	return instance;
}
void TablaSimbolos::inicioDeDeclaraciones()
{
	currentState=EstadoAceptaDeclaraciones;
}
void TablaSimbolos::finDeDeclaraciones()
{
	currentState=EstadoValidaIds;
	generarFile();
}
void TablaSimbolos::addTipo(string tipo)
{
	if(currentState==EstadoValidaIds)
	{
		cout<<"*** Fatal error, aborta "<<endl;
		exit(3);
	}
	currentTipos.push_back(tipo);
}

void TablaSimbolos::addId(string name,int lineNro)
{

	if( currentState==EstadoValidaIds)
	{
		PRINT("busca id:"<<name<<".");
		if(isIdPresent(name))
			return;
		cout<<"*** Error, undefined reference to "<<name<<endl;
		exit(4);
	}
	PRINT("agregan id:"<<name<<".");
	VariablesDefinidas varData;
	if(isIdPresent(name,&varData))
	{
		cout<<"*** Error, "<<name<<" is previous defined at line: "<<varData.lineNro<<endl;
		exit(5);
	}
	currentIds.push_back(name);
	lastLine=lineNro;
}

void TablaSimbolos::finDeclaracionActual()
{
	PRINT("Fin de declaracion actual");
	int max=(currentTipos.size()>currentIds.size()?currentIds.size():currentTipos.size());
	PRINT("Maximo: "<<max);
	for( int x=0;x<max;x++)
	{
		VariablesDefinidas aux;
		aux.tipo=currentTipos[x];
		aux.lineNro=lastLine;
		PRINT("Agrega id: "<<currentIds[x]<<" tipo "<<aux.tipo);
		variables.insert(pair<string,VariablesDefinidas>(currentIds[x],aux));
	}
	currentIds.clear();
	currentTipos.clear();
}

bool TablaSimbolos::isIdPresent(string name,VariablesDefinidas *data)
{

	map<string,VariablesDefinidas>::iterator it=variables.find(name);
	if(it==variables.end())
	{
		vector<string>::iterator ids=currentIds.begin();
		while(ids!=currentIds.end())
		{
			if(*ids==name)
			{
				if(data)
					data->lineNro=lastLine;
				return true;
			}
			ids++;
		}
		return false;
	}

	if(data)
	{
		data->lineNro=it->second.lineNro;
		data->tipo=it->second.tipo;
	}
	return true;
}
void TablaSimbolos::generarFile()
{
	map<string,VariablesDefinidas>::iterator it=variables.begin();
	string name="tablaSibolo.txt";
	FILE *file=fopen(name.c_str(),"w");
	if(!file)
	{
		cout<<"*** Error abriendo archivo "<<name<<", no se puede generar la tabla de simbolso"<<endl;
		return;
	}
	fprintf(file,"tipo:id:lineaDeclaraion\n");
	while(it!=variables.end())
	{
		fprintf(file,"%s:%s:%d\n",it->second.tipo.c_str(),it->first.c_str(),it->second.lineNro);
		it++;
	}
	fclose(file);
}
TablaSimbolos::~TablaSimbolos()
{
}

