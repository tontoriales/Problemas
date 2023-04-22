//Problema021
//Realizar el algoritmo de un sistema donde se pida el ingreso de dos nombres
//y dos apellidos, como resultado mostrar los dos nombres y apellidos 
//en una sola línea (separados con un espacio, no con saltos de línea).
#include <iostream>
using namespace std;
int main() {
	string N1, N2, A1, A2;
	cout<<"Ingrese 2 nombres: ";
	cin>>N1;
	cin>>N2;
	cout<<"Ingrese 2 apellidos: ";
	cin>>A1;
	cin>>A2;
	cout<<N1<<" "<<N2<<" "<<A1<<" "<<A2;
	return 0;
	
}
