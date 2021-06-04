/*
 * Estadistica.cpp
 *
 *  Created on: 3 jun. 2021
 *      Author: aidagomezbuenoberezo
 */

#include "Estadistica.h"
extern "C"{
	#include "Api.h"
	#include "BaseDeDatos.h"
}

#include "main.h"

#include <iostream>
#include <string.h>

using namespace std;

void sacarResultados(){
	for(int i = 0; i<formularios->nObjetos; i++){											//nObjetos es el número de formularios que hay en el fichero.
		cout << "Existen " << formularios->nObjetos << "formularios disponibles." << endl;
		int nPreguntas = formularios->objetos[i].nPreg;										//Recorremos el array de formularios de la estructura ArrayList.
		cout << "Para el formulario " << formularios->objetos->tit << " hay " << nPreguntas << " preguntas." << endl; //Sacamos de cada formulario, el número de preguntas.
		for(int j = 0; j<nPreguntas; i++){													//Recorremos las preguntas de cada formulario, y sacamos el número de respuestas por pregunta por cada formulario.
			int nRespuestas = formularios->objetos[i].preguntas[j].nResp;
			for(int k=0; k<nRespuestas; k++){
				int nVecesSeleccionada = getNSeleccionda(formularios->objetos[i].preguntas[j].respuestas[k].id);
				printf("%s", formularios->objetos[i].preguntas[j].respuestas[k].resp);
				for(int l = 0; l<nVecesSeleccionada; l++){
					printf("|");
				}
				printf("\n");
			}
		}
	}
}


