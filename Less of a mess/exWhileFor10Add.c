#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//Ce programme permet la somme de x nombres grâce à une boucle

void main(void) {
    int som = 0;
    int cpt = 1;
    int nb;
    //méthode avec while
    /*while(cpt <= 10){
        printf("Tape un nombre (%d deja tapes)\n",cpt-1);
        scanf("%d",&nb);
        som+=nb;
        cpt++;
    }*/
    //Méthode qui permet soit d'ignorer les 0 ou de sortir de la boucle lorsque nb est égal a 0
    /*while (cpt <= 10) {
        printf("Tape un nombre (%d deja tapes)\n",cpt-1);
        scanf("%d", &nb);
        if (nb == 0) break;  // continue permet de revenir au debut de la boucle
        // break permet de sortir de la boucle
        else {
            som += nb;
            cpt++;
        }
    } */
    //méthode for
    for(int cpt = 1 ; cpt <= 10 ; cpt++){
        printf("Tape un nombre (%d deja tapes)\n",cpt-1);
        scanf("%d",&nb);
        som+=nb;
        //Cette méthode fait bugger le cpt du printf !
    }
    printf("La somme des %d nombres est egale a %d\n",cpt-1,som);
}