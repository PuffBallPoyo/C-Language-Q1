#include <stdio.h>
#define SIZE 9
#define nbJURY 5

void main(void) {
	char classe = 'M';
	char adresseMail[25] = "allo@allo.allo";
	char groupes[6] = {'A','B','C','D','E','F'};
	int tablesJDR[SIZE] = {1,2,3,4,5,6,7,8,9};
	double points[nbJURY] = {0};
	char libellesJours [7][9] = {"lundi","mardi","mercredi","jeudi","vendredi","samedi","dimanche"};
	int i= 0;
	int jurys;
	
	classe = 'G';
	strcpy(adresseMail, "iesnEtud1234@henallux.be");
	printf("%s \n",adresseMail);
	
	//méthode while
	while (i<SIZE){
		tablesJDR[i]= tablesJDR[i]*10;
		printf("%d ",tablesJDR[i]);
		i++;
	}
	//méthode for
	for (i=0; i<SIZE;i++) printf("%d ",tablesJDR[i]);
	printf("\n");
	
	for (jurys=0; jurys<nbJURY; jurys++){
		printf("Entrez des points \n");
		scanf("%lf ", &points[jurys]);
	}
	
	
	
}