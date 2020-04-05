//cruz gonzalez diana lizbeth
//1tm5
//programa qyue pide datos dde una matriz y los muestra

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    system("color 0f");
    
    int x[5][4];
    
	
	cout<<"Ingresa 20 valores\n";
    for(int i=0; i<5; i++){
            for(int e=0; e<4; e++){	
            cin>>x[i][e];
    		}
			}
	cout<<endl;
   for(int i=0; i<5; i++){
            for(int e=0; e<4; e++){	
            cout<<x[i][e]<<" ";
    		}
    		cout<<endl;
         }
    
	
    system("PAUSE>null");
    return EXIT_SUCCESS;
}

