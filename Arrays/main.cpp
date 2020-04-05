#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("color 0A");

    int x[4], y[4], a=0, b=0,suma;


	cout<<"Ingresa 4 valores de  MATRIZ X\n";
    for(int i=0; i<4; i++){
    	cin>>x[i];
    	a=a+x[i];
	}


    cout<<endl<<"Ingresa 4 valores de MATRIZ Z\n";
    for(int e=0; e<4; e++){
    	cin>>y[e];
    	b=b+y[e];
	}

    if(a>b){
    	cout<<endl<<"MATRIZ X es mayor a MATRIZ Y"<<endl;
	}


    if(b>a){
    	cout<<endl<<"MATRIZ Y es mayor a MATRIZ X"<<endl;
	}

	if(b==a){
    	cout<<endl<<"MATRIZ X y Y es IGUAL"<<endl;
	}

	suma=a+b;
	cout<<endl<<"La suma del valor de matrices es:"<<suma;

    system("PAUSE>null");
    return EXIT_SUCCESS;
}

