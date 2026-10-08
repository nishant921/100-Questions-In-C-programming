// find the  greatest/largest digit in a number.

#include <stdio.h>

int largeDigit(int n){
    int largest = n%10;

    while(n!=0){
        int digit = n%10;
        n/=10;
        if (largest<digit) largest = digit;
    }
    return largest;
}


int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    printf("The greatest digit : %d\n",largeDigit(num));

    return 0;
}