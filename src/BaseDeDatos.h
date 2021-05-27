#ifndef BASEDEDATOS_H_
#define BASEDEDATOS_H_
#include <stdio.h>
#include "sqlite3.h"
#include "Api.h"


int abrir();
int escribeF(int i,char* nick);
int escribeE(int i,int e);
int getNEntrevistados();
int escribeSeleccion(int e,int i);
int escribeP(int i,int f);
int escribeR(int i,int p);
int escribeU(char* nick,char* pass);
int existe(int i,int tipo);
int existeUsu(char* usu) ;
int cerrar();
void iniciarSesion(char* usu, char* cont);

#endif 
