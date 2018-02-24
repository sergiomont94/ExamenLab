#include "Factura.h"
#include "Fecha.h"
#include "Producto.h"
#include <iostream>

using namespace std;


int main() {

	Factura *lista = new Factura();
	lista->agregarP(1, 100);
	lista->buscar("Dillion")->agregarProducto(2, "Leche", 50);
	lista->buscar("Dillion")->agregarProducto(2, "Manzana", 10);

	lista->Facturar(Fecha(23, 2, 2018), "Marin");
	lista->Facturar(Fecha(23, 2, 2018), "Sparks");
	lista->buscar("Brenna")->agregarP(2, "Sandia", 50);
	lista->buscar("Brenna")->agregarP(2, "Pollo", 100);
	lista->buscar("Brenna")->agregarP(2, "Melon", 60);

	
	lista->buscar("Sparks")->imprimirTotal();

	cout << "Total de las facturas: " << lista->Facturar() << std::endl;
	cout << "Total por todo: " << lista->total() << std::endl;



	system("pause");
}