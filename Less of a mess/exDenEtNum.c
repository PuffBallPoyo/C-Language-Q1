#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*Écrivez un programme qui, après avoir obtenu deux entiers, numérateur et
dénominateur d'une fraction, calcule sa valeur via une division réelle, puis via une
division entière, et enfin affiche 
• les deux entiers sous la forme d'une fraction,
• le premier résultat sous la forme d'un réel (4 décimales affichées) et
• le deuxième résultat.*/

void main(void) {
    double den;
    double num;
    double res;

    printf("donne le num et le den\n");
    scanf("%lf%lf",&num,&den);

    res=num/den;

    printf("Numerateur:%.0f\nDenominateur:%.0f\n",num,den);
    printf("%.0f/%.0f = %.4f = %.0f",num,den,res,res);
}
// Exercice fait au cours de LP ex
/*void main(void) {
	int num;
	int denom;
	int res1;
	double res2;
	
	printf("Entrez le numerateur puis le denominateur\n");
	scanf("%d %d",&num,&denom);
	getchar();
	if(denom==0){
		printf("nope");
		getchar();
	}
	else {
	res1 = num/denom;
	res2 = (double)num/denom;
	printf("Numerateur = %d \nDenominateur = %d\n %d/%d = %.4lf = %d",num,denom,num,denom,res2,res1);
	getchar();
}*/