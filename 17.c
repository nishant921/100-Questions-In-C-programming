// Find the last digit of a number

#include  <stdio.h>

int lastDigit(int n){
    return n%10;
}

int main(){

    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    printf("Number: %d\n",num);
    printf("Last Digit: %d\n",lastDigit(num));

    return 0;
}