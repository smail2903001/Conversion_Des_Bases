#include<stdio.h>
#include<stdlib.h>
#include <math.h>
unsigned int getvalue(char entree)      //fonction pour convertir le carctre en un nombre :)
{
  switch(entree)
  {

    case '0' : return 0;
               break;
    case '1' : return 1;
               break;
    case '2' : return 2;
               break;
    case '3' : return 3;
               break;
    case '4' : return 4;
               break;
    case '5' : return 5;
               break;
    case '6' : return 6;
               break;
    case '7' : return 7;
               break;
    case '8' : return 8;
               break;
    case '9' : return 9;
               break;


    case 'A' :
    case 'a' : return 10;
               break;
    case 'B' :
    case 'b' : return 11;
               break;
    case 'C' :
    case 'c' : return 12;
               break;
    case 'D' :
    case 'd' : return 13;
               break;
    case 'E' :
    case 'e' : return 14;
               break;
    case 'F' :
    case 'f' : return 15;
               break;
    case 'G' :
    case 'g' : return 16;
               break;
    case 'H' :
    case 'h' : return 17;
               break;
    case 'I' :
    case 'i' : return 18;
               break;
    case 'J' :
    case 'j' : return 19;
               break;
    case 'K' :
    case 'k' : return 20;
               break;
    case 'L' :
    case 'l' : return 21;
               break;
    case 'M' :
    case 'm' : return 22;
               break;
    case 'N' :
    case 'n' : return 23;
               break;
    case 'O' :
    case 'o' : return 24;
               break;
    case 'P' :
    case 'p' : return 25;
               break;
    case 'Q' :
    case 'q' : return 26;
               break;
    case 'R' :
    case 'r' : return 27;
               break;
    case 'S' :
    case 's' : return 28;
               break;
    case 'T' :
    case 't' : return 29;
               break;
    case 'U' :
    case 'u' : return 30;
               break;
    case 'V' :
    case 'v' : return 31;
               break;
    case 'W' :
    case 'w' : return 32;
               break;
    case 'X' :
    case 'x' : return 33;
               break;
    case 'Y' :
    case 'y' : return 34;
               break;
    case 'Z' :
    case 'z' : return 35;
               break;
    default : return 40;
              //exit(0);
  }
}

int main() {



    int a,b,i,j,res;
    char y;
    printf("Combien de chiffre dans le numero a convertir ");
    scanf("%d",&a);
    int t[a];
    char T[a];
    printf("Quelle est la base d'origine[2] et [35] ?  ==> ");
    scanf("%d",&b);
    while(b<2 || b>36 ){
        printf(":(  Ce nes't pas une base possible !!!! \n");
        printf(" choisissez vous autre fois ====> ");
        scanf("%d",&b);
    }
    system("cls");// fonction qui efface le console







    //juste une decoration de l'affichage
    //================================================
    for(i = 0; i < 50; i++) putchar('#');
    printf("\n");
    printf("Veuillez vous saisir le numero a convertir \n");
    for(i = 0; i < 50; i++) putchar('#');
    printf("\n");

    //================================================








    for(i=0;i<a;i++) {
      system("cls");
      getchar();
      printf("Tape le chiffre d'ordre %d  : ",i+1);
      scanf("%c",&y);
      T[i]=y;
      t[i]=getvalue(y);
      while(t[i]>=b) {


            if(t[i]>=b && t[i]<40){
            system("cls");
            printf("!!!!!! ATTENTION [ERREUR COMMIS]\n");
            printf("le chiffre que vous essayez de taper est hors de la base origine \n");
            printf("---------------------------------------------------------------------\n");
            printf("---------------------------------------------------------------------\n");
            printf("Retapez le chiffre d'ordre %d ===>  ",i+1);
            getchar();
            scanf("%c",&y);
            T[i]=y;
            t[i]=getvalue(y);}

            else if(t[i]==40){
            system("cls");
            printf("!!!!!! ATTENTION [ERREUR COMMIS]\n");
            printf("la valeur erronee , svp tape seulment les caractere alpha numerique\n Exemple: abC1e5\n");

            printf("---------------------------------------------------------------------\n");
            printf("---------------------------------------------------------------------\n");
            printf("Retapez le chiffre d'ordre %d ===>  ",i+1);
//            getchar();
            scanf("%c",&y);
            T[i]=y;
            t[i]=getvalue(y);
            }

                        }

        }




        system("cls");
        int D=0;
        for(i=0;i<a;i++){
            res=1;
            // Cette Boucle a pour l'objectif de calculer power(base,longeurTableau t - (i+1) )
            for(j=a-(i+1);j>0;j--){
                res*=b;
            }
            D = D + t[i]*res;
        }




//================================================


        for(int i = 0; i < 50; i++) putchar('=');
        printf("\n");
        for(int i = 0; i < 50; i++) putchar('=');
        printf("\n");

//================================================




        printf("la conversion de ce nombre [[ ");
        for(i=0;i<a;i++) {
            printf("%c",T[i]);
        }
        printf(" ]] en decimale est ==> %d\n",D);

}

