#include "pch.h"
#include "Avion1A.h"
#include "Avion2B.h"
#include "Avion3C.h"
#include "Avion4D.h"
#include "Avion5E.h"
#include "Avion6F.h"
#include "Avion7G.h"
#include "Avion8H.h"
#include "Avion9I.h"


void menu() {
	cout << "Opcion 1: Rayo Mcqueen" << endl;
	cout << "Opcion 2: Tronchatoro" << endl;
	cout << "Opcion 3: Batimovil" << endl;
	cout << "Opcion 4: Nube Voladora" << endl;
	cout << "Opcion 5: Formula 1" << endl;
	cout << "Opcion 6: Radinador360" << endl;
	cout << "Opcion 7: El Carrier" << endl;
	cout << "Opcion 8: Escarabajo " << endl;
	cout << "Opcion 9: Troncomovil" << endl;
}



int main()
{
	int opcion;
	SuperAvion *sa;


	cout << "Ingrese la opcion que desee:"<< endl;
	menu();
	cin >> opcion;
	switch (opcion)
	{
	case 1: sa = new Avion1A(); break;
	case 2: sa = new Avion2B(); break;
	case 3: sa = new Avion3C(); break;
	case 4: sa = new Avion4D(); break;
	case 5: sa = new Avion5E(); break;
	case 6: sa = new Avion6F(); break;
	case 7: sa = new Avion7G(); break;
	case 8: sa = new Avion8H(); break;
	case 9: sa = new Avion9I(); break;
	default:
		break;
	}
	
	while (true) {
		sa->borrar();
		sa->mover();
		sa->dibujar();
		Sleep(200);
	}

}
