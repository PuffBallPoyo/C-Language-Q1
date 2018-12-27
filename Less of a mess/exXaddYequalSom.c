#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*Écrivez un programme qui lit 3 nombres entiers : x, y et som.
Ce programme affiche "Correct !" si som est bien la somme de x et y ; sinon, un message
d'erreur contenant la bonne solution…
*/

void main(void) {
    int x;
    int y;
    int som;

    printf("Donne deux nombres et leur somme\n");
    scanf("%d%d%d",&x,&y,&som);
    getchar();
    if(x == 1 && y == 1 && som == 2 ) {
        printf("Bravo tu sais faire 1+1\n");
    }
    else{
        if (x+y == som) {
            printf("ssbon\n");
            getchar();
      }
        else {
            printf("tu sais pas calculer ou quoi\n");
            getchar();
        }
}
}