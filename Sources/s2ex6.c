#include<stdio.h>

void main(void){
	char classe;
	
	printf("Choisis ta classe (M/O/R/P/G)\n");
	scanf("%c",&classe);
	getchar();
	
	switch(classe) {
		case 'M' : printf("Magicien\n");
		break;
		case 'O' : printf("Oracle\n");
		break;
		case 'R' : printf("Roublard\n");
		break;
		case 'P' : printf("Pretre\n");
		break;
		case 'G' : printf("Guerrier\n");
		break;
		default : printf ("Tu n as pas de classe\n");
	}
	printf("Appuyez sur ENTER pour continuer...\n");
	getchar();
}