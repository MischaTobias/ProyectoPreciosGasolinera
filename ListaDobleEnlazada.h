#pragma once
#include "NumMadera.h"
class ListaDobleEnlazada
{
public:
	NumMadera* first = nullptr;
	NumMadera* last = nullptr;
	int nElementos;
public:
	ListaDobleEnlazada();
	void Insertar(int valor);
	bool ListaVacia();
	NumMadera ObtenerNum(int num);
};

