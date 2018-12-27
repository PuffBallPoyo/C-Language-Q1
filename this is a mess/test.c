#include<stdio.h>

char signeProduit(double a, double b) {
	double prod = a * b;
	char signe;
	if (prod > 0) {
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
void main(void) {
	printf("%c\n", signeProduit(2, -1));
}