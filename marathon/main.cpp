#include <telelib.h>
#include <mmsystem.h>


using namespace std;
int mainr5()
{

    char op;
    PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\snitch.wav",NULL,SND_FILENAME | SND_ASYNC);
    main2();
    int op1;
	char frase[]="232", resp[4];
    char frase2[]="3", resp2[2];
    char frase3[]="12", resp3[3];
    char frase4[]="1", resp4[2];
    char frase5[]="12.16", resp5[6];
    char frase6[]="10100", resp6[6];
    char frase7[]="6", resp7[2];
    char frase8[]="9", resp8[2];
    char frase9[]="5", resp9[2];
    char frase10[]="27", resp10[3];

		lugar(15,1); cout<<"Bienvenido ";
		lugar(15,2); cout<<"ROUND 5 Y ULTIMO";
		/*for(int x=1;x<=35;x++)
		{
			lugar(x,24); cout<<" :) "; Sleep(50); } CARITA QUE SE MUEVE */
        srand(time(NULL));
        lugar(20,12); cout<<"Opcion: "; op1=1+rand()%10;
        lugar(15,12);cout<<op1;
        switch(op1){
            case 1:

            lugar(20,12);    cout<<"Cuanto es (((20*2)/2)*10)+2 ";
                    lugar(20,13);gets(resp);

                    strupr(resp);
                    if (strcmp(resp,frase)==0){lugar(20,18); cout<<"\n<< SIGUIENTE NIVEL>> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;

            case 2:
            lugar(20,12);  cout<<"Valor de incognita en ((x^2)*1)+1= 10  ";
                    lugar(20,13);gets(resp2);

                    strupr(resp2);
                    if (strcmp(resp2,frase2)==0){ cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else {cout<<"\n<< NO-MENOS VIDA >>\n\n";Sleep(100);} break;
            case 3:

            lugar(20,12);     cout<<"Resultado de ((3/2 + 1/2)+2+2)*2 ";
                    lugar(20,13);gets(resp3);

                    strupr(resp3);
                    if (strcmp(resp3,frase3)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 4:

            lugar(20,12);     cout<<"Resultado de ((1^2)+1)/2";
                    lugar(20,13);gets(resp4);

                    strupr(resp4);
                    if (strcmp(resp4,frase4)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 5:

            lugar(20,12); cout<<"Resultado de (30/5 + 4)+ 2.16 ";
                    lugar(20,13);gets(resp5);

                    strupr(resp5);
                    if (strcmp(resp5,frase5)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 6:

            lugar(20,12);    cout<<"Cuanto es (100*100)+100 ";
                    lugar(20,13);gets(resp6);

                    strupr(resp6);
                    if (strcmp(resp6,frase6)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 7:

            lugar(20,12);     cout<<"Resultado de (4.1 - 2.7)+ 3.1 + 1.5";
                    lugar(20,13);gets(resp7);

                    strupr(resp7);
                    if (strcmp(resp7,frase7)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 8:

            lugar(20,12);    cout<<"Encuentra la incognita en (8/x + 1 + 2 + 3 + 16/x)=9 ";
                    lugar(20,13);gets(resp8);

                    strupr(resp8);
                    if (strcmp(resp8,frase8)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 9:

            lugar(20,12);    cout<<"La secuencia que le sigue es a,1,b,_,c,9,d,13,e,17,f,21,g,25... ";
                    lugar(20,13);gets(resp9);

                    strupr(resp9);
                    if (strcmp(resp9,frase9)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 10:

            lugar(20,12);    cout<<"Resuelve la siguiente operacion (( 3^2 + 4^2 + 5^2 )/2) + 2 ";
                    lugar(20,13);gets(resp10);

                    strupr(resp10);
                    if (strcmp(resp10,frase10)==0){lugar(20,18); cout<<"\n<< SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;

            default: cout<<"Adios";
        } Sleep(50);
	Sleep(100);
}
int mainr4()
{
    system("cls");
    char op;

    main2();
    int op1;
	char frase[]="LA NEGRA TOMASA CAIFANES", resp[40];
    char frase2[]="HELLO ADELE", resp2[40];
    char frase3[]="ESTOS CELOS VICENTE FERNANDEZ", resp3[40];
    char frase4[]="MAPS YEAH YEAH YEAH", resp4[40];
    char frase5[]="CHILANGA BANDA CAFE TACUBA", resp5[40];
    char frase6[]="AZUL LITTLE JESUS", resp6[40];
    char frase7[]="EL NOA NOA JUAN GABRIEL", resp7[40];
    char frase8[]="HIGHWAY TO HELL ACDC", resp8[40];
    char frase9[]="HASTA LA RAIZ NATALIA LAFOURCADE", resp9[40];
    char frase10[]="THRILLER MICHAEL JACKSON", resp10[40];

		lugar(15,1); cout<<"Bienvenido ";
		lugar(15,2); cout<<"ROUND 4";
		/*for(int x=1;x<=35;x++)
		{
			lugar(x,24); cout<<" :) "; Sleep(50); } CARITA QUE SE MUEVE */
        srand(time(NULL));
        lugar(20,12); cout<<"Opcion: "; op1=1+rand()%10;
        lugar(15,12);cout<<op1;
        switch(op1){
            case 1:
            PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\1.negra.wav",NULL,SND_FILENAME | SND_ASYNC);

            lugar(20,12);    cout<<"La cancion que esta sonando es, y la canta: ";
                    lugar(20,13);gets(resp);

                    strupr(resp);
                    if (strcmp(resp,frase)==0){lugar(20,18); cout<<"\n<< SIGUIENTE NIVEL>> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;

            case 2:
            PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\2.hello.wav",NULL,SND_FILENAME | SND_ASYNC);
            lugar(20,12);  cout<<"La cancion que esta sonando es, y la canta: ";
                    lugar(20,13);gets(resp2);

                    strupr(resp2);
                    if (strcmp(resp2,frase2)==0){ cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else {cout<<"\n<< NO-MENOS VIDA >>\n\n";Sleep(100);} break;
            case 3:
            PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\3.celos.wav",NULL,SND_FILENAME | SND_ASYNC);
            lugar(20,12);     cout<<"La cancion que esta sonando es, y la canta: ";
                    lugar(20,13);gets(resp3);

                    strupr(resp3);
                    if (strcmp(resp3,frase3)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 4:
            PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\4.maps.wav",NULL,SND_FILENAME | SND_ASYNC);
            lugar(20,12);     cout<<"La cancion que esta sonando es, y la canta: ";
                    lugar(20,13);gets(resp4);

                    strupr(resp4);
                    if (strcmp(resp4,frase4)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 5:
            PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\5.banda.wav",NULL,SND_FILENAME | SND_ASYNC);
            lugar(20,12); cout<<"La cancion que esta sonando es, y la canta: ";
                    lugar(20,13);gets(resp5);

                    strupr(resp5);
                    if (strcmp(resp5,frase5)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 6:
            PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\6.azul.wav",NULL,SND_FILENAME | SND_ASYNC);
            lugar(20,12);    cout<<"La cancion que esta sonando es, y la canta: ";
                    lugar(20,13);gets(resp6);

                    strupr(resp6);
                    if (strcmp(resp6,frase6)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 7:
            PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\7.noa.wav",NULL,SND_FILENAME | SND_ASYNC);
            lugar(20,12);     cout<<"La cancion que esta sonando es, y la canta: ";
                    lugar(20,13);gets(resp7);

                    strupr(resp7);
                    if (strcmp(resp7,frase7)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 8:
            PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\8.hell.wav",NULL,SND_FILENAME | SND_ASYNC);
            lugar(20,12);    cout<<"La cancion que esta sonando es, y la canta: ";
                    lugar(20,13);gets(resp8);

                    strupr(resp8);
                    if (strcmp(resp8,frase8)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 9:
            PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\9.raiz.wav",NULL,SND_FILENAME | SND_ASYNC);
            lugar(20,12);    cout<<"La cancion que esta sonando es, y la canta: ";
                    lugar(20,13);gets(resp9);

                    strupr(resp9);
                    if (strcmp(resp9,frase9)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 10:
            PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\10.thriller.wav",NULL,SND_FILENAME | SND_ASYNC);
            lugar(20,12);    cout<<"La cancion que esta sonando es, y la canta: ";
                    lugar(20,13);gets(resp10);

                    strupr(resp10);
                    if (strcmp(resp10,frase10)==0){lugar(20,18); cout<<"\n<< SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;

            default: cout<<"Adios";
        } Sleep(50);
     system("cls");
     mainr5();
	Sleep(100);
}

int mainr3()
{
    system("cls");
    char op;
    main2();
    int op1;
	char frase[]="QUITO", resp[6];
    char frase2[]="EL SALVADOR", resp2[12];
    char frase3[]="PARIS", resp3[6];
    char frase4[]="BAGDAD", resp4[7];
    char frase5[]="JERUSALEN", resp5[10];
    char frase6[]="ROMA", resp6[5];
    char frase7[]="TOKIO", resp7[6];
    char frase8[]="CIUDAD DE MEXICO", resp8[17];
    char frase9[]="LIMA", resp9[5];
    char frase10[]="MOSCU", resp10[6];
    char frase11[]="SALTILLO", resp11[9];
    char frase12[]="DURANGO", resp12[8];
    char frase13[]="PACHUCA", resp13[8];
    char frase14[]="MERIDA", resp14[7];
    char frase15[]="CULIACAN", resp15[9];

		lugar(15,1); cout<<"Bienvenido ";
		lugar(15,2); cout<<"ROUND 3";
		/*for(int x=1;x<=35;x++)
		{
			lugar(x,24); cout<<" :) "; Sleep(50); } CARITA QUE SE MUEVE */
	for(int i=0;i<3;i++)
    {
        system("cls");
        srand(time(NULL));
        lugar(20,12); cout<<"Opcion: "; op1=1+rand()%15;
        lugar(15,12);cout<<op1;
        switch(op1){
            case 1:


            lugar(20,12);    cout<<"La capital de ECUADOR es: Q_______";
                    lugar(20,13);gets(resp);

                    strupr(resp);
                    if (strcmp(resp,frase)==0){lugar(20,18); cout<<"\n<< SIGUIENTE NIVEL>> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;

            case 2:
            lugar(20,12); cout<<"La capital de EL SALVADOR es: E_______";
                    lugar(20,13);gets(resp2);

                    strupr(resp2);
                    if (strcmp(resp2,frase2)==0){ cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else {cout<<"\n<< NO-MENOS VIDA >>\n\n";Sleep(100);} break;
            case 3:
            lugar(20,12);    cout<<"La capital de FRANCIA es: P_______";
                    lugar(20,13);gets(resp3);

                    strupr(resp3);
                    if (strcmp(resp3,frase3)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 4:
            lugar(20,12);    cout<<"La capital de IRAK es: B_______";
                    lugar(20,13);gets(resp4);

                    strupr(resp4);
                    if (strcmp(resp4,frase4)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 5:
            lugar(20,12);   cout<<"La capital de ISRAEL es: J_______";
                    lugar(20,13);gets(resp5);

                    strupr(resp5);
                    if (strcmp(resp5,frase5)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 6:
            lugar(20,12);    cout<<"La capital de ITALIA es: R_______";
                    lugar(20,13);gets(resp6);

                    strupr(resp6);
                    if (strcmp(resp6,frase6)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 7:
            lugar(20,12);    cout<<"La capital de JAPON es: T_______";
                    lugar(20,13);gets(resp7);

                    strupr(resp7);
                    if (strcmp(resp7,frase7)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 8:
            lugar(20,12);    cout<<"La capital de MEXICO es: C_____ __ ______";
                    lugar(20,13);gets(resp8);

                    strupr(resp8);
                    if (strcmp(resp8,frase8)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 9:
            lugar(20,12);    cout<<"La capital de PERU es: L_______";
                    lugar(20,13);gets(resp9);

                    strupr(resp9);
                    if (strcmp(resp9,frase9)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 10: /*PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\2.wav",NULL,SND_FILENAME | SND_ASYNC);*/
            lugar(20,12);    cout<<"La capital de RUSIA es: M_______";
                    lugar(20,13);gets(resp10);

                    strupr(resp10);
                    if (strcmp(resp10,frase10)==0){lugar(20,18); cout<<"\n<< SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 11:
            lugar(20,12);    cout<<"La capital de COAHUILA es: S_______";
                    lugar(20,13);gets(resp11);

                    strupr(resp11);
                    if (strcmp(resp11,frase11)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 12:
            lugar(20,12);    cout<<"La capital de DURANGO es: D_______";
                    lugar(20,13);gets(resp12);

                    strupr(resp12);
                    if (strcmp(resp12,frase12)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 13:
            lugar(20,12);    cout<<"La capital de HIDALGO es: P_______";
                    lugar(20,13);gets(resp13);

                    strupr(resp13);
                    if (strcmp(resp13,frase13)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 14:
            lugar(20,12);    cout<<"La capital de YUCATAN es: M_______";
                    lugar(20,13);gets(resp14);

                    strupr(resp14);
                    if (strcmp(resp14,frase14)==0){lugar(20,18); cout<<"\n<<  SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 15: /*PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\2.wav",NULL,SND_FILENAME | SND_ASYNC);*/
            lugar(20,12);    cout<<"La capital de SINALOA es: C_______";
                    lugar(20,13);gets(resp15);

                    strupr(resp15);
                    if (strcmp(resp15,frase15)==0){lugar(20,18); cout<<"\n<< NO-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            default: cout<<"Adios";
        } Sleep(50);
    }
     mainr4();
	Sleep(100);
}

int mainr2()
{
    system("cls");
    char op;
    main2();
    int op1;
	char frase[]="cero", resp[5];
    char frase2[]="si", resp2[3];
    char frase3[]="bellota", resp3[8];
    char frase4[]="no", resp4[3];
    char frase5[]="vino", resp5[5];
    char frase6[]="ingles", resp6[7];
    char frase7[]="coma", resp7[5];
    char frase8[]="elefante", resp8[9];
    char frase9[]="indice", resp9[7];
    char frase10[]="mi", resp10[3];

		lugar(15,1); cout<<"Bienvenido ";
		lugar(15,2); cout<<"ROUND 2";
		/*for(int x=1;x<=35;x++)
		{
			lugar(x,24); cout<<" :) "; Sleep(50); } CARITA QUE SE MUEVE */
        srand(time(NULL));
        lugar(20,12); cout<<"Opcion: "; op1=1+rand()%10;
        lugar(15,12);cout<<op1;
        switch(op1){
            case 1:


            lugar(20,12);    cout<<"El caballo tiene ____ manos";
                    lugar(20,13);gets(resp);

                    strlwr(resp);strlwr(frase);
                    if (strcmp(resp,frase)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL>> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;

            case 2:
            lugar(20,12); cout<<"Pueden nadar los delfines?";
                    lugar(20,13);gets(resp2);

                    strlwr(resp2); strlwr(frase2);
                    if (strcmp(resp2,frase2)==0){ cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else {cout<<"\n<< NO-MENOS VIDA >>\n\n";Sleep(100);} break;
            case 3:
            lugar(20,12);    cout<<"El fruto del roble es la:_____ta";
                    lugar(20,13);gets(resp3);

                    strlwr(resp3);strlwr(frase3);
                    if (strcmp(resp3,frase3)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 4:
            lugar(20,12);    cout<<"Es la araña un insecto? ";
                    lugar(20,13);gets(resp4);

                    strlwr(resp4);strlwr(frase4);
                    if (strcmp(resp4,frase4)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 5:
            lugar(20,12);    cout<<"Como se dice vino en italiano? ";
                    lugar(20,13);gets(resp5);

                    strlwr(resp5);strlwr(frase5);
                    if (strcmp(resp5,frase5)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 6:
            lugar(20,12);    cout<<"El i____s es el segundo idioma mas hablado del mundo";
                    lugar(20,13);gets(resp6);

                    strlwr(resp6);strlwr(frase6);
                    if (strcmp(resp6,frase6)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 7:
            lugar(20,12);    cout<<"La c___ es el signo de puntuacion mas usado";
                    lugar(20,13);gets(resp7);

                    strlwr(resp7);strlwr(frase7);
                    if (strcmp(resp7,frase7)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 8:
            lugar(20,12);    cout<<"El e________ el unico mamifero que no puede saltar ";
                    lugar(20,13);gets(resp8);

                    strlwr(resp8);strlwr(frase8);
                    if (strcmp(resp8,frase8)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 9:
            lugar(20,12);    cout<<"El i_____ es el dedo mas sensible de la mano";
                    lugar(20,13);gets(resp9);

                    strlwr(resp9);strlwr(frase9);
                    if (strcmp(resp9,frase9)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 10: /*PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\2.wav",NULL,SND_FILENAME | SND_ASYNC);*/
            lugar(20,12);    cout<<"ma me __ mo mu";
                    lugar(20,13);gets(resp10);

                    strlwr(resp10);strlwr(frase10);
                    if (strcmp(resp10,frase10)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            default: cout<<"Adios";
        }
        mainr3();
	Sleep(100);
}

int main()
{

   char op;

    PlaySound("G:\\n-escuela\\Estructurada\\corte2\\maraton\\snitch.wav",NULL,SND_FILENAME | SND_ASYNC);
    main2();
    int op1;
	char frase[]="0", resp[5];
    char frase2[]="camaron", resp2[8];
    char frase3[]="madrugar", resp3[9];
    char frase4[]="quiere", resp4[7];
    char frase5[]="conocer", resp5[8];
    char frase6[]="rosa", resp6[5];
    char frase7[]="siembra", resp7[8];
    char frase8[]="silencio", resp8[9];
    char frase9[]="amor", resp9[5];
    char frase10[]="tuerto", resp10[7];



		lugar(15,1); cout<<"Bienvenido ";
		lugar(15,2); cout<<"Este es un maraton ";
		lugar(15,3); cout<<"Empecemos por la ROUND 1 ";
		/*for(int x=1;x<=35;x++)
		{
			lugar(x,24); cout<<" :) "; Sleep(50); } CARITA QUE SE MUEVE */
        srand(time(NULL));
        lugar(20,12); cout<<"Opcion: "; op1=1+rand()%10;
        lugar(15,12);cout<<op1;
        switch(op1){
            case 1:

            lugar(20,12);    cout<<"Amor con amor se _____";
            lugar(20,13);    cout<<"a)paga b)pega c) pena ";
                    lugar(37,12);gets(resp);

                    strlwr(resp);strlwr(frase);
                    if (strcmp(resp,frase)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL>> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;

            case 2:
            lugar(20,12); cout<<"_________ que se duerme se lo lleva la corriente";
            lugar(20,13); cout<<"a)niño b)camaron c) delfin";
                    lugar(20,12);gets(resp2);

                    strlwr(resp2); strlwr(frase2);
                    if (strcmp(resp2,frase2)==0){ cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else {cout<<"\n<< NO-MENOS VIDA >>\n\n";Sleep(100);} break;
            case 3:
            lugar(20,12);    cout<<"No por mucho __________ amanece mas temprano";
            lugar(20,13);    cout<<"a)madrugar b)comer c) bailar";
                    lugar(34,12);gets(resp3);

                    strlwr(resp3);strlwr(frase3);
                    if (strcmp(resp3,frase3)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 4:
            lugar(20,12);    cout<<"Quien todo lo ________, todo lo pierde";
            lugar(20,13);    cout<<"a)desea b)ama c) quiere ";
                    lugar(35,12);gets(resp4);

                    strlwr(resp4);strlwr(frase4);
                    if (strcmp(resp4,frase4)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 5:
            lugar(20,12);    cout<<"Más vale malo conocido que bueno por _________";
            lugar(20,13);    cout<<"a)conocido b)conocer c) odiar ";
                    lugar(58,12);gets(resp5);

                    strlwr(resp5);strlwr(frase5);
                    if (strcmp(resp5,frase5)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 6:
            lugar(20,12);    cout<<"No hay ______ sin espinas";
            lugar(20,13);    cout<<"a)rosa b)roja c) cactus ";
                    lugar(28,12);gets(resp6);

                    strlwr(resp6);strlwr(frase6);
                    if (strcmp(resp6,frase6)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 7:
            lugar(20,12);    cout<<"Quien _________ vientos recoge tempestades";
            lugar(20,13);    cout<<"a)cultiva b)siembra c) sopla ";
                    lugar(27,12);gets(resp7);

                    strlwr(resp7);strlwr(frase7);
                    if (strcmp(resp7,frase7)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 8:
            lugar(20,12);    cout<<"La palabra es plata y el __________ es oro";
            lugar(20,13);    cout<<"a)silencio b)amor c) sueño ";
                    lugar(46,12);gets(resp8);

                    strlwr(resp8);strlwr(frase8);
                    if (strcmp(resp8,frase8)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 9:
            lugar(20,12);    cout<<"______ sin celos no lo dan los cielos";
            lugar(20,13);    cout<<"a)mujer b)amor c) cariño ";
                    lugar(21,12);gets(resp9);

                    strlwr(resp9);strlwr(frase9);
                    if (strcmp(resp9,frase9)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            case 10:
            lugar(20,12);    cout<<"En el pais de los ciegos, el ________ es rey.";
            lugar(20,13);    cout<<"a)cojo b)ojon c) tuerto ";
                    lugar(50,12);gets(resp10);

                    strlwr(resp10);strlwr(frase10);
                    if (strcmp(resp10,frase10)==0){lugar(20,18); cout<<"\n<< OK-BONUS SIGUIENTE NIVEL >> \n"; Sleep(100);}
                    else{  lugar(20,19);cout<<"\n<< NO-MENOS VIDA >>\n\n"; Sleep(100); } break;
            default: cout<<"Adios";
        }
        mainr2();

	 system("pause");
  return 0;
}


