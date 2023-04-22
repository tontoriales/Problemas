//Problema019
//Cierto hospital recibe un monto de donación en dólares, el cual va a
//distribuir de la siguiente manera:
//	• 34.65% para Pediatría
//	• 31.25% para Cardiología
//	• El resto para Neurología
//Elabora un algoritmo que permita ingresar el monto de la donación,
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
