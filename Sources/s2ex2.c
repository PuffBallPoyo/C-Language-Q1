#include<stdio.h>
// Exercice 2

void main (void)	{
	int nbpc;
	int montant;
	int res;
	printf("Entrez le nombre de PC\n");
	scanf("%d",&nbpc);
	getchar();
	printf("Entrez le montant de la commande\n");
	scanf(%d",&montant);
	getchar();
	res = montant/nbpc;
	
	if (nbpc > 0 && res > 500) {
		printf("Trop cher");
		getchar();
	}
	else {
		printf("its ok");
	}
}