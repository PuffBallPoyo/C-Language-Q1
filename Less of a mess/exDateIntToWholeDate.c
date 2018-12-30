#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define mois 12

char *libelleMois(char libMois[mois][10], int date);
//Renvoie à la fonction principale une chaîne de caractères en fonction de la date communiqué en entrée de fonction

void main(){
    char libMois [][10] = {"janvier","fevrier","mars","avril","mai",
                            "juin","juillet","aout","septembre",
                            "octobre","novembre","decembre"};
    int date;
    
    printf("Tape le date en format JJMMAAAA : ");
    scanf("%d",&date);
    printf("%d %s %d",date/1000000,libelleMois(libMois,date),date%10000); //(Jours,Mois,Année)
    
}
char *libelleMois(char libMois[mois][10], int date){ 
    date = (date/10000)%100; //Transforme la date JJMMAAAA en MM
    if (date >= 1 && date <= 12) return libMois[date-1];
    else printf("Ce n'est pas un mois !");
}
