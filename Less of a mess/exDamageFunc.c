#include <stdio.h>
#include <string.h>
#include <stdbool.h>

    double showDamage(double damage, double modifier);
    double showDamageToMain(double damage, double modifier);

void main(void) {
    showDamage(100.0,0.5);
    printf("Damage with modifier : %.1f\n",showDamageToMain(1000.0,0.5));
}
double showDamage(double damage, double modifier){
    printf("Damage with modifier : %.1f\n",damage*modifier);
}
double showDamageToMain(double damage, double modifier){
    return damage*modifier;
}