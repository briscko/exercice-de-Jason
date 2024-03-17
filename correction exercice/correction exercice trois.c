/*
EXERCICE C # 3
[Révision : boucles]
> Ecrire un programme qui calcule la somme des entiers d'un 
nombre à un autre (maximum : entre e1 et 1000)

> Indications :
     -prévoir le cas où "min" serait plus grand que "max" et quitter 
      le programme si ca arrive.
     -prévoir le cas où "min" serait plus petit que 1 et "max" 
      plus grand que 1000.
*/

#include <stdio.h>


int main()

{ 
    int min = 0, max = 0 , sum =0;

    printf("Enttez un nombre MIN (entre 1 et 1000)  :");
    scanf("%d", &min);

    if(min<1)
    {
        printf("MIN  trop petit !/n");
        return -1;
    }

    printf("Entrez un nombre MAX (entre 1 et 1000) :");
    scanf("%d", &max);

    if (max > 1000)
    {
        printf("MAX trop grand !\n");
        return -1;
    }
    if(min > max)
    {
        printf("Saisies incorrectes !");
        return -1;
    }


if(min != max)

    for(int i = min ; i < max +1 ; i++)
        sum += i;

else 
  sum = min;

    printf("Somme finale : %d \n", sum);

    return 0;
}