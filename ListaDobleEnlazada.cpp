#include "ListaDobleEnlazada.h"
ListaDobleEnlazada::ListaDobleEnlazada() {
	//Al crear una lista doblemente enlazada, su first y su last se inicializan como punteros nulos y su n�mero de elementos es 0.
	first = nullptr;
	last = nullptr;
	nElementos = 0;
}

bool ListaDobleEnlazada::ListaVacia() {
	//Eval�a si el first de la lista es un puntero nulo y devuelve el valor de verdad de esa expresi�n.
	return first == nullptr;
}

void ListaDobleEnlazada::Insertar(int valor) {
	//Crea un objeto tipo NumMadera que servir� para insertarse en la fila como el primer elemento.
	NumMadera *newNum = new NumMadera;
	newNum->valor = valor;
	//Se asigna el valor num�rico al NumMadera y se eval�a si la lista est� vac�a; de ser as�, se establece el NumMadera como el primer y �ltimo
	//elemento de la lista y se hace que el �ltimo dato apunte al primero y que el primero apunte al �ltimo.
	//De no estar vac�a la lista, se hace que el NumMadera apunte al first como siguiente n�mero. Que apunte al last como n�mero previo.
	//Adem�s, se establece como el nuevo first y se hace que el last apunte al nuevo first y que el siguiente del first apunte al first.
	//En cualquiera de las 2 opciones se incrementa el n�mero de elementos.
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
		return *new NumMadera();//De estar vac�a la cola, debemos devolver un NumMadera vac�o.
	}
	else
	{
		//Si no est� vac�a la cola, se crea una variable tipo NumMadera que servir� para almacenar el n�mero a retirar.
		NumMadera* newNum = new NumMadera();
		newNum = first;
		//Se iguala el NumMadera al first y se utiliza en el siguiente procedimiento.
		for (int i = 0; i < nElementos; i++)
		{
			//Si el valor num�rico del NumMadera es igual al n�mero recibido como par�metro, se pasa al siguiente procedimiento.
			if (newNum->valor == num)
			{
				//Si el n�mero de elementos es mayor que uno, se hace que el anterior al NumMadera apunte hacia el siguiente del NumMadera
				//Y se hace que el siguiente de NumMadera apunte hacia el anterior al NumMadera. Por �ltimo, se establece que first ser� 
				//el siguiente al first actual.
				if (nElementos > 1)
				{
					(newNum->anteriorNum)->siguienteNum = newNum->siguienteNum;
					(newNum->siguienteNum)->anteriorNum = newNum->anteriorNum;
					first = first->siguienteNum;
				}
				else
				{
					//Si solo existe un elemento en la lista, se establecen sus first y last como punteros nulos y se reduce el n�mero de elementos
					//por 1. Finalmente, se devuelve el valor del NumMadera.
					first = nullptr;
					last = nullptr;
					nElementos--;
					return *newNum;
				}
				//Se reduce el n�mero de elementos en la lista y se devuelve el valor del NumMadera.
				nElementos--;
				return *newNum;
			}
			else
			{
				//De no ser igual al n�mero recibido como par�metro, el NumMadera ser� el siguiente del NumMadera actual.
				newNum = newNum->siguienteNum;
			}
		}

		//Si no se obtiene ning�n valor igual al recibido como par�metro se devolver� un NumMadera vac�o.
		return *new NumMadera();
	}
}
