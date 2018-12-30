#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*Étant donnée une température exprimée en Fahrenheit, imprimez-la en Celsius
(5/9 * (fahr – 32)). */

void main(void) {
    double fahr;
    double cel;

    printf("Donne la temperature en fahrenheit\n");
    scanf("%lf",&fahr);

    cel=(5.0/9.0*(fahr-32));
    //trés important de mettre 5.0 et 9.0 sinon l'interpreteur ne comprend rien!!!
    printf("Temperature : %.2f (fahr) = %.2f (celsius)",fahr,cel);


}