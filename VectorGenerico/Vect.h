#pragma once
#include <iostream>
using namespace std;

static int TAMANO_VECTOR = 12;

class Vect{
private:
	int capacidad;
	int cuenta;
	int *data;
public:
	Vect();
	~Vect();
	void mostrar();
	int insertar(int d);
	void ordenar();
};

