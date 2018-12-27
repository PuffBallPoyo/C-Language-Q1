#include<stdio.h>

void main(void)	{
	double celsius;
	double fahr;
	printf("Entrez la temperature en farhenheit \n");
	scanf("%lf",&fahr);
	getchar();
	celsius = fahr-32;
	celsius /= 0.55555;
	printf("Temperature : %.2f (fahr) = %.2f (celsius)",fahr,celsius);
	getchar();
}