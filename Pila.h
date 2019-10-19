#pragma once
#include "NumMadera.h"
class Pila
{
public:
	NumMadera* head = nullptr; //Cuando creamos la pila, inicializamos el head (el valor de encima) de la pila como nulo.
	int nElementos = 0;//Contador que facilitará el recorrer la pila al buscar los números.
	void Apilar(int valor); //Procedimiento que recibe un int para ingresar a la pila.
	NumMadera Desapilar(); //Función que saca el NumMadera que se encuentra en el head de la pila.
	NumMadera ObtenerCima(); //Función para obtener el número del head sin sacarlo de la pila.
	bool PilaVacia(); //Función que devuelve un valor de verdad dependiendo de si la pila está vacía o no.
	bool ExisteNum(int num);//Función que devuelve un valor de verdad dependiendo de si el número recibido existe en la pila o no.
public:
	Pila();//Constructores
	~Pila();
};

