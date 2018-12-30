#include <stdio.h>
#include <string.h>
#include <stdbool.h>
    int month(int date);// Returns the month to the main function

void main(void) {
    printf("The month is : %d",month(20000624)); //date in AAAAMMJJ
}
int month(int date){ 
    return (date/100)%100;
}