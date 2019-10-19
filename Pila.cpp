#include "Pila.h"

Pila::Pila() {
	//Cuando se inicializa la pila, se establece su cantidad de elementos como 0.
	nElementos = 0;
}

Pila::~Pila() {

}

bool Pila::ExisteNum(int num) {
	//Se crea una variable auxiliar tipo NumMadera que servir� para recorrer la pila.
	NumMadera* aux = new NumMadera();
	aux = head;
	//Se recorre la pila
	for (int i = 0; i < nElementos; i++)
	{
		//Si el valor de la variable auxiliar es el valor recibido como par�metro, se devuelve verdadero; de lo contrario, la variable auxiliar
		//se transforma en el siguiente de la variable auxiliar.
		if (num == aux->valor)
		{
			return true;
		}
		else
		{
			aux = aux->siguienteNum;
		}
	}
	//Si ning�n n�mero de la pila coincide con el n�mero recibido como par�metro, se devuelve falso.
	return false;
}

bool Pila::PilaVacia(){
	//Eval�a si el head de la pila es un puntero nulo y devuelve el valor de verdad de esa expresi�n.
	return head == nullptr;
}

void Pila::Apilar(int valor) {
	NumMadera* numMaderaNuevo = new NumMadera();
	numMaderaNuevo->valor = valor; //Se asigna el nuevo n�mero dentro de un nodo NumMadera.
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