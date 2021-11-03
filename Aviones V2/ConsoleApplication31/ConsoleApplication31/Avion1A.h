
#include "SuperAvion.h"
#include "Console.h"



class Avion1A : public SuperAvion
{
public:
	Avion1A() {
		this->alto = 3;
		this->ancho = 11;
	}

	~Avion1A(){}

	void borrar() {
		Console::SetCursorPosition(x, y);		cout << "           ";
		Console::SetCursorPosition(x, y + 1);	cout << "           ";
		Console::SetCursorPosition(x, y + 2);	cout << "           ";
	}

	void dibujar() {

		Console::SetCursorPosition(x, y);		cout << R"(-----------)";
		Console::SetCursorPosition(x, y +1);	cout << R"(_\__(_)__/_)";
		Console::SetCursorPosition(x, y +2);	cout << R"(   ./ \.   )";
	}



};

