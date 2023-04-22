//Problema012
//El dueño de una tienda compra un artículo a un precio determinado.
//Obtener el precio en que lo debe vender para
//obtener una ganancia del 30%.
#include <iostream>
using namespace std;
int main() {
	float ganancia, montoGanancia, montoCompra, precioVenta;
	cout<<" Monto de compra: ";
	cin>>montoCompra;
	ganancia = 0.3;
	montoGanancia = montoCompra * ganancia;
	precioVenta = montoCompra + montoGanancia;
	cout<<endl;
	cout<<" Precio de venta: "<<precioVenta;
	return 0;
}
