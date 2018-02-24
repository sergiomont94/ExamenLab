#include <iostream>
#include"Fecha.h"
using namespace std;
Fecha::Fecha(int dia, int  mes, int ano) {
	setDia(dia);
	setMes(mes);
	setAno(ano);
}

int Fecha::getDia() {
	return this-> dia;

}

int Fecha::getMes() {
	return this-> mes;
}


int Fecha::getAno() {

	return this->ano;

}
void Fecha::setDia(int dia) {

	this->dia = dia;

}
void Fecha::setMes(int mes) {

	this->mes = mes;

}


void Fecha::setAno(int ano) {

	this->ano = ano;

}



void Fecha::imprimir() {
	cout << dia << "-" << mes << "-" << ano << endl;
}
