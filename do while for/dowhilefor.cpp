//cruz gonzalez diana lizbeth
//1tm5
//analisis 
//menu con do-while y ciclos for
//factorial y sumatorio

#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])

{
	system("cls");
	int x;
	int numero1,numero2;
	int factorial;
	int sumatorio;
	int i;
	
	

	do
	{
		system("pause>lol");
		system("cls");
		cout<<"teclea 1 si quieres salir\n 2 si quieres el sumatorio de un numero\n 3 si quieres el factorial de un numero\n(precione enter enseguida de su numero)\n";
		cin>>x;
		
		switch(x)
		{
		 
		 case 1:
				x=1;
				break;
				
				
		 case 2:
				cout<<"ingrese un numero";
				cin>>numero1;
				sumatorio=0;
				
				for(i=1;i<=numero1;i++)
				{
				sumatorio=i+sumatorio;
				}
				cout<<"el sumatorio es:"<<sumatorio;
				
				break;
			
		case 3:	cout<<"ingrese un numero";
				cin>>numero2;
				factorial=1;
				for(i=1;i<=numero2;i++)
				{
				factorial=i*factorial;
				}
				cout<<"el factorial es:"<<factorial;
				break;
		}	
			  
		 
	}
	while(x!=1);
	
    system("PAUSE>yolo");
    return EXIT_SUCCESS;
}
