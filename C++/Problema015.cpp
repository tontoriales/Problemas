//Problema015
//Crear un algoritmo para calcular el interés compuesto generado
//por un capital depositado durante cierta cantidad de tiempo a
//una tasa de interés determinada, aplique las siguientes 
//fórmulas: M=(1+(r/100))™*C  |  I=M-C
#include <iostream>
#include <math.h> 
using namespace std;
int main(int argc, char *argv[]) {
	float C, r, t, M, I;
	cout<<"Ingresar capital: ";
	cin>>C;
	cout<<"Tasa de interés: ";
	cin>>r;
	cout<<"Tiempo del préstamo: ";
	cin>>t;
	M = pow((1 + r/100),t) * C;
	I = M - C;
	cout<<endl;
	cout<<"Monto total a pagar =  "<<M<<endl;
	cout<<"Utilidad % =  "<<I<<endl;
	return 0;
}