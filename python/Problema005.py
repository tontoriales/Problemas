//Problema005
//Hallar la potencia de bª, done b y a son
//números enteros positivos.
#include <iostream> 
#include <math.h> 
using namespace std;
int main () {
	int potencia, base, exponente;
	cout<<"Base: "; 
	cin>>base;
	cout<<"Exponente: "; 
	cin>>exponente;
	potencia = pow(base,exponente);
	cout<<"La potencia es: "<<potencia;
	return 0;
}
