#pragma once
#include <iostream>
#include <string>
#include "Fecha.h"
#include "Producto.h"
using namespace std;

#ifndef FACTURA_H
#define FACTURA_H


class Factura {
	Factura();

public: 
	Factura(string);
	void agregarP(int cantidad, float precio);
	void total();

private:
	Fecha facturar;
	string cliente;
	Producto *primero;
	

	/*void setSig(Factura *);
	Factura* getSig();
	Factura();
	Factura *sig, *primero, *ultimo;*/

};


#endif // !FACTURA_H

