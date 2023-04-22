//Problema017
//Elabora un algoritmo que permita ingresar la cantidad de alumnas
//y de alumnos de un salón de clase; luego que calcule el
//porcentaje de varones y mujeres.
#include <iostream>
using namespace std;
int main() {
	int TA, NH, NM;
	float PH, PM;
	cout<<" Ingresar num. hombres: ";
	cin>>NH;
	cout<<" Ingresar num. mujeres: ";
	cin>>NM;
	TA = NH + NM;
	PH = (NH * 100) / TA;
	PM = (NM * 100) / TA;
	cout<<endl;
	cout<<" % de Hombres es: "<<PH<<endl;
	cout<<" % de Mujeres es: "<<PM;
	return 0;
}
