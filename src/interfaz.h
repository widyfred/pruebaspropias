/*
 * interfaz.h
 *
 *  Created on: 25/03/2015
 *      Author: luis
 */

#ifndef INTERFAZ_H_
#define INTERFAZ_H_
t_citas cita[5][8];

void creaPacientes(){

	int cont = 0;
		do{

			int f = alea(0,4);
			int c = alea(0,7);

			if(cita[f][c].pacientes.nif == ""){
			cita[f][c].dia = alea(0,4);
			cita[f][c].hora = alea(0,7);
			cita[f][c].pacientes.nombre = generaNombre(alea(0,9));
			cita[f][c].pacientes.apellido = generaApellido(alea(0,9)) + " " + generaApellido(alea(0,9));
			cita[f][c].pacientes.fechanac = alea(1,30)*10000 + alea(1,12)*100 + alea(30,15);
			string nDni = aleaNum(8);
			nDni += aleaMay(1);
			cita[f][c].pacientes.nif = nDni;
			cont++;
			}

		}while(cont<10);

		for(int i = 0; i < 5;i++){

			int j = 0;

			for(j = 0; j < 8;j++){

			if(cita[i][j].pacientes.nombre != "" ){
			cout << "nombre: " << cita[i][j].pacientes.nombre << " " << cita[i][j].pacientes.apellido <<  " cita - ";
			cout << "dni: " << cita[i][j].pacientes.nif<< " ";
			cout << "dia: "<< cita[i][j].dia<< " ";
			cout << "hora: "<< cita[i][j].hora<< endl;


			   }
			}
			cout << endl;

		}
}

void verMatriz(){

	int i;
	int j;
	int k;
	//int c;
	for(k = 0; k < 8 ;k++){
	cout << "\t hora" << k + 1 << " " ;
	}
	cout << endl;
	for( i = 0; i < 5 ;i++){
		cout << endl;
		cout << " dia:" << i + 1 << " ";
		for( j = 0; j < 8; j++ ){

			if(cita[i][j].pacientes.nif==""){

				cout <<  "    -   ";

			}
			else{

				cout <<  "    X   ";

			}
	}
	}

	cout << endl;
return;
}

void insertarCita(){
	string nom, ape, dni;
	int d, h;
	bool flag;
	int opa = 0;

	do{
	flag = false;
	cout << "introduce dia:" << endl;
	cin >> d;
	cout << "introduce hora:" << endl;
	cin >> h;

	d = d -1;
	h = h -1;

	if(cita[d][h].pacientes.nif != ""){

		cout << "horario ya adjudicado:";

			cout << "1 anular y salir al menú \n2 volver a adjudicar horario";
			cin >> opa;
			if(opa == 2){flag = true;}

	}
	}while(flag);

	if(opa != 1){
	cita[d][h].dia = d;
	cita[d][h].hora = h;
	cout << "introduce nombre:" << endl;
	cin >> nom;
	cita[d][h].pacientes.nombre = nom;
	cout << "introduce apellidos:" << endl;
	cin >> ape;
	cita[d][h].pacientes.apellido = ape;
	cout << "introduce dni:" << endl;
		cin >> dni;
		cita[d][h].pacientes.nif = dni;

	}
}

void modificarCita(){
	string nom, ape;
	int d, h;
	bool flag;
	int opa = 0;
	string dni;
	do{
	flag = false;
	cout << "introduce dia:" << endl;
	cin >> d;
	cout << "introduce hora:" << endl;
	cin >> h;

	d = d -1;
	h = h -1;

	if(cita[h][d].pacientes.nif != ""){

		cout << "horario ya adjudicado:";

			cout << "1 anular y salir al menú \n2 volver a adjudicar horario";
			cin >> opa;
			if(opa == 2){flag = true;}

	}
	}while(flag);

	if(opa != 1){
	cita[d][h].dia = d;
	cita[d][h].hora = h;
	cout << "introduce nombre:" << endl;
	cin >> nom;
	cita[d][h].pacientes.nombre = nom;
	cout << "introduce apellidos:" << endl;
	cin >> ape;
	cita[d][h].pacientes.apellido = ape;
	cout << "introduce dni:" << endl;
	cin >> dni;
	cita[d][h].pacientes.nif = dni;
	}
}

void borrarCita(){
	string nom, ape;
	int d, h;
	bool flag;
	int opa = 0;

	do{
	flag = false;
	cout << "introduce dia:" << endl;
	cin >> d;
	cout << "introduce hora:" << endl;
	cin >> h;

	d = d -1;
	h = h -1;

	if(cita[d][h].pacientes.nif != ""){

		cout << "horario ya adjudicado:";

			cout << "\n1 anular y salir al menú \n2 borrar";
			cin >> opa;
			if(opa == 2){
				cita[d][h].pacientes.nif = "";
				cita[d][h].pacientes.nombre = "";
				cita[d][h].pacientes.apellido = "";
				flag = true;
			}

	}
	}while(!flag);

	if(opa != 1){
	cita[d][h].dia = d;
	cita[d][h].hora = h;
	cita[d][h].pacientes.nombre = "";
	cita[d][h].pacientes.apellido = "";
	}
}
void consultarCita(){
	int d, i;
	bool flag;

	flag = false;
	cout << "introduce dia:" << endl;
	cin >> d;

	d = d -1;

	for(i = 0; i < 8; i++){

		if(cita[d][i].pacientes.nif != ""){
		cout << cita[d][i].pacientes.nombre <<  " " << cita[d][i].pacientes.apellido << endl;
		flag = true;
		}
		else{

		}
	}

	if(flag != true){
		cout << "no existen citas para este dia";
	}
}
#endif /* INTERFAZ_H_ */
