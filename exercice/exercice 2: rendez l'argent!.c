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
    double somme_a_payer = 0;  
    double somme_a_prendre =0;
   

   //difference(double a, double b)


printf("à combien s'élève le montant total de vos achats?\n");
scanf("%lf", &somme_a_payer);
printf("combien de monnaie avez vous?");
scanf("%lf", &somme_a_prendre);
 double difference = somme_a_prendre -  somme_a_payer;
printf("%lf de diff",  difference);

printf("pour la somme de %lf ,nous vous rendons : %lf euro\n", somme_a_payer, difference);


    return 0 ;
}