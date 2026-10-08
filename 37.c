// 87. Sum of first n natural numbers using recursion.

#include <stdio.h>

int naturalSum(int num){
    if (num<0){
        printf("Enter Positive Integer.\n");
        return 0;
    }

    if (num==0) return 0;
    return num + naturalSum(num-1);
}

int main(){

    printf("%d\n",naturalSum(100));
    printf("%d\n",naturalSum(0));
    printf("%d\n",naturalSum(15));
    printf("%d\n",naturalSum(1000));
    return 0;
}