#include "Factura.h"
#include "Fecha.h"
#include "Producto.h"
#include <iostream>

using namespace std;


int main() {

	Factura *lista = new Factura();
	lista->agregarP(1, 100);
	lista->buscar("Martin")->agregarProducto(2, "Leche", 50);
	lista->buscar("Martin")->agregarProducto(2, "Manzana", 10);

	lista->Facturar(Fecha(23, 2, 2018), "Zepeda");
	lista->Facturar(Fecha(23, 2, 2018), "Bryan");
	lista->buscar("Nelson")->agregarP(2, "Sandia", 50);
	lista->buscar("Nelson")->agregarP(2, "Pollo", 100);
	lista->buscar("Nelson")->agregarP(2, "Melon", 60);

	
	lista->buscar("Martin")->imprimirTotal();

	cout << "Total de facturas: " << lista->cantidadFacturas() << std::endl;
	cout << "Total por todo: " << lista->total() << std::endl;



	system("pause");
}