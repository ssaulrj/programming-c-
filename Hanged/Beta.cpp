#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string.h>
#include <cstdlib>
#include <fstream>

using namespace std;
char  palabra[50],rep[100];
bool repetido=false, ganar=false;

/*Clase Padre de la cual va a derivar la Clase Juego
  La Clase Imprimir sirve para enviar mensajes y dibujar el muñequito
*/
class Imprimir{
 private:
       string mensaje;
 public:
  char word, temp [100];
       void setmensaje(string a){
        mensaje = a;
       }
       string getmensaje(){
        return mensaje;
       }
       //El polimorfismo se da porque tenemos el mismo método pero con distintos parámetros
      //Este método va sin parámetros
       void dibuja(){ system("cls");
          printf(" _________ \n");
          printf(" |        | \n");
          printf(" |        0\n");
          printf(" |       /|%c\n",92);
          printf(" |       / %c  \n",92);
          printf(" | \n");}
       //Este método  a pesar de llamarse igual que el anterior si tiene parámetros
void dibuja(int num){
        if (num == 5) {/* code */ system("cls");
          printf("\n");
          printf("|\n");
          printf("|\n");
          printf("|\n");
          printf("|\n");
          printf("|\n");
        }else if (num == 4){  system("cls");
         printf(" _________ \n");
         printf(" |\n");
         printf(" |\n");
         printf(" |\n");
         printf(" |\n");
         printf(" |\n");}
         else if (num == 3){ system("cls");
          printf(" _________ \n");
          printf(" |        | \n");
          printf(" |\n");
          printf(" |\n");
          printf(" |\n");
          printf(" |\n");
        }else if (num== 2){  system("cls");
          printf(" _________ \n");
          printf(" |        | \n");
          printf(" |        0\n");
          printf(" |\n");
          printf(" |\n");
          printf(" |\n");}
        else if(num == 1){ system("cls");
          printf(" _________ \n");
          printf(" |        | \n");
          printf(" |        0\n");
          printf(" |       /|%c\n",92);
          printf(" |          \n");
          printf(" | \n");}
         else if(num == 0){ system("cls");
          printf(" _________ \n");
          printf(" |        | \n");
          printf(" |        0\n");
          printf(" |       /|%c\n",92);
          printf(" |       /  \n");
          printf(" | \n");}
        }
};

 /*La Clase Juego hereda de la Clase Imprimir */
class Juego : public Imprimir{
private:
int temporal,inicial, longitud,acierto,oport,  i, j;
Imprimir p;

public:
Juego(){oport=6; acierto=0; j=0;}
void Ahorcado();
};

void Juego::Ahorcado()
{
      do{
   temporal=0;
   if(inicial==0){
     for(i=0;i<strlen(palabra);i++){
       if(palabra[i] == ' '){
         temp[i] = ' ';
         longitud++;
       }
       else{
        temp[i] = '_';
        longitud++;
       }
      }
     }

   inicial = 1;
   temp[longitud] = '\0';
   for(i=0;i<strlen(rep);i++){
    if(rep[i] == word){
     repetido = true;
     break;
    }
    else{
     repetido = false;
    }
   }

   if(repetido == false){
    for(i=0;i<strlen(palabra);i++){
     if(palabra[i] == word){
      temp[i] = word;
      acierto++;
      temporal = 1;
      //p.dibuja(oport);
      }
     }
    }

    if(repetido == false){
     if(temporal == 0){
      oport = oport - 1;
      p.dibuja(oport);
     }
    }
    else if(repetido == true && oport!=6){
      printf("Esa letra ya fue introducida, introduzca otra letra");
      printf("\n\n");
    }

    printf("\n");

    for(i=0;i<strlen(temp);i++){
     printf(" %c ", temp[i]);
    }

    printf("\n");
 /* strcmp compara si ambos arreglos de palabras son iguales
  De ser iguales se ha adivinado la palabra.
 */
    if(strcmp(palabra,temp) == 0){
     ganar = true;
     break;
    }
    printf("\n");
    printf("Letras acertadas: %d",acierto);
    printf("\n");
    printf("Oportunidades restantes: %d",oport);
    printf("\n");
    rep[j] = word;
    j++;
    if(oport > 0){
      printf("Digita una letra para adivinar la palabra:  ");
      scanf("\n %c",&word);
      fflush(stdin);
    }

  }while(oport > 0);
}

int main()
{
    /* ifstream obtiene el texto de un archivo y se lo asigna a una variable de tipo string  */
    ifstream fin("palabra.txt");
    string PalOfFin;
    fin >> PalOfFin;
  //Convierte el texto obtenido en una cadena para acceder a sus propiedades.
    std::string s(PalOfFin);
    //int a = s.length();
    //copy Convierte la palabra en un arreglo de Caracteres con parametros copy(nombre del arreglo, tamano del arreglo)
    s.copy( palabra, s.length());
    rep[0] = ' ';
    rep[1] = '\0';
    //cin.ignore();
    fflush(stdin);
    //Creacion del objeto de tipo Juego
    Juego *a1=new Juego();
    a1->Ahorcado();
    if(ganar){
     printf("\n\n");
     a1->setmensaje("\t\t>>>>>>Felicitaciones!! Adivinaste la palabra<<<<<<");
     cout<<a1->getmensaje();
    }
    else{
     printf("\n\n");
     a1->dibuja();
     a1->setmensaje("\t\t>>>>>>Perdiste Helysheva<<<<<<");
     cout<<a1->getmensaje();
    }
    printf("\n\n");
    //system("PAUSE");
    getchar();
    return 0;
}
