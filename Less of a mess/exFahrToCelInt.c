#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*Étant donnée une température exprimée en Fahrenheit, imprimez-la en Celsius
(5/9 * (fahr – 32)). */

void main(void) {
    int fahr;

    printf("Donne la temperature en fahrenheit\n");
    scanf("%d",&fahr);
    printf("Temperature : %d (fahr) = %.2f (celsius)",fahr,5.0/9.0*(fahr-32));

}