#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define size 3
    void tempsLu(int tempsTab[size]);
    /*a pour but d’obtenir et de garnir un tableau avec les 120 temps (MMSS en entier).
    Elle doit fournir le tableau garni au programme appelant.*/
    void afficherTemps(int tempsTab[size]);
    /* a pour but d’afficher les temps des 120 participants repris dans le tableau
    en entrée de la fonction sous le format suivant :
    No 1 : 45 minutes et 12 secondes */  
    int tempsRecord(int tempsTab[size]);
    /*a pour but à partir du tableau des temps reçu en entrée de la fonction, de
    déterminer et de retourner au programme appelant le meilleur temps.*/
    
void main(void) {
    int tempsMain[size];
    int record;
    tempsLu(tempsMain);
    afficherTemps(tempsMain);
    record = tempsRecord(tempsMain);
    printf("Le record est de %d minutes et %d secondes !",record/100,record%100);
}
void tempsLu(int tempsTab[size]){
    for(int i = 0 ; i<size ; i++){
        printf("Donne le temps (Format MMSS) du joueur numero %d : ",i+1);
        scanf("%d",&tempsTab[i]);
        getchar();
    }
}
void afficherTemps(int tempsTab[size]){
    for (int i = 0 ; i<size ; i++) printf("No. %d : %d minutes et %d secondes\n",i+1,tempsTab[i]/100,tempsTab[i]%100);
}
int tempsRecord(int tempsTab[size]){
    int record = tempsTab[0];
    for (int i = 1 ; i<size ; i++){
        if (tempsTab[i] < record){
            record = tempsTab[i];
        }
    }
    return record;
}