#include "ListaDobleEnlazada.h"
ListaDobleEnlazada::ListaDobleEnlazada() {
	//Al crear una lista doblemente enlazada, su first y su last se inicializan como punteros nulos y su número de elementos es 0.
	first = nullptr;
	last = nullptr;
	nElementos = 0;
}

bool ListaDobleEnlazada::ListaVacia() {
	//Evalúa si el first de la lista es un puntero nulo y devuelve el valor de verdad de esa expresión.
	return first == nullptr;
}

void ListaDobleEnlazada::Insertar(int valor) {
	//Crea un objeto tipo NumMadera que servirá para insertarse en la fila como el primer elemento.
	NumMadera *newNum = new NumMadera;
	newNum->valor = valor;
	//Se asigna el valor numérico al NumMadera y se evalúa si la lista está vacía; de ser así, se establece el NumMadera como el primer y último
	//elemento de la lista y se hace que el último dato apunte al primero y que el primero apunte al último.
	//De no estar vacía la lista, se hace que el NumMadera apunte al first como siguiente número. Que apunte al last como número previo.
	//Además, se establece como el nuevo first y se hace que el last apunte al nuevo first y que el siguiente del first apunte al first.
	//En cualquiera de las 2 opciones se incrementa el número de elementos.
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
		//Si no está vacía la cola, se crea una variable tipo NumMadera que servirá para almacenar el número a retirar.
		NumMadera* newNum = new NumMadera();
		newNum = first;
		//Se iguala el NumMadera al first y se utiliza en el siguiente procedimiento.
		for (int i = 0; i < nElementos; i++)
		{
			//Si el valor numérico del NumMadera es igual al número recibido como parámetro, se pasa al siguiente procedimiento.
			if (newNum->valor == num)
			{
				//Si el número de elementos es mayor que uno, se hace que el anterior al NumMadera apunte hacia el siguiente del NumMadera
				//Y se hace que el siguiente de NumMadera apunte hacia el anterior al NumMadera. Por último, se establece que first será 
				//el siguiente al first actual.
				if (nElementos > 1)
				{
					(newNum->anteriorNum)->siguienteNum = newNum->siguienteNum;
					(newNum->siguienteNum)->anteriorNum = newNum->anteriorNum;
					first = first->siguienteNum;
				}
				else
				{
					//Si solo existe un elemento en la lista, se establecen sus first y last como punteros nulos y se reduce el número de elementos
					//por 1. Finalmente, se devuelve el valor del NumMadera.
					first = nullptr;
					last = nullptr;
					nElementos--;
					return *newNum;
				}
				//Se reduce el número de elementos en la lista y se devuelve el valor del NumMadera.
				nElementos--;
				return *newNum;
			}
			else
			{
				//De no ser igual al número recibido como parámetro, el NumMadera será el siguiente del NumMadera actual.
				newNum = newNum->siguienteNum;
			}
		}

		//Si no se obtiene ningún valor igual al recibido como parámetro se devolverá un NumMadera vacío.
		return *new NumMadera();
	}
}
