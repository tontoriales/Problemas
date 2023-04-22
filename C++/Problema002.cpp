//Problema002
//Crear un algoritmo que determine el cociente y el residuo (resto) de 
//dos números enteros, e imprimirlo en pantalla.
#include <iostream>
using namespace std;
int main() {
	int D1, D2, C, R;
	cout<<"Ingresar dividendo: "; 
	cin>>D1;
	cout<<"Ingresar divisor: ";
	cin>>D2;
	C = D1 / D2;
	R = D1 % D2;
	cout<<"El cociente es: "<<C<<endl;
	cout<<"El residuo es: "<<R;
	return 0;
}
