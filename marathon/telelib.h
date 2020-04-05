#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <time.h>
using namespace std;

void lugar (int x, int y)
{
     COORD coord;
     coord.X =x;
     coord.Y=y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

}
int main2 ()
{
     system("color 0B");
    for (int i9=0;i9<=79;i9++) //ENTORNO
            {
            lugar(i9,0); cout<<"*";
            }
    for (int i10=0;i10<=79;i10++)
            {
            lugar(i10,25); cout<<"*";
            }
    for (int i11=0;i11<=25;i11++)
            {
            lugar(0,i11); cout<<"*";
            }
    for (int i12=0;i12<=25;i12++)
            {
            lugar(79,i12); cout<<"*";
            }
}

