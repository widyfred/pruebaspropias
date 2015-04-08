//============================================================================
// Name        : ejercicio5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "includes.h"
#include "funciones.h"
#include "vectores.h"
#include "estructuras.h"
#include "interfaz.h"
#include "menus.h"


int main() {
srand(time(NULL));


	creaPacientes();

	menu();
	//cout << "bye bye" << endl;


	return 0;
}
