#include "ListaDobleEnlazada.h"
ListaDobleEnlazada::ListaDobleEnlazada() {

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
	}
	else
	{
		newNum->anteriorNum = last;
		newNum->siguienteNum = first;
		first = newNum;
		last->siguienteNum = first;
		(first->siguienteNum)->anteriorNum = first;
	}
}


void ListaDobleEnlazada::InsertarAlFinal(int valor) {

	NumMadera *newNum = new NumMadera;
	newNum->valor = valor;
	if (first == nullptr || last == nullptr)
	{
		last = newNum;
		first = newNum;
		last->siguienteNum = first;
		first->anteriorNum = last;
	}
	else
	{
		last->siguienteNum = newNum;
		newNum->anteriorNum = last;
		last = newNum;
		last->siguienteNum = first;
		first->anteriorNum = last;
	}
}
void ListaDobleEnlazada::EliminarUnNum(int pos)
{
	NumMadera *newNum = new NumMadera;
	if (pos == 1)
	{
		if (first == nullptr)
		{
			//Console::WriteLine("La lista está vacía");
		}
	}
	else
	{
		newNum = first;
		for (int i = 1; i < pos; i++)
		{
			newNum = newNum->siguienteNum;
		}
		(newNum->siguienteNum)->anteriorNum = newNum->anteriorNum;
		(newNum->anteriorNum)->siguienteNum = newNum->siguienteNum;
		delete newNum;
	}

}

void ListaDobleEnlazada::InsertarEnPos(int valor, int pos)
{
	NumMadera *newNum = new NumMadera;
	NumMadera *numAux = new NumMadera;
	NumMadera *numAux2 = new NumMadera;

	newNum->valor = valor;
	if (pos == 1)
	{
		Insertar(valor);
	}
	else
	{
		numAux = first;
		for (int i = 1; i < pos; i++)
		{
			numAux = numAux->siguienteNum;
			numAux2 = numAux->anteriorNum;
		}

		newNum->siguienteNum = numAux2->siguienteNum;
		(numAux->anteriorNum)->siguienteNum = newNum;
		newNum->anteriorNum = numAux->anteriorNum;
		(newNum->siguienteNum)->anteriorNum = newNum;
	}
}


System::String^ ListaDobleEnlazada::MostrarNums() {
	NumMadera *newNum = new NumMadera;
	newNum = first;
	System::String^ nums = "";
	for (int i = 0; i < nElementos; i++)
	{
		nums += (newNum->valor).ToString();
	}

	return nums;
}
