
#include <iostream>
#include "Console.h"

using namespace std;

class SuperAvion
{
protected:
	int x;
	int y;
	int dx;
	int dy;
	int alto;
	int ancho;
public:
	SuperAvion() {
		this->x = 10;
		this->y = 10;
		this->dx = 2;
		this->dy = 2;
	}

	void setx(int x) { this->x = x; }
	int getx() { return this->x; }

	void sety(int y) { this->y = y; }
	int gety() { return this->y; }

	void setdy(int dy) { this->dy = dy; }
	int getdy() { return this->dy; }

	void setdx(int dx) { this->dx = dx; }
	int getdx() { return this->dx; }

	void setalto(int alto) { this->alto = alto; }
	int getalto() { return this->alto; }

	void setancho(int ancho) { this->ancho = ancho; }
	int getancho() { return this->ancho; }

	~SuperAvion(){}

	virtual void borrar(){}
	virtual void dibujar(){}
	void mover() {
		if (x <= 1 || x + dx <= 0 || x + ancho + dx >= 100) { dx *= -1; }
		x += dx;
	}

};

