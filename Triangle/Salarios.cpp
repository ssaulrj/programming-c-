#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("color 0f");
                      
    int hrs, sal, aux, aux2, aux3, sal2;
    
        cout<<"Ingresa las horas trabajadas: ";
        cin>>hrs;
        
        if(hrs<=35){
                    sal=hrs*15;
                    cout<<"\n Tu salario es: "<<sal; }
        if(hrs>35){
                   aux=sal*35;
                   aux2=hrs-35;
                   aux3=aux2*22;
                   sal2= aux+aux3;
                   cout<<"\n Tu salario es: "<<sal2; }


    system("PAUSE>null");
    return EXIT_SUCCESS;
}
