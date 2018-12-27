//Exercice 1
#include<stdio.h>

void main (void) {
	int nb;
	
	printf("Entrez un nombre entier positif\n");
	scanf("%d",&nb);
	getchar();
	
	if (nb<0) {
		nb *= -1;
		printf("Nombre obtenu : %d",nb);
		getchar();
	}
	else {
		printf("Nombre obtenu : %d",nb);
		getchar();
	}
}