#include <stdio.h>
#include <string.h>
#include <stdbool.h>
    char charRead();//Lit un caractère
    int sizeRead();//Lit une taille en nombre entier
    void printSquare(char dupe, int size);//Afficher un carré avec des motifs "dupe" et une taille "size" 

void main(void) {
    char dupe = charRead();
    int size = sizeRead();
    printSquare(dupe,size);
}
char charRead(){
    char dupe;
    printf("Type de char you want to replicate : ");
    scanf("%c",&dupe);
    return dupe;
}
int sizeRead(){
    int size;
    do {
        printf("Type the size you want your square(higher than 2) to be : " );
        scanf("%d",&size);
    } while(size < 2);
    return size;
}
void printSquare(char dupe, int size){
    for(int i = 0; i<size ; i++){
    for(int i = 0; i<size ; i++) printf("%c",dupe);
    printf("\n");
    }
    printf("Here's your square :D");
}