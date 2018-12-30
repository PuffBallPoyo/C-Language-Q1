#include <stdio.h>
#include <string.h>
#include <stdbool.h>
     void readName(char name[]);
     //Lit un nom tapé par l'utilisateur et le renvoie à la fonction main sous forme de chaîne de caractère

void main(void) {
    char name[30];
    readName(name);
    printf("Welcome %s !",name);
    getchar();
}
void readName(char name[]){
    printf("Who are you ?\n");
    gets(name);
}