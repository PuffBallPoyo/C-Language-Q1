#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/*Écrivez un programme qui lit un caractère correspondant à l’addition ('+'), la soustraction ('-'),
la multiplication ('*') ou la division ('/') ainsi que deux nombres entiers. Votre programme
affichera l'opération sous la forme : <opérande1> <operateur> <opérande2> = <résultat>.*/

void main(void) {
    int op1; //1ere opérande
    int op2; //2eme opérande
    char op; //operateur
    int res;

    printf("Tape l'operateur\n");
    scanf("%c",&op);
    printf("Tape les operandes\n");
    scanf("%d%d",&op1,&op2);

    if (op == '+'){
        res=op1+op2;
        printf("%d %c %d = %d",op1,op,op2,res);
    }
    else if (op == '-'){
        res=op1-op2;
        printf("%d %c %d = %d",op1,op,op2,res);
    }
    else if (op == '*'){
        res=op1*op2;
        printf("%d %c %d = %d",op1,op,op2,res);
    }
    else if (op == '/'){
        if(op2 == 0){
            printf("On peut nein diviser par 0\n");
        }
        else{
        res=op1*op2;
        printf("%d %c %d = %d",op1,op,op2,res);
        }
    }
    else printf("ce n'est pas un operateur\n");
}