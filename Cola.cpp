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
	numMaderaNuevo->valor = valor; //Meter el nuevo número dentro de un nodo NumMadera.
	if (last == nullptr && first == nullptr)
	{
		first = numMaderaNuevo;//De estar vacía la cola, debememos establecer el numMadera que ingresen como el first y el last de la cola.
		last = numMaderaNuevo;
	}
	else
	{
		last->siguienteNum = numMaderaNuevo;//Al encolar, el nuevo NumMadera se convierte en el último elemento de la cola. El anterior NumMadera apunta al nuevo.
		last = numMaderaNuevo;
	}
	nElementos++;//Cada vez que encolemos un nuevo numMadera, debemos contar uno más dentro del número de elemenos.
}

NumMadera Cola::Desencolar() {
	if (last == nullptr)
	{
		return *new NumMadera();//De estar vacía la cola, debemos devolver un NumMadera vacío.
	}
	else
	{
		NumMadera* valor = first;
		first = first->siguienteNum;//Si la cola no está vacía, se convierte el siguiente del first en el nuevo first.
		nElementos--;//Al desencolar se reduce el número de elementos en la cola.
		return *valor;
	}
}

NumMadera Cola::ObtenerPrimero() {
	if (first == nullptr)
	{
		return *new NumMadera();//Si está vacío, se devuelve un NumMadera vacío.
	}
	else
	{
		return *first;//Devuelve el valor del número dentro del NumMadera del first.
	}
}