//Problema019
//Cierto hospital recibe un monto de donaci�n en d�lares, el cual va a
//distribuir de la siguiente manera:
//	� 34.65% para Pediatr�a
//	� 31.25% para Cardiolog�a
//	� El resto para Neurolog�a
//Elabora un algoritmo que permita ingresar el monto de la donaci�n,
//luego que calcule y muestre el monto asignado a cada especialidad.
#include <iostream>
using namespace std;
int main() {
	int N, S;
	cout<<"Numero: ";
	cin>>N;
	S = (N * (N + 1))/2;
	cout<<"Suma: "<<S;
	return 0;
}
