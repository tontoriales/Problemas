//Problema022
//Realizar el algoritmo donde dado dos n�meros calcular y 
//mostrar su binomio al cuadro.
//Considerar la f�rmula de binomio:(a + b)^2 = a^2 + 2ab + b^2.
#include <iostream>
#include <math.h> 
using namespace std;
int main() {
	int A, B, binomio;
	cout<<"Ingrese primer n�mero: ";
	cin>>A;
	cout<<"Ingrese segundo n�mero: ";
	cin>>B;
	binomio = pow(A,2)+ 2*(A*B)+ pow(B,2);
	cout<<"El binomio es: "<<binomio;
	return 0;
}
