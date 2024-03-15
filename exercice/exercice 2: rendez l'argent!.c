/*
Exercice C #2
[Révision ; jusqu'`å la séance 6 - conditions]
> Ecrire un programme de rendu de monnaie en saisissant le montant total des achats puis la somme 
donnée, indiquer la monnaie a rendre (en billet de 22,10,5 et piece de 2 et 1 euro)

> Indications :
    -S'assurer que la somme donnée est bien supérieur a la somme des achats
    -gérer le cas où on aurait payer un montant égal au achats
    -Rendre le moins de billets/pièces possible(25e de monnaie -> 1 billet de 20e +1 billet de 5)
    -l'opéperateur modulo sera utile pour cet exercice

*/
#include <stdio.h>

int main()
{
    float somme_a_payer = 0;  
    float somme_a_prendre =0;
    float somme_a_rendre =0;
    int piece_de_un = 1;
    int piece_de_deux = 2;
    int billet_de_cinq = 5;
    int billet_de_dix = 10;
    int billet_de_vingt = 20;
   

   //difference(double a, double b)


printf("à combien s'élève le montant total de vos achats?\n");
scanf("%f", &somme_a_payer);
printf("combien de monnaie avez vous?");
scanf("%f", &somme_a_prendre);
 double difference = somme_a_prendre -  somme_a_payer;
if (somme_a_payer > somme_a_prendre )
{
   printf("vous n'avez pas donner assez de monnaies \n");

}
else if (somme_a_payer == somme_a_prendre)
{
    printf("merci et bonne journée\n");
    }
else 
{
    printf("pour la somme de %.2f ,nous devons vous rendre : %.2f euro\n", somme_a_payer, difference);

}

while (difference != 0 )
{ 
    if (difference > 79)
    {
        printf("mais nous n'avons pas assez de monnaie, merci de faire l'appoint");
        return 0;
    }

   else if (difference >20)
    {
         difference= difference-billet_de_vingt;
         printf("voici un billet de 20 +");
    }
   else if (difference>=10)
   {
       difference = difference-billet_de_dix;
       printf("voici un billet de 10 +");
    }
    else if (difference>=5) 
    { 
        difference = difference-billet_de_cinq;
        printf("voici un billet de 5 +");
   }
    else if (difference >= 2)
   {
        difference = difference-piece_de_deux;
        printf("voici une piece  de 2 euro +");
   }
    else if (difference >= 1)
   {
            difference = difference-piece_de_un;
            printf("voici une piece  de 1 euro +");

   }
   else if (difference <1)
   {
   printf("et %.2f centime", difference);
             difference = difference-difference ;
        
     
        // difference = 0;
         
   }
   else
   {
    printf("erreur");
    return 0;
   }
}





    return 0 ;
}