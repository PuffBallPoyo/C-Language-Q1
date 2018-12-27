#include <stdio.h>

void main(void) {
    int x;
    int y;
    int som;

    printf("Entrez 2 nombres ainsi que leur somme\n");
    scanf("%d %d %d", &x, &y, &som);
    getchar();

    if (x + y == som) {
        printf("Correct\n");
        getchar();
    } else {
        printf("Incorrect, vous auriez du repondre %d \n", x + y);
        getchar();
    }
}