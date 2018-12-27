#include<stdio.h>

void main(void){
	char dest;
	
	printf("Entrez la destination A ou B\n");
	scanf("%c",&dest);
	getchar();
	
	if (dest == 'A') {
		printf("Colis simple\n");
		printf("Appuyez sur ENTER pour continuer...\n");
		getchar();
	}
	else	{
		printf("Colis renforce\n");
		printf("Appuyez sur ENTER pour continuer...\n");
		getchar();
	}
		
}