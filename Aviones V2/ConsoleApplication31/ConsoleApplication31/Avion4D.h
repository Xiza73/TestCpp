#pragma once
#include "SuperAvion.h"

class Avion4D : public SuperAvion
{
public:
	Avion4D() {
		this->alto = 3;
		this->ancho = 13;
	}

	~Avion4D() {}

	void borrar() {
		Console::SetCursorPosition(x, y);		cout << "             ";
		Console::SetCursorPosition(x, y + 1);	cout << "             ";
		Console::SetCursorPosition(x, y + 2);	cout << "             ";
	}

	void dibujar() {

		Console::SetCursorPosition(x, y);		cout << R"(    __!__    )";
		Console::SetCursorPosition(x, y + 1);	cout << R"(_____(_)_____)";
		Console::SetCursorPosition(x, y + 2);	cout << R"(     !!!     )";
	}




};
