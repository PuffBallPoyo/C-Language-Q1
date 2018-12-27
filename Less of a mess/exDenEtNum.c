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