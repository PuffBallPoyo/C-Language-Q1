#include <stdio.h>
#include <string.h>
#include <stdbool.h>

    void showDamage(double damage, double modifier);
    //Affiche le produit des dégats et de son modificateur sans renvoie à la fonction main
    double showDamageToMain(double damage, double modifier);
    //Calcule le produit des dégats et de son modificateur et les renvoie à la fonction main

void main(void) {
    showDamage(100.0,0.5);
    printf("Damage with modifier : %.1f\n",showDamageToMain(1000.0,0.5));
}
void showDamage(double damage, double modifier){
    printf("Damage with modifier : %.1f\n",damage*modifier);
}
double showDamageToMain(double damage, double modifier){
    return damage*modifier;
}
