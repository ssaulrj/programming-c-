#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int c[9]={0,0,0,0,0,0,0,0,0}, turno, jugador;
char denuevo=' ';

char tirada(int i); /*Necesaria en print_gato, retorna 'X', 'O' o ' '*/
int ganador(); /*Deduce si hay un ganador, regresa -1, 0 o 1*/
void print_gato(); /*Imprime el tablero de Gato*/
void turno_jugador();
void turno_computadora();


int main()
{
do
{
    int h, menu;
    printf(" nMenu:n 1) Jugar. n 2) Leer instruccionesn 3) Ver creditosn 4) Salirnn");
    scanf("%d", &menu);

    switch(menu)
    {
         case 1:


                        jugador = 1;
                        turno = 0;
                        do
                        {
                              turno++;
                              if (jugador) turno_jugador(); else turno_computadora();
                              print_gato();
                         }
                         while ((!ganador())&&(turno<=8));
                         switch (ganador())
                         {
                                case 0:
                                     printf("n Empatamosn");
                                     break;

                                case 1:
                                     printf("n Tu ganasnn");
                                     break;

                                case -1:
                                     printf("n o.O yo te gano n");
                                     break;
                         }


                 break;

         case 2:
              printf("n Vamos a jugar GATO!nn Las casillas estan enumeradas asi:n 1 |2 |3n --+--+--n 4 |5 |6n --+--+--n 7 |8 |9n");
              printf("n Elije una casilla pulsando un numero. Una vez que tires tu, tirare yo. nGana quien haga una linea de tres caracteres iguales n ya sean horizontales, verticales o diagonalesnn");
              getchar();
              break;

         case 3:
              printf("n Programa que juega gato con el usuario hecho por:n Irais Jañezn");
              getchar();
              break;

          case 4:
               printf("t Fue un placer jugar contigo");
               getchar();
               exit(1);
              break;
         }
         printf("Volver al menu? (s o n) ");
         scanf("%s", &denuevo);
         if (denuevo>=97) denuevo-=32;
         if ((denuevo!='s')&&(denuevo!='n'))
         for (h=0;h<=8;h++) c[h]=0;
}
while (denuevo=='S');
getchar();

}

void print_gato() /*esta funcion acomoda los valores en el dibujo del tablero*/
{
     printf("n %c |%c |%cn --+--+--n %c |%c |%cn --+--+--n %c |%c |%cn", tirada(c[0]), tirada(c[1]), tirada(c[2]), tirada(c[3]), tirada(c[4]), tirada(c[5]), tirada(c[6]), tirada(c[7]), tirada(c[8]));
}

char tirada(int i)
{
     switch (i)
     {
            case (-1):
                 return 'X';
                 break;

            case (1):
                 return 'O';
                 break;

            default:
                    return ' ';
     }
}

int ganador() /*esta funcion compara el arreglo con los patrones de posible ganador*/
{
    if ((c[0]+c[1]+c[2]==3)|| (c[3]+c[4]+c[5]==3)|| (c[6]+c[7]+c[8]==3)|| (c[6]+c[3]+c[0]==3)|| (c[7]+c[4]+c[1]==3)|| (c[8]+c[5]+c[2]==3)|| (c[6]+c[4]+c[2]==3)|| (c[8]+c[4]+c[0]==3)) return 1;
    else if ((c[0]+c[1]+c[2]==-3)|| (c[3]+c[4]+c[5]==-3)|| (c[6]+c[7]+c[8]==-3)|| (c[6]+c[3]+c[0]==-3)|| (c[7]+c[4]+c[1]==-3)|| (c[8]+c[5]+c[2]==-3)|| (c[6]+c[4]+c[2]==-3)|| (c[8]+c[4]+c[0]==-3)) return -1;
    else return 0;
}

void turno_jugador() /*coloca el caracter en la casilla seleccionada y verifica que no este ocupada*/
{
     int quieres;
     printf("n Te toca, En que casilla quieres tirar? [1-9] ");
     scanf("%d",&quieres);

     if ((quieres>9)|| (quieres<1)|| (c[quieres-1]!=0))
     {
                       do
                       {
                                     printf("n Esa casilla esta ocupada, intenta en otra: [1-9] ");
                                     fflush(stdin);

                                     scanf("%d",&quieres);
                       }
                       while ((quieres>9)|| (quieres<1)|| (c[quieres-1]!=0));
     }

     c[quieres-1]=1;
     jugador = 0;
}

void turno_computadora() /* coloca el valor de la computadora a tirar, en una posicion aleatoria*/
{
     int quiero;
     time_t t;
     printf("n Me toca, tiro en la casilla: ");
     do
     {
                  srand(time(&t));
                  quiero=rand()%9;
     }
     while (c[quiero]!=0);
     printf("%dn", quiero + 1);

     c[quiero]=-1;
     jugador = 1;
}
