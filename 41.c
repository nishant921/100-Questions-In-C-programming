// 91. Find power using recursion.

#include <stdio.h>

int power(int base, int exp){
    if (base == 0 && exp<0){
        printf("Divide by zero is undefined.");
        return 0;
    }

    if (exp == 0) return 1;

    return base*power(base,exp-1);

}

int main(){

    printf("%d\n",power(0,0));

    return 0;
}