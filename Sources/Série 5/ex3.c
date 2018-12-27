#include <stdio.h>
#include <string.h>
#define SIZE 3
    
    void tempsLu(int temps []);
    void afficherTemps(int temps [SIZE]);

void main(void) {
    int temps[SIZE];
    tempsLu(temps);
    afficherTemps(temps);
    getchar();
}

void tempsLu(int temps [SIZE]){
    for(int i = 0 ; i < SIZE; i++){
    printf("donne ces temps\n");
    scanf("%d",temps[i]);
    getchar();
    }
}
void afficherTemps(int temps [SIZE]){
    for(int i = 0 ; i < SIZE; i++){
        printf("Le temps est %d",temps [i]);
    }
}