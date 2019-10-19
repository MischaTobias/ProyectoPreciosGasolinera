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
	private: System::Windows::Forms::TextBox^ txtPrecioGas2;
	private: System::Windows::Forms::Label^ lblPrecioGas2;


	private: System::Windows::Forms::CheckBox^ checkBox1;

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
			this->txtPrecioGas2 = (gcnew System::Windows::Forms::TextBox());
			this->lblPrecioGas2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
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
			this->btnMostrarPrecios->Text = L"Mostrar Precios";
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
			// txtPrecioGas2
			// 
			this->txtPrecioGas2->Enabled = false;
			this->txtPrecioGas2->Location = System::Drawing::Point(55, 197);
			this->txtPrecioGas2->Name = L"txtPrecioGas2";
			this->txtPrecioGas2->Size = System::Drawing::Size(186, 20);
			this->txtPrecioGas2->TabIndex = 14;
			// 
			// lblPrecioGas2
			// 
			this->lblPrecioGas2->Enabled = false;
			this->lblPrecioGas2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPrecioGas2->ForeColor = System::Drawing::Color::Yellow;
			this->lblPrecioGas2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lblPrecioGas2.Image")));
			this->lblPrecioGas2->Location = System::Drawing::Point(55, 261);
			this->lblPrecioGas2->Name = L"lblPrecioGas2";
			this->lblPrecioGas2->Size = System::Drawing::Size(186, 75);
			this->lblPrecioGas2->TabIndex = 16;
			this->lblPrecioGas2->Text = L"----";
			this->lblPrecioGas2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(55, 174);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(185, 17);
			this->checkBox1->TabIndex = 17;
			this->checkBox1->Text = L"Ingresar un segundo precio:";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->ClientSize = System::Drawing::Size(710, 434);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->lblPrecioGas2);
			this->Controls->Add(this->txtPrecioGas2);
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
		//Declaración de objetos tipo cola, lista y pila para su utilización en el programa; además, se inicializan diferentes contadores.
		ListaDobleEnlazada* listaInicial = new ListaDobleEnlazada();
		ListaDobleEnlazada* listaInicial2 = new ListaDobleEnlazada();
		Pila* pilaInicial = new Pila();
		Pila* pilaAuxiliar = new Pila();
		Cola* colaInicial = new Cola();
		Cola* colaAuxiliar = new Cola();
		int dig1 = -1;
		int dig2 = -1;
		int dig3 = -1;
		int dig4 = -1;
		int dig5 = -1;
		int dig6 = -1;
		int dig7 = -1;
		int dig8 = -1;
		int contUsos = 0;

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	//Al cargar el form, se apilan y se encolan los números en el orden pre-establecido por el docente y se muestran la pila y la cola en los
	//correspondientes Rich Text Box.
	for (int i = 0; i < 10; i++) {
		pilaInicial->Apilar(i);
	}

	for (int i = 0; i < 10; i++) {
		colaInicial->Encolar(i);
	}

	MostrarPilaYCola();
}
private: System::Void MostrarPilaYCola() {
	//Se crea un string t y un NumMadera n que servirá para recorrer tanto la pila como la cola.
	String^ t = "";
	NumMadera *n = new NumMadera();
	n = pilaInicial->head;

	//n recorre la pila y t va acumulando los valores de n a través de toda la pila.
	for (int i = 0; i < pilaInicial->nElementos; i++)
	{
		t += (n->valor).ToString() + "\n";
		n = n->siguienteNum;
	}
	rTBPila->Text = t;

	//n se cambia al primer elemento de la cola y t se reinicia en ""
	n = colaInicial->first;
	t = "";

	//n recorre la cola y t va acumulando los valores de n a través de toda la cola.
	for (int i = 0; i < colaInicial->nElementos; i++)
	{
		t += (n->valor).ToString() + "\n";
		n = n->siguienteNum;
	}
	rTBCola->Text = t;
}
private: System::Void btnOrdenar_Click(System::Object^ sender, System::EventArgs^ e) {
	//Se crea un vector que será de apoyo al ordenar la pila y la cola; además, se crea un elemento tipo NumMadera que servirá para recorrer
	//la pila y la cola, y con ello se obtendrán los valores de los números que están en cada posición de la pila y la cola.
	int numsOrden[10];
	NumMadera *num = pilaInicial->head;
	int tam = pilaInicial->nElementos;
	//Se vacía la pilaInicial y se colocan todos los números que contenían en ese orden en el vector numsOrden.
	for (int i = 0; i < tam; i++)
	{
		numsOrden[i] = (&pilaInicial->Desapilar())->valor;
	}

	int pos = 0;
	int numMen = numsOrden[0];
	int x = numsOrden[0];

	//El vector numsOrden se ordena a través del método de ordenamiento "Selection Sort"; esto consiste en encontrar el un valor en específico,
	//en este caso el menor, e intercambiarlo por la primera posición; luego se busca el siguiente más pequeño y se cambia por la segunda posición
	//y así sucesivamente hasta ordenar el vector.
	for (int j = 0; j < tam; j++)
	{
		numMen = numsOrden[j];
		for (int i = j; i < tam; i++)
		{
			if (numsOrden[i] < numMen)
			{
				pos = i;
				numMen = numsOrden[i];
			}
		}

		if (numMen != numsOrden[j])
		{
			x = numsOrden[pos];
			numsOrden[pos] = numsOrden[j];
			numsOrden[j] = x;
		}
	}

	//Por último, se apilan los valores ya ordenados del vector numsOrden en la pilaInicial
	for (int i = 0; i < tam; i++)
	{
		pilaInicial->Apilar(numsOrden[i]);
	}

	tam = colaInicial->nElementos;
	//Se cambia la variable tam que sirve para establecer un valor de comparación para los ciclos de desencolar y encolar.
	//Se vacía la colaInicial y se colocan todos los números que contenían en ese orden en el vector numsOrden.
	for (int i = 0; i < tam; i++)
	{
		numsOrden[i] = (&colaInicial->Desencolar())->valor;
	}

	pos = 0;
	numMen = numsOrden[0];
	x = numsOrden[0];

	//El vector numsOrden se ordena a través del método de ordenamiento "Selection Sort"
	for (int j = 0; j < tam; j++)
	{
		numMen = numsOrden[j];
		for (int i = j; i < tam; i++)
		{
			if (numsOrden[i] < numMen)
			{
				pos = i;
				numMen = numsOrden[i];
			}
		}

		if (numMen != numsOrden[j])
		{
			x = numsOrden[pos];
			numsOrden[pos] = numsOrden[j];
			numsOrden[j] = x;
		}
	}

	//Por último, se encolan los valores ya ordenados del vector numsOrden en la colaInicial
	for (int i = 0; i < tam; i++)
	{
		colaInicial->Encolar(numsOrden[i]);
	}
	
	//Se muestran la pila y la cola a través del procedimiento MostrarPilaYCola()
	MostrarPilaYCola();
}
private: System::Void btnMostrarPrecios_Click(System::Object^ sender, System::EventArgs^ e) {
	//Se obtiene el valor del número ingresado
	System::String^ nums = txtPrecioGas->Text;
	try
	{
		//Creación de variables NumMadera que servirán para obtener los valores de la pila, la cola y la lista doblemente enlazada
		//además, se utilizarán para mostrar su valor.
		NumMadera *digit1 = new NumMadera();
		NumMadera* digit2 = new NumMadera();
		NumMadera* digit3 = new NumMadera();
		NumMadera* digit4 = new NumMadera();

		int numbs = System::Convert::ToInt16(nums);
		//Se verifica que el número sea de 4 dígitos o menos
		if (numbs <= 9999 || numbs <= 0)
		{
			//Se incrementa la variable contUsos ya que al llegar a 4 no nos dejará ingresar más precios de gasolina.
			contUsos++;
			if (contUsos > 4)
			{
				goto finish;
			}

			//Se encuentra cada uno de los dígitos a través de divisiones y restas y se evalua si ya se poseía del precio ingresado previamente.
			//De ser así, se toma el número de la lista doblemente enlazada en la que se ha colocado previamente.
			//De lo contrario, se obtiene el número a través de la función ObtenerNumColaYPila y se registra el dígito utilizado.
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

			//Todos los valores finales de los dígitos ingresados, y si hubo la necesidad de aproximar algún número al superior más cercano,
			//se almacenan en la lista doblemente enlazada
			listaInicial->Insertar(digit1->valor);
			listaInicial->Insertar(digit2->valor);
			listaInicial->Insertar(digit3->valor);
			listaInicial->Insertar(digit4->valor);

			//Se muestra el precio de la gasolina en el display y se registra en el rich text box de la lista doblemente enlazada
			//el precio que se registró en la listaInicial.
			nums = ((digit1)->valor).ToString() + ((digit2)->valor).ToString() + "." + ((digit3)->valor).ToString() + ((digit4)->valor).ToString();
			lblPrecio->Text = nums;
			rTBListaDobleEnlazada->Text += nums + "\n";

			//Se evalúa si el usuario desea registrar otro precio además del primero, de ser así, continua con el procedimiento
			//De lo contrario, se va directamente a mostrar el estado de la pilaInicial y la colaInicial
			if (checkBox1->Checked)
			{
				//Creación de variables NumMadera que servirán para obtener los valores de la pila, la cola y la lista doblemente enlazada
				//además, se utilizarán para mostrar su valor.
				NumMadera* digit5 = new NumMadera();
				NumMadera* digit6 = new NumMadera();
				NumMadera* digit7 = new NumMadera();
				NumMadera* digit8 = new NumMadera();

				//Se obtiene el valor del número ingresado en el segundo text Box
				System::String^ nums2 = txtPrecioGas2->Text;
				int numbs2 = System::Convert::ToInt16(nums2);

				//Se verifica que el número sea de 4 dígitos o menos
				if (numbs2 <= 9999 || numbs2 < 0)
				{
					//Se incrementa la variable contUsos ya que al llegar a 4 no nos dejará ingresar más precios de gasolina.
					contUsos++;
					if (contUsos > 4)
					{
						goto finish2;
					}

					//Se encuentra cada uno de los dígitos a través de divisiones y restas y se evalua si ya se poseía del precio ingresado previamente.
					//De ser así, se toma el número de la lista doblemente enlazada en la que se ha colocado previamente.
					//De lo contrario, se obtiene el número a través de la función ObtenerNumColaYPila y se registra el dígito utilizado.
					//Además, es importante mencionar que en este punto, ya existen números utilizados e ingresados en nuestra listaInicial
					//Esto provocará que existan más aproximaciones en los dígitos de este text box.

					if (!(dig5 == numbs2 / 1000))
					{
						dig5 = numbs2 / 1000;
						digit5 = &ObtenerNumColaYPila(dig5);
					}
					else
					{
						digit5 = &listaInicial2->ObtenerNum(dig5);
						if (digit5->valor == -1)
						{
							dig5++;
							if (dig5 > 9)
							{
								dig5 = 0;
							}
							digit5 = &ObtenerNumColaYPila(dig5);
							dig5 = digit5->valor;
						}
					}

					if (!(dig6 == (numbs2 - dig5 * 1000) / 100))
					{
						dig6 = (numbs2 - dig5 * 1000) / 100;
						digit6 = &ObtenerNumColaYPila(dig6);
					}
					else
					{
						digit6 = &listaInicial2->ObtenerNum(dig6);
						if (digit6->valor == -1)
						{
							dig6++;
							if (dig6 > 9)
							{
								dig6 = 0;
							}
							digit6 = &ObtenerNumColaYPila(dig6);
							dig6 = digit6->valor;
						}
					}

					if (!(dig7 == (numbs2 - dig6 * 100 - dig5 * 1000) / 10))
					{
						dig7 = (numbs2 - dig6 * 100 - dig5 * 1000) / 10;
						digit7 = &ObtenerNumColaYPila(dig7);
					}
					else
					{
						digit7 = &listaInicial2->ObtenerNum(dig7);
						if (digit7->valor == -1)
						{
							dig7++;
							if (dig7 > 9)
							{
								dig7 = 0;
							}
							digit7 = &ObtenerNumColaYPila(dig7);
							dig7 = digit3->valor;
						}
					}

					if (!(dig8 == numbs2 - dig7 * 10 - dig6 * 100 - dig5 * 1000))
					{
						dig8 = numbs2 - dig7 * 10 - dig6 * 100 - dig5 * 1000;
						digit8 = &ObtenerNumColaYPila(dig8);
					}
					else
					{
						digit8 = &listaInicial2->ObtenerNum(dig8);
						if (digit8->valor == -1)
						{
							dig8++;
							if (dig8 > 9)
							{
								dig8 = 0;
							}
							digit8 = &ObtenerNumColaYPila(dig8);
							dig8 = digit8->valor;
						}
					}

					//Todos los valores finales de los dígitos ingresados, y si hubo la necesidad de aproximar algún número al superior más cercano,
					//se almacenan en la lista doblemente enlazada número 2
					listaInicial2->Insertar(digit5->valor);
					listaInicial2->Insertar(digit6->valor);
					listaInicial2->Insertar(digit7->valor);
					listaInicial2->Insertar(digit8->valor);


					//Se muestra el precio de la gasolina en el segundo display y se registra en el rich text box de la lista doblemente enlazada
					//el precio que se registró en la listaInicial2.
					nums2 = ((digit5)->valor).ToString() + ((digit6)->valor).ToString() + "." + ((digit7)->valor).ToString() + ((digit8)->valor).ToString();
					lblPrecioGas2->Text = nums2;
					rTBListaDobleEnlazada->Text += nums2 + "\n";

					//Muestra el estado de la pila y la cola mediante la función MostrarPilaYCola()
					MostrarPilaYCola();
					if (contUsos > 4)
					{
					finish2:
						MessageBox::Show("Ha superado el número de precios a ingresar, por favor devuélva los números a la pila y la cola");
					}
				}
				else
				{
					//Si ingresa un número mayor de 4 cifras o un número negativo, se mostrará este mensaje.
					MessageBox::Show("Debe ingresar un número válido");
				}
			}
			else
			{
				//Al mostrar por primera vez los precios, se activará el checkbox para poder ingresar el segundo precio.
				checkBox1->Enabled = true;
			}


			//Muestra el estado de la pila y la cola mediante la función MostrarPilaYCola()
			MostrarPilaYCola();
			if (contUsos > 4)
			{
				finish:
				MessageBox::Show("Ha superado el número de precios a ingresar, por favor devuélva los números a la pila y la cola");
			}
		}
		else
		{
			//Si ingresa un número mayor de 4 cifras o un número negativo, se mostrará este mensaje.
			MessageBox::Show("Debe ingresar un número válido");
		}
	}
	catch (...)
	{
		//De ingresarse cualquier valor no numérico que cause un error, se mostrará el siguiente mensaje.
		MessageBox::Show("Debe ingresar un número válido");
	}
}
private: NumMadera ObtenerNumColaYPila(int num) {
//Crea un objeto NumMadera para obtener el número enviado como parámetro.
NumMadera digits = ObtenerNumPila(num);
//Se manda a extraer el número enviado como parámetro, de la pila. Esto se hace a través de la función ObtenerNumPila().
//Si el valor buscado no existe en la pila, devolverá un valor de -1 y continuará con el procedimiento; de lo contrario, devolverá la variable
//digits con el valor solicitado
if ((&digits)->valor == -1)
{
	digits = ObtenerNumCola(num);
	//Se manda a extraer el número enviado como parámetro, de la cola. Esto se hace a través de la función ObtenerNumCola().
	//Si el valor buscado no existe en la cola, devolverá un valor de -1 y continuará con el procedimiento; de lo contrario, devolverá la variable
	//digits con el valor solicitado
	if ((&digits)->valor == -1)
	{
		//Evalúa si el valor que se trata de obtener es menor a 9 y se llama de forma recursiva este mismo procedimiento pero con el dígito aproximado
		//al siguiente mayor; de lo contrario, se llama de forma recursiva a este procedimiento pero se envía como parámetro un 0.
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
//Se crea una variable tipo NumMadera que nos servirá para almacenar el número que se requiere y se ha recibido como parámetro.
NumMadera* numb = new NumMadera();
int x = -1;

//Mientras que la variable x, originalmente establecida como -1 sea diferente al número que se quiere encontrar, se ejecutará el siguiente bloque
//De instrucciones.
while (x != num)
{
	//Si el primer valor de la cola es el valor buscado (Se compara utilizando la función ObtenerPrimero() de la cola), 
	//se obtiene a través de la función Desencolar() de la cola y se asigna a la numb y se asignan sus apuntadores como nulos.
	if ((&(colaInicial)->ObtenerPrimero())->valor == num)
	{
		numb = &colaInicial->Desencolar();
		numb->siguienteNum = nullptr;
		numb->anteriorNum = nullptr;
		x = numb->valor;
	}
	else
	{
		//Si la cola no está vacía y el primer valor de la cola no es el valor buscado, se encolará el primer valor de la colaInicial en la colaAuxiliar para poder 
		//obtener un nuevo valor en la primera posición de la colaInicial; de estar vacía, se volvería a encolar todo el contenido de la colaInical
		//desde la colaAuxiliar a través de las funciones Encolar() y Desencolar(), y se devolvería un NumMadera vacío con valor numérico de -1.
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

//En este punto, se encolarán los valores originales de la colaInicial desde la colaAuxiliar, con excepción del valor retirado.
while (!colaAuxiliar->ColaVacia())
{
	colaInicial->Encolar((&colaAuxiliar->Desencolar())->valor);
}

//Se devuelve el número requerido en un objeto tipo NumMadera.
return *numb;

}
private: NumMadera ObtenerNumPila(int num) {
//Se crea una variable tipo NumMadera que nos servirá para almacenar el número que se requiere y se ha recibido como parámetro.
NumMadera *numb = new NumMadera();
int x = -1;

//Mientras que la variable x, originalmente establecida como -1 sea diferente al número que se quiere encontrar, se ejecutará el siguiente bloque
//De instrucciones.
while (x != num)
{
	//Si el valor head (de hasta arriba) de la pila es el valor buscado(Se compara utilizando la función ObtenerCima() de la pila),
	//se obtiene a través de la función Desapilar() de la y se asigna a la variable numb y se asignan sus apuntadores como nulos.
	if ((&pilaInicial->ObtenerCima())->valor == num)
	{
		numb = &pilaInicial->Desapilar();
		x = numb->valor;
		numb->siguienteNum = nullptr;
		numb->anteriorNum = nullptr;
	}
	else
	{
		//Si la pila no está vacía y el head de la pila no es el valor buscado, se apilará el primer valor de la pilaInicial en la pilaAuxiliar
		//para poder obtener un nuevo valor en el head de la pilaInicial; de estar vacía, se volvería a apilar todo el contenido de la pilaInicial
		//desde la pilaAuxiliar a través de las funciones Apilar() y Desapilar(), y se devolvería un NumMadera vacío con valor numérico de -1.
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

//En este punto, se apilarán los valores originales de la pilaInicial desde la pilaAuxiliar, con excepción del valor retirado.
while (!pilaAuxiliar->PilaVacia())
{
	pilaInicial->Apilar((&pilaAuxiliar->Desapilar())->valor);
}

//Se devuelve el número requerido en un objeto tipo NumMadera.
return *numb;
}
private: System::Void btnDevolverNums_Click(System::Object^ sender, System::EventArgs^ e) {
	//Se crea una variable NumMadera que servirá para recorrer los vectores
	NumMadera* aux = new NumMadera();
	aux = listaInicial->first;
	//Se utiliza la variable auxiliar y se le asigna el valor del primer elemento de la lista doblemente enlazada
	//Mientras que esa lista no esté vacía, se realizará el siguiente procedimiento.
	while (!listaInicial->ListaVacia())
	{
		//Si el número que posee la variable auxiliar no existe en la pilaInicial, se apilará en ella a través de las funciones Apilar y
		//ObtenerNum; esta evaluación se hace con la función ExisteNum() de la pila.
		//Si el número existe en la pilaInicial, se encolará el valor en la colaInicial.
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
	aux = listaInicial2->first;
	//Se utiliza la variable auxiliar y se le asigna el valor del primer elemento de la segunda lista doblemente enlazada
	//Mientras que esa lista no esté vacía, se realizará el siguiente procedimiento.
	while (!listaInicial2->ListaVacia())
	{
		//Si el número que posee la variable auxiliar no existe en la pilaInicial, se apilará en ella a través de las funciones Apilar y
		//ObtenerNum; esta evaluación se hace con la función ExisteNum() de la pila.
		//Si el número existe en la pilaInicial, se encolará el valor en la colaInicial.
		if (!pilaInicial->ExisteNum(aux->valor))
		{
			pilaInicial->Apilar((&listaInicial2->ObtenerNum(aux->valor))->valor);
			aux = aux->siguienteNum;
		}
		else
		{
			colaInicial->Encolar((&listaInicial2->ObtenerNum(aux->valor))->valor);
			aux = aux->siguienteNum;
		}
	}

	//Se reinician los contadores, los dígitos se establecen como -1, se muestran la pila y la cola con todos sus números y se 
	//muestran todos los displays en blanco. Se desactiva la opción de agregar un segundo precio.
	contUsos = 0;
	dig1 = -1;
	dig2 = -1;
	dig3 = -1;
	dig4 = -1;
	dig5 = -1;
	dig6 = -1;
	dig7 = -1;
	dig8 = -1;
	MostrarPilaYCola();
	rTBListaDobleEnlazada->Text = "";
	lblPrecio->Text = "----";
	lblPrecioGas2->Text = "----";
	checkBox1->Checked = false;
	checkBox1->Enabled = false;
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	//Cuando el checkBox está marcado, activa el label del segundo precio de la gasolina y el text box donde se ingresa ese precio.
	//Al desmarcarlo, el label y el text box se desactivan.
	if (checkBox1->Checked)
	{
		txtPrecioGas2->Enabled = true;
		lblPrecioGas2->Enabled = true;
	}
	else
	{
		txtPrecioGas2->Enabled = false;
		lblPrecioGas2->Enabled = false;
	}
}
};
}
