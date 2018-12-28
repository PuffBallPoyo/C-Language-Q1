#include <stdio.h>
#include <string.h>
#include <stdbool.h>
    double pow16(double p16);

void main(void) {
    double mainPow16 ;
    double nbPow16;
    printf("Enter a number with a power of 16 : ");
    scanf("%lf",&nbPow16);
    mainPow16 = pow16(nbPow16);
    printf("This number's power(16) is : %.0f\n",mainPow16);
    printf("Thus : 16 ** %.0f = %.4f",mainPow16,nbPow16);
}
double pow16(double p16){;
    if (p16 < 16){
        int pow16 = 1;
        while(p16 != 16){
            p16 *= 16;
            pow16--;
        }
        return pow16;
    }
    else if (p16 > 16){
        int pow16 = 1;
        while(p16 != 16){
            p16 /= 16;
            pow16++;
        }
        return pow16;
    }
    else if (p16 == 16) return 1;
    else if (p16 == 1) return 0;
}