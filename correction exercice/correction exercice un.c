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

int main (void)
{
    int number = 0;

    printf("entrez un nombre entier : ");
    scanf("%d", &number);
    printf("Valeur en octal :%o\n", number);
       printf("Valeur en hexa : %X\n", number);
 
    return 0;
}
