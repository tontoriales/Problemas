//Problema016
//Crear un programa que permita convertir una cantidad de 
//segundos en horas, minutos y segundos
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	const int HORA = 3600;
	const int MINUTO = 60;
	int t, h, m, s;
	cout<<"Tiempo en segundos: "; cin>>t;
	h = t / HORA;
	t = t % HORA;
	m = t / MINUTO;
	s = t % MINUTO;
	cout<<"Hora: "<<h<<"\n";
	cout<<"Minuto: "<<m<<"\n";
	cout<<"Segundo: "<<s<<"\n";
	return 0;
}
