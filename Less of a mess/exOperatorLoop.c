#include <stdio.h>
#include <string.h>
#include <stdbool.h>
    /*Ce programme demande à l'utilisateur d'entrer un operateur arithmétique, tant qu'il n'a pas entré cet opérateur,
    le programme ne se ferme pas*/

void main(void) {
    char arh;

    printf("Entrez un operateur arithmetique \n");
    scanf("%c", &arh);

    while ((arh != '/') && (arh != '*') && (arh != '+') && (arh != '-')) {
        printf("Entrez un operateur arithmetique \n");
        getchar();
        scanf("%c", &arh);
    }

    /*do {
    printf("Entrez un operateur arithmetique \n");
    scanf("%c",&arh);
    getchar();
    } while ((arh != '/') && (arh != '*' ) && (arh != '+' ) && (arh != '-'));
    */

/*do {
printf("Entrez un operateur arithmetique \n");
scanf("%c",&arh);
getchar();
if ((arh != '/') && (arh != '*' ) && (arh != '+' ) && (arh != '-')) {
        printf ("Opérateur incorrect, veuillez recommencer\n");
}
} while ((arh != '/') && (arh != '*' ) && (arh != '+' ) && (arh != '-'));
*/
}