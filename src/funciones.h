/*
 * funciones.h
 *
 *  Created on: 17/03/2015
 *      Author: luis
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_


bool esNum(string s) {

	bool flag = true;
	int i;
	int t = s.length();
	for (i = 0; i < t; i++) {
		if (s[i] < 48 || s[i] > 57) {
			flag = false;
			i = s.length() + 1;
		}
	}
	// 0 es falso
	return flag;
}
bool esMay(string s) {

	bool flag = true;
	int i;
	int t = s.length();
	for (i = 0; i < t; i++) {
		if (s[i] < 65 || s[i] > 90) {
			flag = false;
			i = s.length() + 1;
		}
	}
	// 0 es falso
	return flag;
}

bool esMin(string s) {

	bool flag = true;
	int i;
	int t = s.length();
	for (i = 0; i < t; i++) {
		if (s[i] < 97 || s[i] > 122) {
			flag = false;
			i = s.length() + 1;
		}
	}
	// 0 es falso
	return flag;
}

bool esPatron(string patron, string cadena) {

	bool flag = false;
	int cont = 0;
	int i, j;
	int t = cadena.length();
	int p = patron.length();
	for (i = 0; i < t; i++) {
		for (j = 0; j < p; j++) {
			if (cadena[i] == patron[j]) {
				cont++;
			}
		}
	}
	int tp = patron.length();
	if (cont == tp) {
		flag = true;
	}
	return flag;
}

int alea(int dim) {
	int ceros = 1;
	for (int i = 0; i < dim; i++) {
		ceros = ceros * 10;
	}
	int min = ceros;
	int max = ceros * 10 - 1;

	cout << min << "<min:max>" << max << endl;
	int x = rand() % (max - min + 1) + min;

	return x;
}
int alea(int min, int max) {
	int x = rand() % (max - min + 1) + min;

	return x;
}
string aleaMay(int dim) {

	string cadena = "";
	for (int i = 0; i < dim; i++) {
		char x = rand() % (90 - 65 + 1) + 65;
		cadena += x;
	}
	return cadena;
}
string aleaNum(int dim) {

	string cadena = "";
	for (int i = 0; i < dim; i++) {
		char x = rand() % (57 - 48 + 1) + 48;
		cadena += x;
	}
	return cadena;
}

string generaNombre(int p) {
	string nombres[] = { "juan", "jose", "jesus", "julio", "luis", "lorenzo",
			"javier", "anton", "pedro", "marcos" };
	return nombres[p];
}

string generaApellido(int p) {
	string apellidos[10] = { "gracia", "gracia", "rodriguez", "fernandez",
			"martinez", "laborda", "dominguez", "navarrete", "judez", "romero" };
	return apellidos[p];
}
#endif /* FUNCIONES_H_ */
