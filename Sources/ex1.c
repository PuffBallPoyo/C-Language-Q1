#include<stdio.h>

void main(void) {
	int heures = 2;
	int minutes = 26;
	int secondes = 52;
	char initiale1,initiale2; 
	initiale1= 'T'; 
	initiale2= 'I';
	double minerval = 175.01;
	double frais = 444.99;
	double total = frais+minerval;
	int optionValide = 1;
	int salaireAnnuel = 2000;
	
	printf("Bienvenue au premier bloc !\n");
	printf("Marathon realise %d heures, %d minutes, %d secondes. \n", heures, minutes, secondes); 
	printf("Vous etes dans le groupe %c%c.\n", initiale1, initiale2);
	printf("Total = %.2f + %.2f = %.2f.\n", minerval, frais, total);
	printf("Salaire mensuel : %d euros par mois \n", salaireAnnuel / 12);
	printf("-10.5\t -7.8\t 0.7\t 9.3\t 12.0\n ");
	getchar();
	
}