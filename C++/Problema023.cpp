//Problema023
//Desarrollar el algoritmo para calcular y mostrar el volumen de un cono,
//considerar la siguiente fórmula:V = 1/3 (A x h) 
//A: Área de la base y h: Altura
#include <iostream>
using namespace std;
int main() {
	int area, altura;
	float V;
	cout<<"Ingrese area de la base: ";
	cin>>area;
	cout<<"Ingrese altura: ";
	cin>>altura;
	V = 0.333*(area*altura);
	cout<<"El volumen del cono es: "<<V;
	return 0;
}
