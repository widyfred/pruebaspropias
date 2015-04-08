/*
 * citas.h
 *
 *  Created on: 20/03/2015
 *      Author: luis
 */

#ifndef CITAS_H_
#define CITAS_H_

typedef struct
{
	string nombre;
	string apellido;
	int fechanac;
	string nif;

}t_persona;

typedef struct
{
	int dia;
	int hora;
	t_persona pacientes;

}t_citas;


#endif /* CITAS_H_ */
