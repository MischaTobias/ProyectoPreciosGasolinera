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
	NumMadera ObtenerNum(int num);
};

