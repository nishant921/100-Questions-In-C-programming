// 81. Function to calculate power:

// power(2,5) → 32

#include <stdio.h>

// Integer Power 
double power(int base, int exponent){

    if (base==0 && exponent<0) {
        printf("Undefined: division by zero.\n");
        return 0;
    }
    
    double pow = 1;
    if (exponent<0){
        exponent = -exponent;

        for (int i = 1; i <= exponent; i++)
        {
            pow*=base;
        }
        return 1/pow;

    }
    for (int i = 1;i<=exponent;i++){
        pow*=base;
    }

    return pow;
}

int main(){

   printf("%f",power(0,-1));

   return 0;

}
