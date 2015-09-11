/*
 * Singleton.hpp
 *
 *  Created on: Sep 11, 2015
 *      Author: laser
 */

#ifndef SOURCES_COMPONENTES_SINGLETON_HPP_
#define SOURCES_COMPONENTES_SINGLETON_HPP_

class Singleton
{
		static Singleton *instance;
		Singleton();
	public:
		static Singleton* getInstance();
		void mostrarMensage();
		virtual ~Singleton();
};

#endif /* SOURCES_COMPONENTES_SINGLETON_HPP_ */
