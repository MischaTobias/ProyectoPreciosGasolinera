#include "Cola.h"

Cola::Cola() {
	//Cuando se inicializa la cola, se establece su cantidad de elementos como 0. Adem�s, se colocan sus punteros first y last como nulos.
	nElementos = 0;
	first = nullptr;
	last = nullptr;
}

Cola::~Cola() {

}

bool Cola::ColaVacia() {
	//Eval�a si el first de la cola es un puntero nulo y devuelve el valor de verdad de esa expresi�n.
	return first == nullptr;
}

bool Cola::ExisteNum(int num) {
	//Se crea una variable auxiliar tipo NumMadera que servir� para recorrer la cola.
	NumMadera* aux = new NumMadera;
	aux = first;
	//Se recorre la cola.
	for (int i = 0; i < nElementos; i++)
	{
		//Si el valor de la variable auxiliar es el valor recibido como par�metro, se devuelve verdadero; de lo contrario, la variable auxiliar
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
	//Si ning�n n�mero de la cola coincide con el n�mero recibido como par�metro, se devuelve falso.
	return false;
}

void Cola::Encolar(int valor) {
	NumMadera *numMaderaNuevo = new NumMadera();
	numMaderaNuevo->valor = valor; //Meter el nuevo n�mero dentro de un nodo NumMadera.
	if (last == nullptr && first == nullptr)
	{
		first = numMaderaNuevo;//De estar vac�a la cola, debememos establecer el numMadera que ingresen como el first y el last de la cola.
		last = numMaderaNuevo;
	}
	else
	{
		last->siguienteNum = numMaderaNuevo;
		//Al encolar, el nuevo NumMadera se convierte en el �ltimo elemento de la cola. 
		//El anterior NumMadera apunta al nuevo.
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
		if (first == last)
		{
			last = nullptr;//Si el first y el last son iguales, se har� que last sea un puntero nulo.
		}
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