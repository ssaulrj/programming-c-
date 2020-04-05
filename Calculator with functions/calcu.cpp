#include <cstdlib>
#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

int suma();
int resta();
int multiplicacion();
int division();


int main(int argc, char *argv[])
{
    system("color 0A");

    int x;

    cout<<"Que operacion quieres realizar: ";
    cout<<"\n1. Suma\n";
    cout<<"2. Resta\n";
    cout<<"3. Multiplicacion\n";
    cout<<"4. Division\n";

    cin>>x;

    switch(x){

              case 1:


              cout<<" es igual a la suma. "<<suma();
              break;

              case 2:


              cout<<" es igual a la resta. "<<resta();
              break;

              case 3:


              cout<<" es igual a la multiplicacion. "<<multiplicacion();
              break;

              case 4:

              cout<<"  es igual a la division "<<division();
              break;


              }

    system("PAUSE>null");
    return EXIT_SUCCESS;
}

int suma()
{
    int a,b,c;

            cout<<"Ingresa los numeros a sumar: \n";
            cin>>a>>b;
   c=a+b;
   cout<<c;
   return 0;
}

          int resta()
          {int a,b,c;

            cout<<"Ingresa los numeros a sumar: \n";
            cin>>a>>b;
              c=a-b;cout<<c;
            return 0;
          }

                     int multiplicacion()
                     {int a,b,c;

            cout<<"Ingresa los numeros a sumar: \n";
            cin>>a>>b;
                      c=a*b;cout<<c;
                            return 0;
                     }

                                         int division()
                                         {int a,b,c;

            cout<<"Ingresa los numeros a sumar: \n";
            cin>>a>>b;
                                             c=a/b;cout<<c;

                                                return 0;


                                         }


