#include <iostream>
#include "Factura.h"
using namespace std;

Factura::Factura(string cliente) : facturar(22, 2, 2018) {
	this->cliente = cliente;
}

void Factura::agregarP(int precio, float cantidad)
{
	Producto* newNode = new Producto();
	newNode->setProducto(precio, this->cliente,cantidad);
	newNode->setSig(NULL);

	Producto *tmp = primero;

	if (tmp != NULL) {
		while (tmp->Sig() != NULL) {
			tmp = tmp->Sig();
		}
		tmp->setSig(newNode);
	}
	else {
		primero = newNode;
	}
}

void Factura::total()
{
	Producto *tmp = primero;

	if (tmp == NULL) {
		printf("Vacio");
		return;
	}

	if (tmp->Sig() == NULL) {
		tmp->total();
	}
	else {
		do {
			tmp->total();
			tmp = tmp->Sig();
		} while (tmp != NULL);
	}
}



