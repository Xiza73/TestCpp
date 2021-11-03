#pragma once
#include "SuperAvion.h"

class Avion6F : public SuperAvion
{
public:
	Avion6F() {
		this->alto = 4;
		this->ancho = 19;
	}

	~Avion6F() {}

	void borrar() {
		Console::SetCursorPosition(x, y);		cout << "                   ";
		Console::SetCursorPosition(x, y + 1);	cout << "                   ";
		Console::SetCursorPosition(x, y + 2);	cout << "                   ";
		Console::SetCursorPosition(x, y + 3);	cout << "                   ";
	}

	void dibujar() {

		Console::SetCursorPosition(x, y);		cout << R"(         .         )";
		Console::SetCursorPosition(x, y + 1);	cout << R"(._______ | _______.)";
		Console::SetCursorPosition(x, y + 2);	cout << R"(       \(*)/       )";
		Console::SetCursorPosition(x, y + 3);	cout << R"(       o/ \o       )";
	}





};
