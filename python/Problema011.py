//Problema011
//Una tienda ofrece un descuento del 15% sobre el total de la
//compra y un cliente desea saber cuanto deberá pagar
//finalmente por su compra.
#include <iostream>
using namespace std;
int main() {
	float montoCompra, montoDescuento, montoPago, descuento;
	cout<<" Monto de compra: ";
	cin>>montoCompra;
	descuento = 0.15;
	montoDescuento = montoCompra * descuento;
	montoPago = montoCompra - montoDescuento;
	cout<<endl;
	cout<<" Monto a pagar: "<<montoPago;
	return 0;
}
