//
// Created by Oier Mentxaka on 27/5/21.
//

#ifndef UD_PROYECTOPROGIV_MAIN_H
#define UD_PROYECTOPROGIV_MAIN_H




extern "C" {
	#include "Api.h"
}

#include "sqlite3.h"
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

#include <iostream>

using namespace std;

sqlite3 *db;
int nF;
ArrayList *formularios;

#endif //UD_PROYECTOPROGIV_MAIN_H
