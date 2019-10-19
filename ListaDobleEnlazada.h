#pragma once
#include "NumMadera.h"
class ListaDobleEnlazada
{
public:
	//Declaración de los atributos, se inicializan los punteros como nulos.
	NumMadera* first = nullptr;
	NumMadera* last = nullptr;
	int nElementos;
public:
	ListaDobleEnlazada(); //Constructor
	void Insertar(int valor); //Función que recibe un entero y lo inserta en la lista.
	bool ListaVacia(); //Función que devuelve un valor de verdad dependiendo de si la lista está vacía o no.
	NumMadera ObtenerNum(int num); //Función que devuelve un NumMadera que contiene al número entero que está siendo buscado dentro de la lista.
};

