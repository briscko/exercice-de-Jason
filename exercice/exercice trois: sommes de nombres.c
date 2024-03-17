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


//S(n) = somme de tous les entiers de 1 a n
//S(n) =n(n+1)/2


#include <stdio.h>


int main()
{
int NombreUn = 0;
int NombreDeux = 0 ;
int somme = 0;


    printf("choisissez un premier nombre compris entre 1 et 998:\n");
    scanf("%d", &NombreUn);
    printf("choisissez un second chiffre supérieur au premier mais inferieur a 1000:\n ");
    scanf("%d",&NombreDeux);
if(NombreUn<1 || NombreUn>998 || NombreDeux<NombreUn || NombreDeux>1000)
    {
    printf("vous navez pas choisis les chiffres recommandés dommage...\n");
    return 0;
    }
    else
    {

       while(NombreUn != NombreDeux)
       {
        somme = NombreUn + somme;
        NombreUn ++;
       }
    }
       somme = somme+NombreDeux;

        printf("%d\n", somme);
    
    printf("la somme entre les deux nombres choisis est de :%d\n",somme);
    
    return 0;
}