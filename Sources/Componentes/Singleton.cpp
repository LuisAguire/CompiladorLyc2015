/*
 * Singleton.cpp
 *
 *  Created on: Sep 11, 2015
 *      Author: laser
 */

#include "Singleton.hpp"
#include <iostream>
using namespace std;
Singleton *Singleton::instance=0;

Singleton::Singleton()
{

}

Singleton* Singleton::getInstance()
{
	if(instance==0)
		instance=new Singleton;
	return instance;
}

void Singleton::mostrarMensage()
{
	cout<<"Mi mensage"<<endl;
}

Singleton::~Singleton()
{
}

