//Problema005
//Hallar la potencia de b�, done b y a son
//n�meros enteros positivos.
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
