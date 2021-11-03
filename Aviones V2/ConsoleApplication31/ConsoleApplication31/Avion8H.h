#pragma once
#include "SuperAvion.h"

class Avion8H : public SuperAvion
{
public:
	Avion8H() {
		this->alto = 2;
		this->ancho = 17;
	}

	~Avion8H() {}

	void borrar() {
		Console::SetCursorPosition(x, y);		cout << "                  ";
		Console::SetCursorPosition(x, y + 1);	cout << "                  ";
	}

	void dibujar() {

		Console::SetCursorPosition(x, y);		cout << R"(      \ . /      )";
		Console::SetCursorPosition(x, y + 1);	cout << R"(.______(*)______.)";
	}



};
