#pragma once
#include "SuperAvion.h"

class Avion7G : public SuperAvion
{
public:
	Avion7G() {
		this->alto = 2;
		this->ancho = 11;
	}

	~Avion7G() {}

	void borrar() {
		Console::SetCursorPosition(x, y);		cout << "           ";
		Console::SetCursorPosition(x, y + 1);	cout << "           ";
	}

	void dibujar() {

		Console::SetCursorPosition(x, y);		cout << R"(     |     )";
		Console::SetCursorPosition(x, y + 1);	cout << R"(-- = O = --)";
	}


};
