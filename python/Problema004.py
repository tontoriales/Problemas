//Problema004
//Dado el Valor de venta de un producto, hallar el IGV (I9%) y el 
//Precio de venta.
#include <iostream>
using namespace std;
int main() {
	float valorVenta, IGV, precioVenta; 
	cout<<"Valor de venta: "; 
	cin>>valorVenta;
	IGV = valorVenta * 0.19;
	precioVenta = valorVenta + IGV;
	cout<<"IGV: "<<IGV<<endl; 
	cout<<"El Precio de Venta es: "<<precioVenta;
	return 0;
}
