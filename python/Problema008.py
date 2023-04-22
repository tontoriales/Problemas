//Problema008
//Crear un algoritmo que convierta de Grados Celcius a kelvin,
//Grados fahrenheit y Grados Rankine. Aplique las siguientes 
//fórmulas: °C/5 = (K-273.15)/5 = (°F-32)/9 = (°R-491.67)/9
#include <iostream>
using namespace std;
int main() {
	int celcius;
	float kelvin, fahrenheit, rankine;
	cout<<"Grados Celcius: ";
	cin>>celcius;
	kelvin = celcius + 273.15;
	fahrenheit = (celcius * 1.8) + 32;
	rankine = (celcius * 1.8) + 491.67;
	cout<<"Kelvin: "<<kelvin<<endl;
	cout<<"Grados Fahrenheit: "<<fahrenheit<<endl;
	cout<<"Grados Rankine: "<<rankine;
	return 0;
}
