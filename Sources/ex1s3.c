#include<stdio.h>

void main (void) {
	/*meme principe pour 3 premiers enoncés
	for (int i = 2; i <= 20; i= i+2) printf("%d ",i);
	getchar();*/
	
	/*exercice avec char
	for (char c = 'a'; c <= 'o'; c= c+2) printf("%c ",c);
	getchar();*/
	
	//enoncé avec intervalles
	int a=3;
	int b=14;
	for (a= 3; a <= 11;) {
		printf("%d,%d\n",a,b);
		a+=2;
		b-=3;
	}
}