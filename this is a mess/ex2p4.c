#include<stdio.h>

void main(void)	{
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
	}
}