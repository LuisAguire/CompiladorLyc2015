/*
 * TablaSimbolos.cpp
 *
 *  Created on: Sep 14, 2015
 *      Author: laser
 */

#include "TablaSimbolos.hpp"
#include <iostream>
#include <stdlib.h>

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

}
void TablaSimbolos::addTipo(string tipo)
{
	cout<<"Agrega tipo :"<<tipo<<endl;
	if(currentState==EstadoValidaIds)
	{
		cout<<"*** Fatal error, aborta "<<endl;
		exit(3);
	}
	currentTipos.push_back(tipo);
}

void TablaSimbolos::addId(string name,int lineNro)
{
	cout<<"Agrega id :"<<name<<endl;
	if( currentState==EstadoValidaIds)
	{
		if(isIdPresent(name))
			return;
		cout<<"*** Error, undefined reference to "<<name<<endl;
		exit(4);
	}

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
	int max=(currentTipos.size()>currentIds.size()?currentIds.size():currentTipos.size());
	for( int x=0;x<max;x++)
	{
		VariablesDefinidas aux;
		aux.tipo=currentTipos[x];
		aux.lineNro=lastLine;
		variables.insert(pair<string,VariablesDefinidas>(currentIds[x],aux));
	}
	currentIds.clear();
	currentTipos.clear();
}

bool TablaSimbolos::isIdPresent(string name,VariablesDefinidas *data)
{
	cout<<"Busca id: " <<name<<endl;
	map<string,VariablesDefinidas>::iterator it=variables.find(name);
	if(it==variables.end())
	{
		cout<<" no encontro en mapa"<<endl;
		vector<string>::iterator ids=currentIds.begin();
		while(ids!=currentIds.end())
		{
			cout<<"Busca en vector"<<endl;
			if(*ids==name)
			{
				cout<<"LLEGO ACA"<<endl;
				if(data)
					data->lineNro=lastLine;
				return true;
			}
			cout<<"LLEGO ACA"<<endl;
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

TablaSimbolos::~TablaSimbolos()
{
}

