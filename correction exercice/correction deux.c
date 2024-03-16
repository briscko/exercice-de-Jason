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
    int  purchases = 0, amount_paid = 0, result = 0;
    int  bill20 = 0, bill10 = 0, bill5 = 0, coin2 = 0, coin1 = 0;

    printf("entrez le total des achats : ");
    scanf("%d", &purchases);
    printf("entrez la somme  payee     : ");
    scanf("%d", &amount_paid);

    if(amount_paid < purchases)
    {
        printf("vous n'avez pas paye suffisament.\n");
        return -1;
    }
    else if(amount_paid == purchases)
    {
        printf("pas de monnaie a rendre. \n");
        return 0;               
    }
    else
    {
       result = amount_paid - purchases;
       bill20 = result / 20;
       result %=  20;
       bill10 = result / 10;
       result %= 10;
       bill5 = result / 5;
       result %= 5;

       coin2 = result / 2;
       result %= 2;
       coin1 = result / 1;
       result %= 1;
    } 

       printf("\n_____MONNAIE A RENDRE_____\n");

        if (bill20 > 0)
            printf("billets de 20 euros : %d\n", bill20);
        if (bill10 > 0)
            printf("billets de 10 euro : %d\n", bill10);
        if (bill5 > 5)
            printf("billets de 5 euro : %d\n", bill5);
        if (coin2 > 0)
             printf("pieces de 2 euro : %d\n", coin2);
        if (coin1 > 0)
            printf("pieces de 1 euro : %d\n", coin1);

    
        

    return 0;
}                                                                      