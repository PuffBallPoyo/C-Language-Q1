#include <stdbool.h>
#include <stdio.h>

void main(void) {
    int som = 0;
    int cpt = 0;
    int nb;

    while (cpt < 10) {
        printf("Votre nombre\n");
        scanf("%d", &nb);
        if (nb == 0) break;  // continue permet de revenir au debut de la boucle
        // break permet de sortir de la boucle
        else {
            som += nb;
            cpt++;
        }
    }
    printf("La somme des %d nombres = %d", cpt, som);
    getchar();

    /*int som = 0;
    int cpt;
    int nb;
    for(cpt = 1; cpt <= 10; cpt++) {
            printf("Votre nombre\n");
            scanf("%d", &nb);
            

            som+=nb;
    }
    printf("La somme des 10 nombres = %d",som);
    getchar();*/
}
