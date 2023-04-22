//Problema024
//Una tienda ofrece un descuento del 15% sobre el total de la compra y
//un cliente desea saber cuánto deberá pagar finalmente por su compra.
//Ejemplo: Si el monto de compra es S/100, el monto a pagar 
//con el descuento sería S/85.
#include <iostream>
using namespace std;
int main() {
	int montoCompra;
	float descuento, montoDescuento, montoPagar;
	cout<<"Ingrese monto de compra: ";
	cin>>montoCompra;
	descuento = 0.15;
	montoDescuento = descuento*montoCompra;
	montoPagar = montoCompra-montoDescuento;
	cout<<"Pago total menos el descuento: "<<montoPagar;
	return 0;
}
