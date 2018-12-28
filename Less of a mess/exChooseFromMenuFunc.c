#include <stdio.h>
#include <string.h>
#include <stdbool.h>
    
    void showMenu();
    int chosenOption();


void main(void) {
    int choice;
    showMenu();
    choice = chosenOption();

    if (choice == 1) printf("Create character?\n");
    else if (choice == 2) printf("Modify stats?\n");
    else if (choice == 3) printf("Modify skills?\n");
    else if (choice == 4) printf("Delete character?");
    else printf("Not a valid choice\n");
    
}

void showMenu(){
    printf("1. Create \n2. Modify stats \n3. Modify skills\n4. Delete\n");
}
int chosenOption(){
    int choice;
    printf("Your choice : ");
    scanf("%d",&choice);
    return choice;
}