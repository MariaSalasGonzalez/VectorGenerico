#include "Vect.h"

Vect::Vect(){
	capacidad = TAMANO_VECTOR;
	cuenta = 0;
	data = new int[TAMANO_VECTOR];
}

Vect::~Vect(){
	delete []data;
}

void Vect::mostrar() {
	for (int i = 0; i < cuenta; i++)
		cout << "elemento" << i << "valor" << data[i] << endl;
}

int Vect::insertar(int d) {
	if (cuenta == capacidad)return -1;
	data[cuenta] = d;
	cuenta++;
	return cuenta;
}

//ordena en forma ascendente los elementos del vector
void Vect::ordenar() {
	int i, j, temp;
	int total = cuenta;

}
