#include "Cola.h"

Cola::Cola() {
	nElementos = 0;
}

Cola::~Cola() {

}

bool Cola::ColaVacia() {
	return first == nullptr;
}

void Cola::Encolar(int valor) {
	NumMadera* numMaderaNuevo = new NumMadera();
	numMaderaNuevo->valor = valor; //Meter el nuevo n�mero dentro de un nodo NumMadera.
	if (last == nullptr && first == nullptr)
	{
		first = numMaderaNuevo;//De estar vac�a la cola, debememos establecer el numMadera que ingresen como el first y el last de la cola.
		last = numMaderaNuevo;
	}
	else
	{
		last->siguienteNum = numMaderaNuevo;//Al encolar, el nuevo NumMadera se convierte en el �ltimo elemento de la cola. El anterior NumMadera apunta al nuevo.
		last = numMaderaNuevo;
	}
	nElementos++;//Cada vez que encolemos un nuevo numMadera, debemos contar uno m�s dentro del n�mero de elemenos.
}

NumMadera Cola::Desencolar() {
	if (last == nullptr)
	{
		return *new NumMadera();//De estar vac�a la cola, debemos devolver un NumMadera vac�o.
	}
	else
	{
		NumMadera* valor = first;
		first = first->siguienteNum;//Si la cola no est� vac�a, se convierte el siguiente del first en el nuevo first.
		nElementos--;//Al desencolar se reduce el n�mero de elementos en la cola.
		return *valor;
	}
}

NumMadera Cola::ObtenerPrimero() {
	if (first == nullptr)
	{
		return *new NumMadera();//Si est� vac�o, se devuelve un NumMadera vac�o.
	}
	else
	{
		return *first;//Devuelve el valor del n�mero dentro del NumMadera del first.
	}
}