#include <stdio.h>
#include <stdlib.h>
#define X printf("#");
#define G printf("G");
#define A printf("A");
#define T printf("T");
#define O printf("O");
#define E printf(" ");
#define F printf("\n");
#define D printf("/");

int main(){
    system("title Practica 6 - Salvatore Haro");
    system("color 4f");

    char conntinuar;
    int partida=1,xwin=0,owin=0,nwin=0;

    E E E E F F
    E E E E E E E E X X X X E E E E X X X X E E E D F
    E E E E E E E E X X X X E E E E X X X X E E D E F
    E E E E E E E E X X X X E E E E X X X X E D E E F
    E E E E E E E E X X X X E E E E X X X X D E E E F
    E E E E X X X X X X X X X X X X X X X D X X X X F
    E E E E X X X X X X X X X X X X X X D X X X X X F
    E E E E X X X X X X X X X X X X X D X X X X X X F
    E E E E E E E E X X X X E E E D X X X X E E E E E E E E E A A A A E E T T T T T E E O O O O F
    E E E E E E E E X X X X E E D E X X X X E E G G G G G E E A E E A E E E E T E E E E O E E O F
    E E E E E E E E X X X X E D E E X X X X E E G G G G G E E A E E A E E E E T E E E E O E E O F
    E E E E E E E E X X X X D E E E X X X X E E E E E G G E E A A A A E E E E T E E E E O E E O F
    E E E E X X X X X X X X X X X X X X X X X X X X E G G E E A E E A E E E E T E E E E O E E O F
    E E E E X X X X X X X X X X X X X X X X X X X X E G G E E A E E A E E E E T E E E E O O O O F
    E E E E X X X X X X X X X X X X X X X X X X X X F
    E E E E E E E D X X X X E E E E X X X X E E E E F
    E E E E E E D E X X X X E E E E X X X X E E E E F
    E E E E E D E E X X X X E E E E X X X X E E E E F
    E E E E D E E E X X X X E E E E X X X X E E E E F
    F F

    system("pause");


    do{
    int ganador=0;
    int turno=1,fila,columna;
    char jugador,temp;
    char ganadorEs;
    char pocicion[3][3];
    int q,w;
        for(q=0;q<3;q++){
            for(w=0;w<3;w++){
                pocicion[q][w]=' ';
            }
        }


do{
    system("cls");
    printf("                Juego del Gato v1.0\n");
    printf("[Jugada#%d] ",turno);
    printf("[Partida#%d] ",partida);
    printf("[Juegos Ganados:X=%d O=%d Empatados=%d]\n",xwin,owin,nwin);

    printf(" %c|",pocicion[0][0]);
    printf("%c|",pocicion[0][1]);
    printf("%c\n_______\n",pocicion[0][2]);
    printf(" %c|",pocicion[1][0]);
    printf("%c|",pocicion[1][1]);
    printf("%c\n_______\n",pocicion[1][2]);
    printf(" %c|",pocicion[2][0]);
    printf("%c|",pocicion[2][1]);
    printf("%c\n",pocicion[2][2]);


    if(turno==1||( (turno==3||turno==5) || (turno==7||turno==9) ) )
    jugador='X';
    else
    jugador='O';

    printf("\nEs turno del Jugador %c\n",jugador);
    printf("Escoge la fila y columna (x,y):");
    scanf("%d,%d",&fila,&columna);

    temp=pocicion[fila-1][columna-1]; //Compara que no se repita!!!
    if( ((temp!='X')&&(temp!='O'))&&(((fila>0)&&(fila<4))&&((columna>0)&&(columna<4))) )   {
    pocicion[fila-1][columna-1]=jugador;
    turno++;

    //COMPARACION CON X
    if ( ((pocicion[0][0]=='X')&&(pocicion[1][0]=='X'))&&(pocicion[2][0]=='X') ){
        ganador=1;
        ganadorEs='X';
    }
    else if ( ((pocicion[0][1]=='X')&&(pocicion[1][1]=='X'))&&(pocicion[2][1]=='X') ){
        ganador=1;
        ganadorEs='X';
    }
    else if ( ((pocicion[0][2]=='X')&&(pocicion[1][2]=='X'))&&(pocicion[2][2]=='X') ){
        ganador=1;
        ganadorEs='X';
    }
    else if ( ((pocicion[0][0]=='X')&&(pocicion[0][1]=='X'))&&(pocicion[0][2]=='X') ){
        ganador=1;
        ganadorEs='X';
    }
    else if ( ((pocicion[1][0]=='X')&&(pocicion[1][1]=='X'))&&(pocicion[1][2]=='X') ){
        ganador=1;
        ganadorEs='X';
    }
    else if ( ((pocicion[2][0]=='X')&&(pocicion[2][1]=='X'))&&(pocicion[2][2]=='X') ){
        ganador=1;
        ganadorEs='X';
    }
    else if ( ((pocicion[0][0]=='X')&&(pocicion[1][1]=='X'))&&(pocicion[2][2]=='X') ){
        ganador=1;
        ganadorEs='X';
    }
    else if ( ((pocicion[0][2]=='X')&&(pocicion[1][1]=='X'))&&(pocicion[2][0]=='X') ){
        ganador=1;
        ganadorEs='X';
    }
    //
    //COMPARACION CON =O
    else if ( ((pocicion[0][0]=='O')&&(pocicion[1][0]=='O'))&&(pocicion[2][0]=='O') ){
        ganador=1;
        ganadorEs='O';
    }
    else if ( ((pocicion[0][1]=='O')&&(pocicion[1][1]=='O'))&&(pocicion[2][1]=='O') ){
        ganador=1;
        ganadorEs='O';
    }
    else if ( ((pocicion[0][2]=='O')&&(pocicion[1][2]=='O'))&&(pocicion[2][2]=='O') ){
        ganador=1;
        ganadorEs='O';
    }
    else if ( ((pocicion[0][0]=='X')&&(pocicion[0][1]=='X'))&&(pocicion[0][2]=='X') ){
        ganador=1;
        ganadorEs='X';
    }
    else if ( ((pocicion[1][0]=='O')&&(pocicion[1][1]=='O'))&&(pocicion[1][2]=='O') ){
        ganador=1;
        ganadorEs='O';
    }
    else if ( ((pocicion[2][0]=='O')&&(pocicion[2][1]=='O'))&&(pocicion[2][2]=='O') ){
        ganador=1;
        ganadorEs='O';
    }
    else if ( ((pocicion[0][0]=='O')&&(pocicion[1][1]=='O'))&&(pocicion[2][2]=='O') ){
        ganador=1;
        ganadorEs='O';
    }
    else if ( ((pocicion[0][2]=='O')&&(pocicion[1][1]=='O'))&&(pocicion[2][0]=='O') ){
        ganador=1;
        ganadorEs='O';
    }
    //

    if(turno==10){
    ganador=1;
    ganadorEs='z';
    }
    } //Acaba comparacion que no se repita

    }while(ganador==0);

    system("cls");
    printf("        Juego del Gato v1.0\n");
    printf(" %c|",pocicion[0][0]);
    printf("%c|",pocicion[0][1]);
    printf("%c\n_______\n",pocicion[0][2]);
    printf(" %c|",pocicion[1][0]);
    printf("%c|",pocicion[1][1]);
    printf("%c\n_______\n",pocicion[1][2]);
    printf(" %c|",pocicion[2][0]);
    printf("%c|",pocicion[2][1]);
    printf("%c\n",pocicion[2][2]);
    if(ganadorEs!='z')
    printf("\n\nEL GANADOR ES EL JUGADOR %c\n\n",ganadorEs);
    else
    printf("\n\n    JUEGO EMPATADO!\n\n");

    printf("Desea continuar?(s/n)");
    fflush(stdin);
    scanf("%c",&conntinuar);

    if((conntinuar=='s')||(conntinuar=='S')){
        conntinuar='s';
        partida++;
        (ganadorEs=='X')?xwin++:0;
        (ganadorEs=='O')?owin++:0;
        (ganadorEs=='z')?nwin++:0;
    }

}while(conntinuar=='s');

return 0;
}
