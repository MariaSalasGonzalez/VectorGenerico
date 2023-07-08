#include "Vect.h"
#include <ctime>
#define MAX 18

int manin() {
	srand(time(0));
	Vect miVector;
	int valor = 0;
	for (int i = 0; i < MAX; i++) {
		valor = rand() % 100;
		miVector.insertar(valor);
	}
	cout << endl << "Mostrando el vector sin ordenar" << endl;
	miVector.mostrar();

	miVector.ordenar();
	cout << endl << "Mostrando el vector ordenado" << endl;
	miVector.mostrar();
	return 0;
}