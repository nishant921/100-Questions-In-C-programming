// find the product of the digits.
// Example : 12345 = 120

#include<stdio.h>

int prodDigit(int n){
    int temp = n;
    int prod = 1;
    while(temp!=0){
        prod = prod* (temp%10);
        temp = temp/10;
    }
    if (n==0) return 0;
    return prod;
}

int main(){

    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    printf("The product of %d each digit: %d",num,prodDigit(num));
    
    return 0;
}