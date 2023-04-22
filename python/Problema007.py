//Problema007
//Crear un algoritmo que determine el área y perímetro de un triangulo 
//donde la altura y los lados son enteros positivos, 
//usar la siguiente formula: A=(B*H)/2  | P=L1+L2+L3
#include <iostream>
using namespace std;
int main() {
	int H, B, L1, L2, A, P;
	cout<<"Altura: ";
	cin>>H;
	cout<<"Base: ";
	cin>>B;
	cout<<"Lado 1: ";
	cin>>L1;
	cout<<"Lado 2: ";
	cin>>L2;
	A = (B * H)/2;
	P = B + L1 + L2;
	cout<<"Area: "<<A<<"\n";
	cout<<"Perimetro: "<<P;
	return 0;
}
