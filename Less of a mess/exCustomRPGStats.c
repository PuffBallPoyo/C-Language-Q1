#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define size 6
    void caracteristiquesLues(char tabCarac[][15]);
    void statLues(int tabStats[] , char tabCarac[][15]);
    void afficheStats(int tabStats[size] , char tabCarac[size][15]);

void main(void) {
    int tabStats[size];
    char tabCarac[size][15];
    caracteristiquesLues(tabCarac);
    statLues(tabStats,tabCarac);
    afficheStats(tabStats,tabCarac);
}
void caracteristiquesLues(char tabCarac[][15]){
    for (int i = 0; i < size ; i++){
        printf("Libelle de la caracteristique no. %d : ",i+1);
        gets(tabCarac[i]);
    }

}
void statLues(int tabStats[size] , char tabCarac[size][15]) {
    for (int i = 0; i < size ; i++) {
        printf("Combien avez-vous de %s? ",tabCarac[i]);
        scanf("%d", &tabStats[i]);
        getchar();
    }
}
void afficheStats(int tabStats[size] , char tabCarac[size][15]) {
    for (int i = 0; i < size ; i++) printf("%s : %d\n",tabCarac[i],tabStats[i]);
}