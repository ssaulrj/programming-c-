#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float suma(float, float);
float resta(float, float);
float multi(float, float);
float division(float, float);
float sumat(float);

using namespace std;
int main(int argc, char *argv[]) {
	
float x, y, res, opc;
	uno:
		system("cls");
	cout<<"MENU"<<endl<<"1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Sumatoria\n6. Salir\n\nElige la opcion deseada: \t";
	cin>>opc;
	
	if(opc==1){system("cls");cout<<"Dame dos numeros a sumar: ";
	cin>>x>>y;res=suma(x,y);
	cout<<"La suma de "<<x<<" con "<<y<<" es: "<<res;getch();goto uno;}
	if(opc==2){system("cls");cout<<"Dame dos numeros a restar: ";
	cin>>x>>y;res=resta(x,y);
	cout<<"La resta de "<<x<<" con "<<y<<" es: "<<res;getch();goto uno;}
	if(opc==3){system("cls");cout<<"Dame dos numeros a multiplicar: ";
	cin>>x>>y;res=multi(x,y);
	cout<<"La multiplicacion de "<<x<<" con "<<y<<" es: "<<res;getch();goto uno;}
	if(opc==4){system("cls");cout<<"Dame dos numeros a dividir: ";
	cin>>x>>y;res=division(x,y);
	cout<<"La division de "<<x<<" con "<<y<<" es: "<<res;getch();goto uno;}
	if(opc==5){system("cls");cout<<"Dame el numero a calcular su sumatoria: ";
	cin>>x;res=sumat(x);cout<<"La sumatoria de "<<x<<" es: "<<res;getch();goto uno;}
	if(opc==6){system("cls");cout<<"Adios";}
	if(opc!=1&&opc!=2&&opc!=3&&opc!=4&&opc!=5&&opc!=6){system("cls");cout<<"Opcion incorrecta, presiona cualquier tecla para volver al menu.";getch();goto uno;}getch();
}

float suma(float a, float b){return a+b;}
float resta(float a, float b){return a-b;}
float multi(float a, float b){return a*b;}
float division(float a, float b){return a/b;}
float sumat(float a){int res=0;
for(int i=1; i<=a; i++){res=res+i;}return res;}
