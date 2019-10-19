#include "ListaDobleEnlazada.h"
ListaDobleEnlazada::ListaDobleEnlazada() {
	first = nullptr;
	last = nullptr;
	nElementos = 0;
}

bool ListaDobleEnlazada::ListaVacia() {
	return first == nullptr;
}

void ListaDobleEnlazada::Insertar(int valor) {

	NumMadera *newNum = new NumMadera;
	newNum->valor = valor;
	if (first == nullptr || last == nullptr)
	{
		first = newNum;
		last = newNum;
		first->anteriorNum = last;
		last->siguienteNum = first;
		nElementos++;
	}
	else
	{
		newNum->anteriorNum = last;
		newNum->siguienteNum = first;
		first = newNum;
		last->siguienteNum = first;
		(first->siguienteNum)->anteriorNum = first;
		nElementos++;
	}
}

NumMadera ListaDobleEnlazada::ObtenerNum(int num) {
	if (last == nullptr)
	{
		return *new NumMadera();//De estar vacía la cola, debemos devolver un NumMadera vacío.
	}
	else
	{
		NumMadera* newNum = new NumMadera();
		newNum = first;
		for (int i = 0; i < nElementos; i++)
		{
			if (newNum->valor == num)
			{
				if (nElementos > 1)
				{
					(newNum->anteriorNum)->siguienteNum = newNum->siguienteNum;
					(newNum->siguienteNum)->anteriorNum = newNum->anteriorNum;
					first = first->siguienteNum;
				}
				else
				{
					first = nullptr;
					last = nullptr;
					nElementos--;
					return *newNum;
				}
				nElementos--;
				return *newNum;
			}
			else
			{
				newNum = newNum->siguienteNum;
			}
		}

		return *new NumMadera();
	}
}
