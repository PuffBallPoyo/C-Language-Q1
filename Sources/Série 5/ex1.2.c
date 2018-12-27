#include <stdio.h>
#define SIZE 9

void main(void) {
    char classe = 'M';
    char adresseMail[25] = "allo@allo.allo";
    char groupes[6] = {'A', 'B', 'C', 'D', 'E', 'F'};
    int tablesJDR[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    double points[5] = {0};
    char libellesJours[7][9] = {"lundi",    "mardi",  "mercredi", "jeudi",
                                "vendredi", "samedi", "dimanche"};
    double moy;
    for (int i = 0; i < 5; i++) {
        printf("Entrer %d : ", i + 1);
        scanf("%lf", &points[i]);
        getchar();
    }
    for (int i = 0; i < 5; i++) {
        printf("%f\n", points[i]);
        moy += points[i] / 5;
    }
    printf("%f est la moyenne\n", moy);
}