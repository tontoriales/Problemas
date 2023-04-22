//Problema009
//Crear un algoritmo que determine la suma de los N primeros números 
//enteros positivos, usar la siguiente formula.
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
