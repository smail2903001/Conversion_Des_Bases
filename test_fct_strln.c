#include<stdio.h>
#include<stdlib.h>
int longueurChaine(const char* chaine);

int main()
{
    char chaine[]="\0";
    int longueur=0;


    printf("Veuillez saisir une chaine de caractère chaine\n");
    scanf("%s",chaine);
            longueur = longueurChaine(chaine);
            while (longueur>1){
            printf(":(   :(  Svp , Tape seulement les caracteres d'un seul chiffre : ");
            scanf("%c",&chaine);
            }
    printf("\nLa chaine %s fait %d caracteres de long", chaine, longueur);


    return 0;
}

int longueurChaine(const char* chaine)
{
    int nombreDeCaracteres = 0;
    char i;
    char caractereActuel = 0;

    do
    {
        caractereActuel = chaine[nombreDeCaracteres];
        nombreDeCaracteres++;

    }
    while(caractereActuel != '\0'); // On boucle tant qu'on n'est pas arrivé à l'\0

    //if (caractereActuel=' ' )nombreDeCaracteres++;




    nombreDeCaracteres--; // On retire 1 caractère de long pour ne pas compter le caractère \0

    return nombreDeCaracteres;
}
