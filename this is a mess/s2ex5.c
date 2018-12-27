#include<stdio.h>

void main (void) {
	char car;
	
	printf("Entrez un caractere:\n");
	scanf("%c",&car);
	getchar();
	
	if ((car >= 'a' && car <= 'z' ) || (car >= 'A' && car <= 'Z')) {
		printf ("Lettre de l'alphabet\n");
		if (car >= 'A' && car <= 'Z') {
			printf("En majuscule\n");
		}
		if	(car >= 'a' && car <= 'z'){
			printf("En minuscule\n");
		}
	}		
	printf("Appuyez sur ENTER pour continuer...\n");
	getchar();
}