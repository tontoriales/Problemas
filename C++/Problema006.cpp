//Problema006
//Hallar la ra�z cuadrada de un n�mero raiz� cuadrada de n, 
//donde n son n�meros enteros positivos.
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int numero;
	float raiz;
	cout<<"Ingresar numero: ";
	cin>>numero;
	raiz = sqrt(numero);
	cout<<"La ra�z cuadrada es: "<<raiz;
	return 0;
}
