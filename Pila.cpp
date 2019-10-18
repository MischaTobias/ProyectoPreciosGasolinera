#include "Pila.h"

Pila::Pila() {
	nElementos = 0;
}

Pila::~Pila() {

}

bool Pila::PilaVacia(){
	return head == nullptr;
}

void Pila::Apilar(int valor) {
	NumMadera* numMaderaNuevo = new NumMadera();
	numMaderaNuevo->valor = valor; //Meter el nuevo n�mero dentro de un nodo NumMadera.
	if (head == nullptr)
	{
		head = numMaderaNuevo;//De estar vac�a la pila, debememos establecer el numMadera que ingresen como el head de la Pila.
	}
	else
	{
		NumMadera* aux = new NumMadera();
		aux = head; //Guardamos el numMadera que era la cima; ahora este numMadera ser� el siguiente del nuevo numMadera, el nuevo ser� el head.
		head = numMaderaNuevo;//El nuevo head es el nuevo numMadera con el nuevo n�mero ingresado.
		head->siguienteNum = aux;//Hacemos que el NumMadera auxiliar sea el siguiente del nuevo head.
	}
	nElementos++;//Cada vez que apilemos un nuevo numMadera, debemos contar uno m�s dentro del n�mero de elemenos.
}

NumMadera Pila::Desapilar() {
	if (head == nullptr)
	{
		return *new NumMadera();//De estar vac�a la pila, debemos devolver un NumMadera vac�o.
	}
	else
	{
		NumMadera *valor = head;
		head = head->siguienteNum;//Si la pila no est� vac�a, el siguiente del head se convierte en el nuevo head.
		nElementos--;//Al desapilar se reduce el n�mero de elementos en la pila.
		return *valor;
	}
}

NumMadera Pila::ObtenerCima() {
	if (head == nullptr)
	{
		return *new NumMadera();//Si est� vac�o, se devuelve un NumMadera vac�o.
	}
	else
	{
		return *head;//Devuelve el valor del n�mero dentro del NumMadera del head.
	}
}

void Pila::Ordenar() {
	
}
