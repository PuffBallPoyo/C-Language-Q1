#include<stdio.h>

	void afficherMenu(void);
	int optionChoisie();
	void afficherDegats(int a,double b);
	double degatsEffectifs(int a, double b);
	int mois(int date);
	char signeProduit(a,b);
void main (void){
		int choix;
		double deg;
		int date;

		
		afficherMenu();
		printf("Votre option?\n");
		choix = optionChoisie();
		printf("Votre choix : %d\n",choix);
		
		afficherDegats(100,0.1);
		deg = degatsEffectifs(100,0.5);
		printf("Degats effectifs avec modificateur 0.5 : %.2f\n",deg);
		
		date = mois(19001220);
		printf("La date du mois %d\n",date);
		
		printf("%c\n",signeProduit(2,-1));
		
		getchar();
	}
	
void afficherMenu(void) {
		printf("1. Créer un personnage \n2. Modifier les statistiques d'un personnage \n3. Modifier les compétences d'un personnage\n4. Supprimer un personnage\n");
	}
int optionChoisie(){
		int choix;
		scanf("%d",&choix);
		return choix;
	}
void afficherDegats(int a,double b) {
	printf("Degats effectifs avec modificateur 0.1 : %.2f\n",a*b);
}
double degatsEffectifs(int a,double b) {
	return a*b;
}
int mois(int date){
	/*date/=100;
	int date2=date;
	date/=100;
	date*=100;
	return date2-date;*/
	return (date/100)%100;
}
char signeProduit(double a,double b){
	double prod = a*b;
	char signe;
	if (prod > 0){
		signe = '+';
	}
	else if (prod < 0) {
		signe = '-';
	}
	else {
		signe = '=';
	}
	return signe;
}
