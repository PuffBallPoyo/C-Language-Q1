#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void main(void) {
    int op1; //1ere opérande
    int op2; //2eme opérande
    char op; //operateur
    int res;

    printf("Tape l'operateur\n");
    scanf("%c",&op);
    printf("Tape les operandes\n");
    scanf("%d%d",&op1,&op2);

    switch(op)
    {
        case '+' :  res=op1+op2;
                    printf("%d %c %d = %d",op1,op,op2,res);
                    break;
        case '-' :  res=op1-op2;
                    printf("%d %c %d = %d",op1,op,op2,res);
                    break;
        case '*' :  res=op1*op2;
                    printf("%d %c %d = %d",op1,op,op2,res);
                    break;
        case '/' :  if(op2 == 0){
                    printf("On peut nein diviser par 0\n");
                    }
                    else{
                    res=op1/op2;
                    printf("%d %c %d = %d",op1,op,op2,res);
                    }
                    break;
        default :   printf("C'est pas un operateur");
                    
    }
}