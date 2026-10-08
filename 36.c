// 86. Factorial using recursion.

#include <stdio.h>

int factorial(int num){
    if (num<0){
        printf("Negative Numbers doesn't have Factorial.");
        return 0;
    }

    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num*factorial(num-1);
    
}

int main(){

    printf("%d\n",factorial(1));
    printf("%d\n",factorial(0));
    printf("%d\n",factorial(12));
    printf("%d\n",factorial(7));

    printf("%d\n",factorial(-6));

    return 0;
}