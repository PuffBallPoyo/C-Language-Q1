#include <stdio.h>
#include <string.h>

    void nomLu (char n[]);

void main(void) {
    char nom[30];
    nomLu(nom);
    printf("Bonjour %s",nom);
    getchar();
}

void nomLu (char n[]){
    printf("dis-moi\n");
    gets(n);
}