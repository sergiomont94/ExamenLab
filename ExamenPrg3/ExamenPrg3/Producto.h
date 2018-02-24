#pragma once
#include <iostream>
using namespace std;
#include <string>

#ifndef PRODUCTO_H
#define PRODUCTO_H

class Producto {

public:
	Producto();

	int getCantidad();
	string getNombreP();
	float getPrecio(float); 

	void setProducto(int,string,float);
	void setSig(Producto* sig);
	Producto *Sig();
	double total();

private:
	int cantidad;
	string nombre;
	float precio;
	Producto *sig;

};

#endif // !PRODUCTO_H

