#pragma once
#include "Pila.h"
#include "Cola.h"
#include "NumMadera.h"


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

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->rTBPila->Location = System::Drawing::Point(281, 25);
			this->rTBPila->Name = L"rTBPila";
			this->rTBPila->Size = System::Drawing::Size(72, 255);
			this->rTBPila->TabIndex = 2;
			this->rTBPila->Text = L"";
			// 
			// rTBCola
			// 
			this->rTBCola->Location = System::Drawing::Point(374, 25);
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
			this->btnOrdenar->Location = System::Drawing::Point(55, 188);
			this->btnOrdenar->Name = L"btnOrdenar";
			this->btnOrdenar->Size = System::Drawing::Size(94, 54);
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
			this->label2->Text = L"->Debe ser un número de 4 dígitos o menos";
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(710, 434);
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
		Pila* pilaInicial = new Pila();
		Pila* pilaAuxiliar = new Pila();
		Cola* colaInicial = new Cola();
		Cola* colaAuxiliar = new Cola();
		
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		int nums[10] = {};
		for (int i = 0; i < 10; i++){
			pilaInicial->Apilar(i);
		}

		for (int i = 0; i < 10; i++){
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
		int numbs = System::Convert::ToInt16(nums);
		if (numbs < 9999)
		{
			int dig1 = numbs / 1000;
			int dig2 = (numbs - dig1 * 1000) / 100;
			int dig3 = (numbs - dig2 * 100 - dig1 * 1000) / 10;
			int dig4 = numbs - dig3 * 10 - dig2 * 100 - dig1 * 1000;

			NumMadera digit1 = ObtenerNumColaYPila(dig1);
			NumMadera digit2 = ObtenerNumColaYPila(dig2);
			NumMadera digit3 = ObtenerNumColaYPila(dig3);
			NumMadera digit4 = ObtenerNumColaYPila(dig4);

			nums = ((&digit1)->valor).ToString() + ((&digit2)->valor).ToString() + "." + ((&digit3)->valor).ToString() + ((&digit4)->valor).ToString();
			lblPrecio->Text = nums;
			MostrarPilaYCola();
		}
	}
	catch (...)
	{
		MessageBox::Show("Debe ingresar un número válido");
	}
}

private: NumMadera ObtenerNumColaYPila(int num) {
	NumMadera digit1 = ObtenerNumPila(num);
	if ((&digit1)->valor == -1)
	{
		digit1 = ObtenerNumCola(num);
		if ((&digit1)->valor == -1)
		{
			if (num < 9)
			{
				ObtenerNumColaYPila(num + 1);
			}
			else
			{
				ObtenerNumColaYPila(0);
			}
		}
		else
		{
			return digit1;
		}
	}
	else
	{
		return digit1;
	}
}

private: NumMadera ObtenerNumCola(int num) {
	NumMadera* numb = new NumMadera();
	NumMadera* aux = new NumMadera();
	int x = 0;
	while (x != num && x != -1)
	{
		if ((&(colaInicial)->ObtenerPrimero())->valor == num)
		{
			numb = &colaInicial->Desencolar();
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
				while (colaAuxiliar->nElementos > 0)
				{
					colaInicial->Encolar((&colaAuxiliar->Desencolar())->valor);
				}
				return *new NumMadera();
			}
		}
	}

	while (colaAuxiliar->nElementos > 0)
	{
		colaInicial->Encolar((&colaAuxiliar->Desencolar())->valor);
	}

	return *numb;

}

private: NumMadera ObtenerNumPila(int num) {
	NumMadera *numb = new NumMadera();
	int x = 0;
	while (x != num && x != -1)
	{
		if ((&pilaInicial->ObtenerCima())->valor == num)
		{
			numb = &pilaInicial->Desapilar();
			x = numb->valor;
		}
		else
		{
			if (!pilaInicial->PilaVacia())
			{
				pilaAuxiliar->Apilar((&pilaInicial->Desapilar())->valor);
			}
			else
			{
				while (pilaAuxiliar->nElementos > 0)
				{
					pilaInicial->Apilar((&pilaAuxiliar->Desapilar())->valor);
				}
				return *new NumMadera();
			}
		}
	}

	while (pilaAuxiliar->nElementos > 0)
	{
		pilaInicial->Apilar((&pilaAuxiliar->Desapilar())->valor);
	}

	return *numb;
}
};
}
