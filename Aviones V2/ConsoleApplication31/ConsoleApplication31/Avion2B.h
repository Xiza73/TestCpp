#pragma once
#include "SuperAvion.h"

class Avion2B : public SuperAvion
{
public:
	Avion2B() {
		this->alto = 3;
		this->ancho = 18;
	}

	~Avion2B() {}

	void borrar() {
		Console::SetCursorPosition(x, y);		cout << "                  ";
		Console::SetCursorPosition(x, y + 1);	cout << "                  ";
		Console::SetCursorPosition(x, y + 2);	cout << "                  ";
	}



	void dibujar() {

		Console::SetCursorPosition(x, y);		cout << R"(________|________)";
		Console::SetCursorPosition(x, y + 1);	cout << R"( _|_____0_____|_ )";
		Console::SetCursorPosition(x, y + 2);	cout << R"(      |   |      )";
	}



};


