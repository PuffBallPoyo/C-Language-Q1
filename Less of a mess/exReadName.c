#include <stdio.h>
#include <string.h>
#include <stdbool.h>
     void readName(char name[]);

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