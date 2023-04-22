//Problema013
//Crear un algoritmo que permita convertir de dólares a soles,
//dado el tipo de cambio, el monto en dólares y el monto de soles
//deben ser solicitados por teclado, posteriormente imprimir la
//conversión a soles.
#include <iostream>
using namespace std;
int main() {
	float M_S, M_D, T_C;
	cout<<" Dolares a intercambiar ($): ";
	cin>>M_D;
	cout<<" Tipo de cambio ($) a (S/): ";
	cin>>T_C;
	M_S = M_D * T_C;
	cout<<"\n $ "<<M_D<<", equivale a S/ "<<M_S;
	return 0;
}
