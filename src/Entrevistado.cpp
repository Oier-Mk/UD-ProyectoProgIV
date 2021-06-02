/*
 * Entrevistado.cpp
 *
 *  Created on: 2 jun. 2021
 *      Author: aidagomezbuenoberezo
 */

#include "Entrevistado.h"

#include <iostream>
#include <string.h>

using namespace std;


Entrevistado::Entrevistado():Persona(id) {
	this->edad = 0;
}

Entrevistado::Entrevistado(int):Persona(id){
	this->edad = 0;
}

Entrevistado::Entrevistado(const Entrevistado& e){
	this->edad = e.edad;
}

void Entrevistado::setEdad(int e){
	this->edad = e;
}

int Entrevistado::getEdad() const{
	return this->edad;
}

void Entrevistado::imprimir(){
	cout << "EDAD: " << this->edad << endl;
}

Entrevistado::~Entrevistado() {
}

