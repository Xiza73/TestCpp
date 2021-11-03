#pragma once
#include "SuperAvion.h"

class Avion3C : public SuperAvion
{
public:
	Avion3C() {
		this->alto = 3;
		this->ancho = 19;
	}

	~Avion3C() {}

	void borrar() {
		Console::SetCursorPosition(x, y);		cout << "                   ";
		Console::SetCursorPosition(x, y + 1);	cout << "                   ";
		Console::SetCursorPosition(x, y + 2);	cout << "                   ";
	}

	void dibujar() {

		Console::SetCursorPosition(x, y);		cout << R"(       __|__       )";
		Console::SetCursorPosition(x, y + 1);	cout << R"(________(*)________)";
		Console::SetCursorPosition(x, y + 2);	cout << R"(		  o/ \o       )";
	}




};
