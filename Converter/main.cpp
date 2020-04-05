#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float cm (float);
float km (float);
float inch (float);

using namespace std;
int main(int argc, char *argv[]) {
	float valor, resultado;
	int opc;
	uno:
	system("cls");
	cout<<"MENU\n1. Kilometros a metros.\n2. Centimetros a metros.\n3. Pulgadas a metros.\n\n";
	cout<<"Elige la opcion deseada:   ";
	cin>>opc;
	
	switch(opc){
		case 1:
			system("cls");
			cout<<"Dame el valor: ";
			cin>>valor;
			resultado=km(valor);
			cout<<valor<<" kilometros valen "<<resultado<<" metros";
			break;
		case 2:
			system("cls");
			cout<<"Dame el valor: ";
			cin>>valor;
			resultado=cm(valor);
			cout<<valor<<" centimetros valen "<<resultado<<" metros";
			break;
		case 3:
			system("cls");
			cout<<"Dame el valor: ";
			cin>>valor;
			resultado=inch(valor);
			cout<<valor<<" pulgadas valen "<<resultado<<" metros";
			break;
		default:
			goto uno;
	}
	system("PAUSE>null");
    return EXIT_SUCCESS;
}

float km(float a){return a*1000;}
float cm(float a){return a/100;}
float inch(float a){return a*(0.0254);}
