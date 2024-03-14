/*
Exercice C #1
[Révision : affichage/saisie, variables]
> écrire un programme qui demande un nombre entier à l'utilisateur
    et affiche la valeur de la saisie en octal et hexadecimal

> Indications :
    -formater en octal -> %o
    -formater en hexadecimal ->%x ou %X    
*/


#include <stdio.h>
#include <stdlib.h>
int main()
{int choix = 0;
    printf("choisissez un nombre :\n" );
    scanf("%d", &choix);
    printf("le nombre choisit représente %o en octal \n", choix);
    printf("le nombre choisit représente %X en hexadécimal \n", choix);
    printf("le nombre choisit est de :%d\n", choix);

    return 0;
}