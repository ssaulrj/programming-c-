//cruz gonzalez diana lizbeth
//1tm5
//programa que lacula salarios co horas extras


#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("color 0f");
                      
    int hrs, sal,extra,total;
    
        cout<<"Ingresa las horas trabajadas: ";
        cin>>hrs;
        
        if(hrs<=35){
                    sal=hrs*35;
                    cout<<"\n Tu salario es: $"<<sal; }

        if(hrs>35)
        {
                  extra=(hrs-15)*22;
                  sal=15*35;
                  total=sal+extra;
                   cout<<"\nTu salario es: $"<<sal; }


    system("PAUSE>null");
    return EXIT_SUCCESS;
}
