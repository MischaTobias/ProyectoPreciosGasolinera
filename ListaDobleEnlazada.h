#pragma once
#include "NumMadera.h"
class ListaDobleEnlazada
{
public:
	//Declaraci�n de los atributos, se inicializan los punteros como nulos.
	NumMadera* first = nullptr;
	NumMadera* last = nullptr;
	int nElementos;
public:
	ListaDobleEnlazada(); //Constructor
	void Insertar(int valor); //Funci�n que recibe un entero y lo inserta en la lista.
	bool ListaVacia(); //Funci�n que devuelve un valor de verdad dependiendo de si la lista est� vac�a o no.
	NumMadera ObtenerNum(int num); //Funci�n que devuelve un NumMadera que contiene al n�mero entero que est� siendo buscado dentro de la lista.
};

