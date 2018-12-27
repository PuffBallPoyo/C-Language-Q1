#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*Écrivez le programme qui, étant donnés deux nombres réels, permet de déterminer le signe
du produit (positif, négatif ou nul), sans effectuer l'opération mais en se basant sur les signes
de chacun des deux nombres.*/

void main(void) {
    int op1;
    int op2;

    printf("Donne 2 operandes\n");
    scanf("%d%d",&op1,&op2);
    
    if(op1 == 0 || op2 == 0) printf("Produit nul\n");
    else if (op1 < 0 || op2 < 0  ) printf("Produit negatif\n");
    else printf("Produit positif\n");
}