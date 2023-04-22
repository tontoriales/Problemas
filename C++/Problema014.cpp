//Problema014
//A un vendedor se le asigna un bono 10% extra por comisión de
//sus ventas, el vendedor desea saber cuánto dinero obtendrá
//por concepto de comisiones por las tres ventas que realiza en el
//mes y el total que recibirá en el mes tomando en cuenta su
//sueldo base y comisiones.
#include <iostream>
using namespace std;
int main() {
	float P_COM, T_VEN, V1, V2, V3;
	float T_COM, S_BAS, S_TOT;
	cout<<" Sueldo base: ";
	cin>>S_BAS;
	cout<<" Venta 1: ";
	cin>>V1;
	cout<<" Venta 2: ";
	cin>>V2;
	cout<<" Venta 3: ";
	cin>>V3;
	P_COM = 0.1;
	T_VEN = V1 + V2 + V3;
	T_COM = T_VEN * P_COM;
	S_TOT = S_BAS + T_COM;
	cout<<" Sueldo total: "<<S_TOT;
	return 0;
}
