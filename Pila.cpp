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
	numMaderaNuevo->valor = valor; //Meter el nuevo número dentro de un nodo NumMadera.
	if (head == nullptr)
	{
		head = numMaderaNuevo;//De estar vacía la pila, debememos establecer el numMadera que ingresen como el head de la Pila.
	}
	else
	{
		NumMadera* aux = new NumMadera();
		aux = head; //Guardamos el numMadera que era la cima; ahora este numMadera será el siguiente del nuevo numMadera, el nuevo será el head.
		head = numMaderaNuevo;//El nuevo head es el nuevo numMadera con el nuevo número ingresado.
		head->siguienteNum = aux;//Hacemos que el NumMadera auxiliar sea el siguiente del nuevo head.
	}
	nElementos++;//Cada vez que apilemos un nuevo numMadera, debemos contar uno más dentro del número de elemenos.
}

NumMadera Pila::Desapilar() {
	if (head == nullptr)
	{
		return *new NumMadera();//De estar vacía la pila, debemos devolver un NumMadera vacío.
	}
	else
	{
		NumMadera *valor = head;
		head = head->siguienteNum;//Si la pila no está vacía, el siguiente del head se convierte en el nuevo head.
		nElementos--;//Al desapilar se reduce el número de elementos en la pila.
		return *valor;
	}
}

NumMadera Pila::ObtenerCima() {
	if (head == nullptr)
	{
		return *new NumMadera();//Si está vacío, se devuelve un NumMadera vacío.
	}
	else
	{
		return *head;//Devuelve el valor del número dentro del NumMadera del head.
	}
}

void Pila::Ordenar() {
	
}
