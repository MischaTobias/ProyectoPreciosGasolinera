#pragma once
#include "NumMadera.h"
class Pila
{
public:
	NumMadera* head = nullptr; //Cuando creamos la pila, inicializamos el head (el valor de encima) de la pila como nulo.
	int nElementos = 0;//Contador que facilitará el recorrer la pila al buscar los números.
	void Apilar(int valor); //Recibe un NumMadera para ingresar a la pila.
	NumMadera Desapilar(); //Saca el NumMadera que se encuentra en el head de la pila.
	NumMadera ObtenerCima(); //Obtener el número del head sin sacarlo de la pila.
	void Ordenar();
	bool PilaVacia();
public:
	Pila();//Constructores
	~Pila();
};

