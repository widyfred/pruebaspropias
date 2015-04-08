/*
 * vectores.h
 *
 *  Created on: 19/03/2015
 *      Author: luis
 */

#ifndef VECTORES_H_
#define VECTORES_H_


// archivo “paso.vec.h” donde están las funciones

void cambio_vector(int v[],int tam)
{
	// al ser vector lo que hagamos con v tendra efecto en vecint porque se pasa por referencia
	int t;
	for (t=0;t<tam;t++)
		v[t]=v[t]+1;
}

void imprime_vectorInt (int v[],int tam)
{
	int t;
	for (t=0;t<tam;t++)
					cout<<v[t]<<"/";
			cout <<endl;
}
void imprime_vectorCadena (string v[],int tam)
{
	int t;
	for (t=0;t<tam;t++)
					cout<<v[t]<<"/";
			cout <<endl;
}
void   vectorInt(int v[],int tam)
{
	int t;
	for (t=0;t<tam;t++)
			v[t]=t;
}

void   vectorCadena(string v[],int tam)
{
	int t;
	for (t=0;t<tam;t++)
			v[t]="-";
}


#endif /* VECTORES_H_ */
