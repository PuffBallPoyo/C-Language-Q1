#include <stdio.h>
#include <string.h>

void main(void) {
    char classe = '@';
    char adresseMail[25] = "iesn@henallux.be";
    char iesn[5];

    /*if (classe >= 'a' && classe <= 'z' && classe >= 'A' && classe <= 'Z') {
        printf("Format valide \n");
    } else {
        printf("ouille\n");
    }*/
    
    strncpy(iesn , adresseMail , 4);
    printf("%s\n",iesn);
    if (strcmp (iesn,"iesn") == 0 ) {
        printf("Etudiant de l'iesn\n");
    }
    else{
        printf("Etudiant d'une autre ecole\n");
    }
}