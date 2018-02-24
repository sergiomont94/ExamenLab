#pragma once

#include <iostream>
using namespace std;

#ifndef FECHA_H
#define FECHA_H


class Fecha {

	
public:
	
	Fecha(int, int, int);

	int getMes();
	int getDia();
	int getAno();

	void setDia(int);
	void setMes(int);
	void setAno(int);

	

	
	void imprimir();
private:
	int dia;
	int mes;
	int ano;


};



 



#endif // !FECHA_H