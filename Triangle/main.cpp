//cruz gonzalez diana lizbeth
//1tm5
//programa que te dice que tipo de triangulo es 

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
        
    int a, b, c;
    
    cout<<"Ingrese los valores de los lados de un triangulo \n";
    cin>>a>>b>>c;
                 
                 if(a==b&&a==c){
                 cout<<"El triangulo es equilatero\n"; }
                 
                 if((a==b&&a!=c)||(c==b&&a!=c)||(a==c&&b!=c)){
                 cout<<"El triangulo es isoceles\n"; }
                 
                 if(a!=b&&b!=c&&c!=a){
                 cout<<"El triangulo es escaleno\n"; }
                                       
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
