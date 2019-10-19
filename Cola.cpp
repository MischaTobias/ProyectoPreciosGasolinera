#include "Cola.h"

Cola::Cola() {
	//Cuando se inicializa la cola, se establece su cantidad de elementos como 0. Además, se colocan sus punteros first y last como nulos.
	nElementos = 0;
	first = nullptr;
	last = nullptr;
}

Cola::~Cola() {

}

bool Cola::ColaVacia() {
	//Evalúa si el first de la cola es un puntero nulo y devuelve el valor de verdad de esa expresión.
	return first == nullptr;
}

bool Cola::ExisteNum(int num) {
	//Se crea una variable auxiliar tipo NumMadera que servirá para recorrer la cola.
	NumMadera* aux = new NumMadera;
	aux = first;
	//Se recorre la cola.
	for (int i = 0; i < nElementos; i++)
	{
		//Si el valor de la variable auxiliar es el valor recibido como parámetro, se devuelve verdadero; de lo contrario, la variable auxiliar
		//se transforma en el siguiente de la variable auxiliar.
		if (aux->valor == num)
		{
			return true;
		}
		else
		{
			aux = aux->siguienteNum;
		}
	}
	//Si ningún número de la cola coincide con el número recibido como parámetro, se devuelve falso.
	return false;
}

void Cola::Encolar(int valor) {
	NumMadera *numMaderaNuevo = new NumMadera();
	numMaderaNuevo->valor = valor; //Meter el nuevo número dentro de un nodo NumMadera.
	if (last == nullptr && first == nullptr)
	{
		first = numMaderaNuevo;//De estar vacía la cola, debememos establecer el numMadera que ingresen como el first y el last de la cola.
		last = numMaderaNuevo;
	}
	else
	{
		last->siguienteNum = numMaderaNuevo;
		//Al encolar, el nuevo NumMadera se convierte en el último elemento de la cola. 
		//El anterior NumMadera apunta al nuevo.
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
		if (first == last)
		{
			last = nullptr;//Si el first y el last son iguales, se hará que last sea un puntero nulo.
		}
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