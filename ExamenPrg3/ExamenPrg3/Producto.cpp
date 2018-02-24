#include "Producto.h"

Producto::Producto() {
}

int Producto::getCantidad() {
	return this->cantidad;
}
string Producto::getNombreP() {
	return this->nombre;
}
float Producto::getPrecio(float) {
	return this->precio;
}
void Producto::setProducto(int cantidad, string nombre,float precio) {
	this->precio = precio;
	this->cantidad = cantidad;
	this->nombre = nombre;
}
void Producto::setSig(Producto* sig) {
	this->sig = sig;
}
Producto* Producto::Sig() {
	return this->sig;
}
double Producto::total() {
	double subtotal = cantidad * precio;
	double ISV = subtotal * 0.14;
	double Total= subtotal + ISV;
	return printf("Total Final: %d", Total);
}