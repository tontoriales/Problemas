//Problema003
//Crear un algoritmo para encontrar el área y el perímetro del circulo, 
//usar la formula: P=2*¶*r | A=¶*r²
#include <iostream> 
#include <math.h> 
using namespace std;
int main() {
	const float PI = 3.14159; 
	float R, A, P;
	cout<<"Radio: ";
	cin>>R;
	P = 2 * PI * R;
	A = PI * pow(R,2);
	cout<<endl;
	cout<<"Perimetro: "<<P<<endl;
	cout<<"Area: "<<A; 
	return 0;
}
