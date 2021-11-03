#pragma once
#include "SuperAvion.h"

class Avion9I : public SuperAvion
{
public:
	Avion9I() {
		this->alto = 3;
		this->ancho = 17;
	}

	~Avion9I() {}

	void borrar() {
		Console::SetCursorPosition(x, y);		cout << "                 ";
		Console::SetCursorPosition(x, y + 1);	cout << "                 ";
		Console::SetCursorPosition(x, y + 2);	cout << "                 ";
		Console::SetCursorPosition(x, y + 3);	cout << "                 ";
	}

	void dibujar() {

		Console::SetCursorPosition(x, y);		cout << R"(    ____       _ )";
		Console::SetCursorPosition(x, y + 1);	cout << R"(| __\_\_o____ /_|)";
		Console::SetCursorPosition(x, y + 2);	cout << R"(<[___\_\_-----<  )";
		Console::SetCursorPosition(x, y + 3);	cout << R"( |               )";
	}





};
