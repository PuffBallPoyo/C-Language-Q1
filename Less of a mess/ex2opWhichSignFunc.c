#include <stdio.h>
#include <string.h>
#include <stdbool.h>
    
    char productSign(double op1, double op2); //Returns a sign depending on the result given by the product of 2 numbers

void main(void) {
    char op = productSign (10,-2);
    if (op == '+') printf("Positive");
    else if (op == '-') printf("Negative");
    else if (op == '=') printf ("The product is equal to zero");
    else ("is this");
}
char productSign(double op1, double op2){
    if(op1 == 0 || op2 == 0) return '0';
    else if (op1 < 0 || op2 < 0  ) return '-';
    else if (op1 > 0 || op2 > 0) return '+';
    else printf("wut");
}
