#pragma once
#include "NumMadera.h"
class Pila
{
public:
	NumMadera* head = nullptr; //Cuando creamos la pila, inicializamos el head (el valor de encima) de la pila como nulo.
	int nElementos = 0;//Contador que facilitar� el recorrer la pila al buscar los n�meros.
	void Apilar(int valor); //Procedimiento que recibe un int para ingresar a la pila.
	NumMadera Desapilar(); //Funci�n que saca el NumMadera que se encuentra en el head de la pila.
	NumMadera ObtenerCima(); //Funci�n para obtener el n�mero del head sin sacarlo de la pila.
	bool PilaVacia(); //Funci�n que devuelve un valor de verdad dependiendo de si la pila est� vac�a o no.
	bool ExisteNum(int num);//Funci�n que devuelve un valor de verdad dependiendo de si el n�mero recibido existe en la pila o no.
public:
	Pila();//Constructores
	~Pila();
};

