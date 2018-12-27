#include <stdio.h>
#define SIZE 6

void statLues(int tab5[SIZE] , char tabD[SIZE][10]);

void main(void) {
    int statValue[SIZE];
    char statDesc[SIZE][10]= {"force","dexterite","constitution","intelligence","sagesse","charisme"};
    statLues(statValue,statDesc);

    for (int i = 0; i < SIZE; i++) {
        printf("Stat %s %d",statDesc[i],statValue[i]);
    }
    getchar();
}

void statLues(int tab5[SIZE] , char tabD[SIZE][10]) {
    for (int i = 0; i < SIZE; i++) {
        printf("Stats:",tabD[i]);
        scanf("%d", &tab5[i]);
        getchar();
    }
}