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
	void InsertarAlFinal(int valor);
	void InsertarEnPos(int valor, int pos);
	System::String^ MostrarNums();
	void EliminarUnNum(int pos);
};

