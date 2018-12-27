#include<stdio.h>

void main (void) {
	char dest;
	int nbproduits;
	
	printf("ou qu'elle est cette destination?\n A ou B ? \n");
	scanf("%c",&dest);
	getchar();
	
	printf("Tapez le nombre de produits \n");
	scanf("%d",&nbproduits);
	getchar();
	
	if (dest == 'B' || nbproduits > 10) {
		printf("Livraison gratosss\n");
		printf("Appuyez sur ENTER pour continuer...\n");
		getchar();
	}
	else if (nbproduits > 7){
		printf("Reduction de 15 %%\n");
		printf("Appuyez sur ENTER pour continuer...\n");
		getchar();
	}
	else{
		printf("Po de reduction \n");
		printf("Appuyez sur ENTER pour continuer...\n");
		getchar();
	}
} 