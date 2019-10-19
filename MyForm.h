#pragma once
#include "Pila.h"
#include "Cola.h"
#include "NumMadera.h"
#include "ListaDobleEnlazada.h"


namespace ProyectoPreciosGasolineraMischaTobias1170919 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace std;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ txtPrecioGas;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::RichTextBox^ rTBPila;
	private: System::Windows::Forms::RichTextBox^ rTBCola;
	private: System::Windows::Forms::Button^ btnMostrarPrecios;
	private: System::Windows::Forms::Button^ btnOrdenar;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ lblPrecio;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RichTextBox^ rTBListaDobleEnlazada;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ btnDevolverNums;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->txtPrecioGas = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rTBPila = (gcnew System::Windows::Forms::RichTextBox());
			this->rTBCola = (gcnew System::Windows::Forms::RichTextBox());
			this->btnMostrarPrecios = (gcnew System::Windows::Forms::Button());
			this->btnOrdenar = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lblPrecio = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->rTBListaDobleEnlazada = (gcnew System::Windows::Forms::RichTextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btnDevolverNums = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtPrecioGas
			// 
			this->txtPrecioGas->Location = System::Drawing::Point(14, 88);
			this->txtPrecioGas->Name = L"txtPrecioGas";
			this->txtPrecioGas->Size = System::Drawing::Size(186, 20);
			this->txtPrecioGas->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(189, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese el precio de la gasolina:";
			// 
			// rTBPila
			// 
			this->rTBPila->Location = System::Drawing::Point(281, 49);
			this->rTBPila->Name = L"rTBPila";
			this->rTBPila->Size = System::Drawing::Size(72, 255);
			this->rTBPila->TabIndex = 2;
			this->rTBPila->Text = L"";
			// 
			// rTBCola
			// 
			this->rTBCola->Location = System::Drawing::Point(374, 49);
			this->rTBCola->Name = L"rTBCola";
			this->rTBCola->Size = System::Drawing::Size(72, 255);
			this->rTBCola->TabIndex = 3;
			this->rTBCola->Text = L"";
			// 
			// btnMostrarPrecios
			// 
			this->btnMostrarPrecios->Location = System::Drawing::Point(55, 123);
			this->btnMostrarPrecios->Name = L"btnMostrarPrecios";
			this->btnMostrarPrecios->Size = System::Drawing::Size(94, 27);
			this->btnMostrarPrecios->TabIndex = 4;
			this->btnMostrarPrecios->Text = L"Mostrar Precio";
			this->btnMostrarPrecios->UseVisualStyleBackColor = true;
			this->btnMostrarPrecios->Click += gcnew System::EventHandler(this, &MyForm::btnMostrarPrecios_Click);
			// 
			// btnOrdenar
			// 
			this->btnOrdenar->Location = System::Drawing::Point(281, 330);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(165, 38);
			this->btnOrdenar->TabIndex = 5;
			this->btnOrdenar->Text = L"Ordenar Pila y Cola";
			this->btnOrdenar->UseVisualStyleBackColor = true;
			this->btnOrdenar->Click += gcnew System::EventHandler(this, &MyForm::btnOrdenar_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(214, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"> Debe ser un número de 4 dígitos o menos";
			// 
			// lblPrecio
			// 
			this->lblPrecio->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrecio->ForeColor = System::Drawing::Color::Yellow;
			this->lblPrecio->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblPrecio.Image")));
			this->lblPrecio->Location = System::Drawing::Point(465, 26);
			this->lblPrecio->Name = L"lblPrecio";
			this->lblPrecio->Size = System::Drawing::Size(233, 124);
			this->lblPrecio->TabIndex = 7;
			this->lblPrecio->Text = L"----";
			this->lblPrecio->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(300, 25);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Pila";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(395, 25);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(32, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Cola";
			// 
			// rTBListaDobleEnlazada
			// 
			this->rTBListaDobleEnlazada->Location = System::Drawing::Point(478, 206);
			this->rTBListaDobleEnlazada->Name = L"rTBListaDobleEnlazada";
			this->rTBListaDobleEnlazada->Size = System::Drawing::Size(220, 98);
			this->rTBListaDobleEnlazada->TabIndex = 10;
			this->rTBListaDobleEnlazada->Text = L"";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(475, 167);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(200, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Precios registrados anteriormente:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(475, 188);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(203, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"> Puedes colocar 4 precios como máximo";
			// 
			// btnDevolverNums
			// 
			this->btnDevolverNums->Location = System::Drawing::Point(501, 330);
			this->btnDevolverNums->Name = L"btnDevolverNums";
			this->btnDevolverNums->Size = System::Drawing::Size(165, 38);
			this->btnDevolverNums->TabIndex = 13;
			this->btnDevolverNums->Text = L"Devolver números a la pila y la cola";
			this->btnDevolverNums->UseVisualStyleBackColor = true;
			this->btnDevolverNums->Click += gcnew System::EventHandler(this, &MyForm::btnDevolverNums_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(710, 434);
			this->Controls->Add(this->btnDevolverNums);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->rTBListaDobleEnlazada);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->lblPrecio);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->btnOrdenar);
			this->Controls->Add(this->btnMostrarPrecios);
			this->Controls->Add(this->rTBCola);
			this->Controls->Add(this->rTBPila);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtPrecioGas);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Aplicación PetroPlus";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		ListaDobleEnlazada* listaInicial = new ListaDobleEnlazada();
		Pila* pilaInicial = new Pila();
		Pila* pilaAuxiliar = new Pila();
		Cola* colaInicial = new Cola();
		Cola* colaAuxiliar = new Cola();
		int dig1 = -1;
		int dig2 = -1;
		int dig3 = -1;
		int dig4 = -1;
		int contUsos = 0;

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < 10; i++) {
		pilaInicial->Apilar(i);
	}

	for (int i = 0; i < 10; i++) {
		colaInicial->Encolar(i);
	}

	MostrarPilaYCola();
}
private: System::Void MostrarPilaYCola() {
	String^ t = "";
	NumMadera *n = new NumMadera();
	n = pilaInicial->head;

	for (int i = 0; i < pilaInicial->nElementos; i++)
	{
		t += (n->valor).ToString() + "\n";
		n = n->siguienteNum;
	}
	rTBPila->Text = t;

	n = colaInicial->first;
	t = "";

	for (int i = 0; i < colaInicial->nElementos; i++)
	{
		t += (n->valor).ToString() + "\n";
		n = n->siguienteNum;
	}
	rTBCola->Text = t;
}
private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
	int numsOrden[10];
	NumMadera *num = pilaInicial->head;
	bool contNum = true;
	for (int i = 0; i < pilaInicial->nElementos; i++)
	{
		if (contNum)
		{
			if (num->siguienteNum == nullptr)
			{
				numsOrden[i] = num->valor;
				contNum = false;
			}
			else
			{
				numsOrden[i] = num->valor;
			}
		}
		else
		{
			numsOrden[i] = -1;
		}
	}

	int pos = 0;
	int numMen = numsOrden[0];
	int x = numsOrden[0];

	for (int j = 0; j < 10; j++)
	{
		for (int i = j; i < 10; i++)
		{
			if (numsOrden[i] < numMen)
			{
				pos = i;
				numMen = numsOrden[i];
			}
		}
		x = numsOrden[pos];
		numsOrden[pos] = numsOrden[j];
		numsOrden[j] = x;
	}

	if (Ordenado(numsOrden))
	{
		MostrarPilaYCola();
	}
}
private: System::Boolean Ordenado(int vect[]) {
		for (int i = 0; i < 10; i++)
		{
			if (i+1 < 10)
			{
				if (vect[i] > vect[i + 1])
				{
					return false;
				}
			}
		}

		return true;
	}
private: System::Void btnMostrarPrecios_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ nums = txtPrecioGas->Text;
	try
	{
		NumMadera *digit1 = new NumMadera();
		NumMadera* digit2 = new NumMadera();
		NumMadera* digit3 = new NumMadera();
		NumMadera* digit4 = new NumMadera();

		int numbs = System::Convert::ToInt16(nums);
		if (numbs <= 9999 || numbs < 0)
		{
			contUsos++;
			if (contUsos > 4)
			{
				goto finish;
			}

			if (!(dig1 == numbs / 1000))
			{
				dig1 = numbs / 1000;
				digit1 = &ObtenerNumColaYPila(dig1);
			}
			else
			{
				digit1 = &listaInicial->ObtenerNum(dig1);
				if (digit1->valor == -1)
				{
					dig1++;
					if (dig1 > 9)
					{
						dig1 = 0;
					}
					digit1 = &ObtenerNumColaYPila(dig1);
					dig1 = digit1->valor;
				}
			}

			if (!(dig2 == (numbs - dig1 * 1000) / 100))
			{
				dig2 = (numbs - dig1 * 1000) / 100;
				digit2 = &ObtenerNumColaYPila(dig2);
			}
			else
			{
				digit2 = &listaInicial->ObtenerNum(dig2);
				if (digit2->valor == -1)
				{
					dig2++;
					if (dig2 > 9)
					{
						dig2 = 0;
					}
					digit2 = &ObtenerNumColaYPila(dig2);
					dig2 = digit2->valor;
				}
			}

			if (!(dig3 == (numbs - dig2 * 100 - dig1 * 1000) / 10))
			{
				dig3 = (numbs - dig2 * 100 - dig1 * 1000) / 10;
				digit3 = &ObtenerNumColaYPila(dig3);
			}
			else
			{
				digit3 = &listaInicial->ObtenerNum(dig3);
				if (digit3->valor == -1)
				{
					dig3++;
					if (dig3 > 9)
					{
						dig3 = 0;
					}
					digit3 = &ObtenerNumColaYPila(dig3);
					dig3 = digit3->valor;
				}
			}

			if (!(dig4 == numbs - dig3 * 10 - dig2 * 100 - dig1 * 1000))
			{
				dig4 = numbs - dig3 * 10 - dig2 * 100 - dig1 * 1000;
				digit4 = &ObtenerNumColaYPila(dig4);
			}
			else
			{
				digit4 = &listaInicial->ObtenerNum(dig4);
				if (digit4->valor == -1)
				{
					dig4++;
					if (dig4 > 9)
					{
						dig4 = 0;
					}
					digit4 = &ObtenerNumColaYPila(dig4);
					dig4 = digit4->valor;
				}
			}

			listaInicial->Insertar(digit1->valor);
			listaInicial->Insertar(digit2->valor);
			listaInicial->Insertar(digit3->valor);
			listaInicial->Insertar(digit4->valor);

			nums = ((digit1)->valor).ToString() + ((digit2)->valor).ToString() + "." + ((digit3)->valor).ToString() + ((digit4)->valor).ToString();
			lblPrecio->Text = nums;
			rTBListaDobleEnlazada->Text += nums + "\n";


			
			MostrarPilaYCola();
			if (contUsos > 4)
			{
				finish:
				MessageBox::Show("Ha superado el número de precios a ingresar, por favor devuélva los números a la pila y la cola");
			}
		}
		else
		{
			MessageBox::Show("Debe ingresar un número válido");
		}
	}
	catch (...)
	{
		MessageBox::Show("Debe ingresar un número válido");
	}
}
private: NumMadera ObtenerNumColaYPila(int num) {
NumMadera digits = ObtenerNumPila(num);
if ((&digits)->valor == -1)
{
	digits = ObtenerNumCola(num);
	if ((&digits)->valor == -1)
	{
		if (num < 9)
		{
			return ObtenerNumColaYPila(num + 1);
		}
		else
		{
			return ObtenerNumColaYPila(0);
		}
	}
	else
	{
		return digits;
	}
}
else
{
	return digits;
}
}
private: NumMadera ObtenerNumCola(int num) {
NumMadera* numb = new NumMadera();
int x = -1;
while (x != num)
{
	if ((&(colaInicial)->ObtenerPrimero())->valor == num)
	{
		numb = &colaInicial->Desencolar();
		numb->siguienteNum = nullptr;
		numb->anteriorNum = nullptr;
		x = numb->valor;
	}
	else
	{
		if (!colaInicial->ColaVacia())
		{
			colaAuxiliar->Encolar((&colaInicial->Desencolar())->valor);
		}
		else
		{
			while (!colaAuxiliar->ColaVacia())
			{
				colaInicial->Encolar((&colaAuxiliar->Desencolar())->valor);
			}
			return *new NumMadera();
		}
	}
}

while (!colaAuxiliar->ColaVacia())
{
	colaInicial->Encolar((&colaAuxiliar->Desencolar())->valor);
}

return *numb;

}
private: NumMadera ObtenerNumPila(int num) {
NumMadera *numb = new NumMadera();
int x = -1;
while (x != num)
{
	if ((&pilaInicial->ObtenerCima())->valor == num)
	{
		numb = &pilaInicial->Desapilar();
		x = numb->valor;
		numb->siguienteNum = nullptr;
		numb->anteriorNum = nullptr;
	}
	else
	{
		if (!pilaInicial->PilaVacia())
		{
			pilaAuxiliar->Apilar((&pilaInicial->Desapilar())->valor);
		}
		else
		{
			while (!pilaAuxiliar->PilaVacia())
			{
				pilaInicial->Apilar((&pilaAuxiliar->Desapilar())->valor);
			}
			return *new NumMadera();
		}
	}
}

while (!pilaAuxiliar->PilaVacia())
{
	pilaInicial->Apilar((&pilaAuxiliar->Desapilar())->valor);
}

return *numb;
}
private: System::Void btnDevolverNums_Click(System::Object^ sender, System::EventArgs^ e) {
	NumMadera* aux = new NumMadera();
	aux = listaInicial->first;
	while (!listaInicial->ListaVacia())
	{
		if (!pilaInicial->ExisteNum(aux->valor))
		{
			pilaInicial->Apilar((&listaInicial->ObtenerNum(aux->valor))->valor);
			aux = aux->siguienteNum;
		}
		else
		{
			colaInicial->Encolar((&listaInicial->ObtenerNum(aux->valor))->valor);
			aux = aux->siguienteNum;
		}
	}
	contUsos = 0;
	dig1 = -1;
	dig2 = -1;
	dig3 = -1;
	dig4 = -1;
	MostrarPilaYCola();
	rTBListaDobleEnlazada->Text = "";
}
};
}
