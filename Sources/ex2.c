#include<stdio.h>

void main (void) {
	int heures;
	int minutes;
	int secondes;
	char initiale1;
	char initiale2;
	double minerval;
	double frais;
	double salaireAnnuel;
	printf("Entrez les heures, les minutes et les secondes.\n");
	scanf("%d %d %d",&heures,&minutes,&secondes);
	getchar();
	printf("Entrez les initiales de votre section \n");
	scanf("%c %c",&initiale1,&initiale2);
	getchar();
	printf("Entrez le minerval et les frais\n");
	scanf("%lf %lf",&minerval,&frais);
	getchar();
	printf("Entrez le salaire annuel\n");
	scanf("%lf",&salaireAnnuel);
	getchar();
	printf("%d h %d min %d sec \n", heures, minutes, secondes); 
	printf("Vous etes dans le groupe %c %c.\n", initiale1, initiale2);
	printf("Le minerval est %.2f et les frais sont %.2f \n", minerval, frais);
	printf("Vous gagnez %.2f euros par an \n", salaireAnnuel);
	getchar();
}