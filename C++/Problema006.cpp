//Problema006
//Hallar la raíz cuadrada de un número raiz¹ cuadrada de n, 
//donde n son números enteros positivos.
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int numero;
	float raiz;
	cout<<"Ingresar numero: ";
	cin>>numero;
	raiz = sqrt(numero);
	cout<<"La raíz cuadrada es: "<<raiz;
	return 0;
}
