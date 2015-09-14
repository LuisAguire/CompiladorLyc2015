/*
 * TablaSimbolos.hpp
 *
 *  Created on: Sep 14, 2015
 *      Author: laser
 */

#ifndef SOURCES_TABLASIMBOLOS_HPP_
#define SOURCES_TABLASIMBOLOS_HPP_
#include <string>
#include <vector>
#include <map>
using namespace std;

class TablaSimbolos
{
		typedef struct
		{
			string tipo;
			int lineNro;
		}VariablesDefinidas;

		typedef enum
		{
			EstadoAceptaDeclaraciones=0,
			EstadoValidaIds
		}EstadoTS;

		EstadoTS currentState;
		vector<string> currentTipos;
		vector<string> currentIds;
		int lastLine;
		map<string,VariablesDefinidas> variables;
		static TablaSimbolos *instance;
		TablaSimbolos();
	public:
		static TablaSimbolos *getInstance();
		void inicioDeDeclaraciones();
		void finDeDeclaraciones();
		void addTipo(string tipo);
		void addId(string name,int lineNro);
		void finDeclaracionActual();
		virtual ~TablaSimbolos();
	protected:
		bool isIdPresent(string,VariablesDefinidas *data=0);
		void generarFile();

};

#define TS_INICIO_DECLARACIONES		TablaSimbolos::getInstance()->inicioDeDeclaraciones()
#define TS_FIN_DECLARACIONES		TablaSimbolos::getInstance()->finDeDeclaraciones()
#define TS_ADD_TIPO(x)				TablaSimbolos::getInstance()->addTipo(x)
#define TS_ADD_ID(name,line)		TablaSimbolos::getInstance()->addId(name,line)
#define TS_FIN_DECLARACION_ACTUAL	TablaSimbolos::getInstance()->finDeclaracionActual()

#endif /* SOURCES_TABLASIMBOLOS_HPP_ */
