//Problema018
//Un alumno desea saber cual ser� su calificaci�n final en un curso.
//Dicha calificaci�n se compone de los siguientes porcentajes:
//	� 55% del promedio de sus tres calificaciones parciales.
//	� 30% de la calificaci�n del examen final.
//	� 15% de la calificaci�n de un trabajo final.
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
	int N1, N2, N3, EF, TF;
	float NF, PP;
	cout<<"Nota 1: ";
	cin>>N1;
	cout<<"Nota 2: ";
	cin>>N2;
	cout<<"Nota 3: ";
	cin>>N3;
	cout<<"Examen final: ";
	cin>>EF;
	cout<<"Trabajo final: ";
	cin>>TF;
	PP = (N1 + N2 + N3) / 3;
	NF = PP*0.55 + EF*0.3 + TF*0.15;
	cout<<endl;
	cout<<"Nota Final: "<<NF;
	return 0;
}
