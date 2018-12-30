#include <stdio.h>
#define SIZE 6
    void statLues(int tab5[SIZE] , char tabD[SIZE][15]);
    //Demande à l'utilisateur de rentrer la stat pour chaque caractéristique

void main(void) { //Affiche les caratéristiques ainsi que ses stats 
    int statValue[SIZE];
    char statDesc[SIZE][15]= {"force","dexterite","constitution","intelligence","sagesse","charisme"};
    statLues(statValue,statDesc);

    for (int i = 0; i < SIZE; i++) {
        printf("%s : %d\n",statDesc[i],statValue[i]);
    }
    getchar();
}
void statLues(int tab5[SIZE] , char tabD[SIZE][15]) {
    for (int i = 0; i < SIZE; i++) {
        printf("%s",tabD[i]);
        scanf("%d", &tab5[i]);
        getchar();
    }
}