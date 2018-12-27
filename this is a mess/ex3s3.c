#include<stdio.h>
#include<stdbool.h>

void main (void) {
	int choix = 0;
	
	do {
		printf("Menu : \n1 : truc pas bon \n2 : truc non bon\n3 : truc impossible a manger \n4 : truc bon ou pas \n");
		printf("Choisis un menu entre 1 et 4 \n");
		scanf("%d", &choix);
	}
	while (choix<1 || choix>4);
	getchar();
}