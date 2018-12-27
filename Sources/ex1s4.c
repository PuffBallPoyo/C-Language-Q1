#include<stdio.h>

	void afficherMessageAccueil(void);
	void afficherTriangle(int nb);
	void afficherlettreGroupe(char lettre);
	double sommeDeuxReels(a,b);
	
void main(void){
	double som;
	afficherlettreGroupe('a');
	afficherMessageAccueil();
	afficherTriangle(3);
	som = sommeDeuxReels(10,2);
	printf("%f",som);
	getchar();
}

void afficherMessageAccueil(void){
	printf("Bienvenu\n");
}
void afficherTriangle(int nb) {
	printf("Triangle %d\n",nb);
}
void afficherlettreGroupe(char lettre){
	printf("%c\n",lettre);
}
double sommeDeuxReels(a,b){
	return a+b;
}
