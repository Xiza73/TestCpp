#pragma once
#include "SuperAvion.h"

class Avion5E : public SuperAvion
{
public:
	Avion5E() {
		this->alto = 3;
		this->ancho = 13;
	}

	~Avion5E() {}

	void borrar() {
		Console::SetCursorPosition(x, y);		cout << "             ";
		Console::SetCursorPosition(x, y + 1);	cout << "             ";
		Console::SetCursorPosition(x, y + 2);	cout << "             ";
	}

	void dibujar() {

		Console::SetCursorPosition(x, y);		cout << R"(    __!__    )";
		Console::SetCursorPosition(x, y + 1);	cout << R"(-----<*>-----)";
		Console::SetCursorPosition(x, y + 2);	cout << R"(    o O o    )";
	}



};
