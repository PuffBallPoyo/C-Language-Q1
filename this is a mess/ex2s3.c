#include<stdio.h>
#include<stdbool.h>

void main (void) {
	int numero;
	
	printf("Entrez votre numero de joueur (0 pour terminer)\n");
	scanf("%d", &numero);
	
	while (numero != 0) {
		if (numero % 2 == 0){
			printf("Joueur numero %d , dans l equipe verte\n",numero);
		}
		else {
			printf("Joueur numero %d , dans l equipe jaune\n",numero);
		}
	printf("Donne un autre nombre de joueur (0 pour terminer)\n");
	scanf("%d",&numero);
	getchar();
	}
}