//cruz gonzalez diana lizbeth
//1tm5
//programa que me dice cual es el mayor y el menor de un arreglo

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int maximo(int []);
int minimo(int []);

int main(int argc, char** argv) 
{
	int maximo1, minimo1, x[5];
	cout<<"\ningresa 5 números";
	for(int i=0;i<=4;i++)
	{
		cin>>x[i];
	}
	maximo1=maximo(x);
	minimo1=minimo(x);
	cout<<"\nEl maximo es: "<<maximo1;
	cout<<"\nEl mínimo es: "<<minimo1;
	
    system("PAUSE>null");
    return EXIT_SUCCESS;
}

                int maximo (int x[5])
                {
    	            int max=x[0];
    	            for(int i=0;i<=4;i++)
    	            {
    		         if(max<x[i])
    		         {
    		         max=x[i];
    		         }
                    }
    	            return max;
                }

                                int minimo (int x[5])
                                {
                                	int min=x[0];
                                	for(int i=0;i<=4;i++)
                                	{
                                		if(min>x[i])
                                		{
                                		min=x[i];
                                		}
                                	}
                                	return min;
                                }
