#pragma once
#include "NumMadera.h"
class Cola
{
public:
	NumMadera* first; //Cuando creamos la cola, inicializamos el first y el last (primer y último valor) de la cola como nulo.
	NumMadera* last;
	int nElementos;//Contador que facilitará el recorrer la cola al buscar los números.
	void Encolar(int valor); //Recibe un NumMadera para ingresar a la cola.
	NumMadera Desencolar(); //Sacar carta de la pila.
	NumMadera ObtenerPrimero(); //Obtener carta en la cima sin sacarla.
	bool ColaVacia();
	bool ExisteNum(int num);
public:
	Cola();
	~Cola();
};


