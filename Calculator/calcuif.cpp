//cruz gonzalez diana lizbeth
//1tm5
//calculadora con if solo 2 digitos

#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



using namespace std;
int main(int argc, char *argv[]) 
{
	
float a,b,c;
int opc;
	uno:
		system("cls");
	cout<<"MENU"<<endl<<"1. Suma\n2. Resta\n3. Multiplicacion\n4. Division\n5. Salir\n\nElige la opcion deseada: \t";
	cin>>opc;
	
	if(opc==1)
    {
    system("cls");
    cout<<"Dame dos numeros a sumar: ";
	cin>>a>>b;
    c=a+b;
	cout<<"La suma es:"<<endl<<c;
    }
	
    
              if(opc==2)
              {
              system("cls");
              cout<<"Dame dos numeros a restar: ";
	          cin>>a>>b;
              c=a-b;
	          cout<<"La resta es: "<<endl<<c;
              }
	                   
                        if(opc==3)
                        {
                        system("cls");
                        cout<<"Dame dos numeros a multiplicar: ";
	                    cin>>a>>b;
                        c=a*b;
	                    cout<<"La multiplicacion es: "<<endl<<c;
                        }
	
    
                                  if(opc==4)
                                  {
                                  system("cls");
                                  cout<<"Dame dos numeros a dividir: ";
	                              cin>>a>>b;
                                  c=a/b;
	                              cout<<"La division es: "<<endl<<c;
                                  }
	
    
                                            
	                                        
                                            if(opc==5)
                                            {
                                                      system("cls");
                                                      cout<<"Adios";
                                                   
                                            }
	                                        
                                            if(opc!=1&&opc!=2&&opc!=3&&opc!=4&&opc!=5&&opc!=6){system("cls");cout<<"Opcion incorrecta, presiona cualquier tecla para volver al menu.";getch();goto uno;}getch();

system("PAUSE>null");
return EXIT_SUCCESS;
}


