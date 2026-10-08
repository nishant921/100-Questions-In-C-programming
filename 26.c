// 67. Check whether a number is Armstrong.

// Example:

// 153 = 1³ + 5³ + 3³ 
// 0 is an Armstrong number, but negative numbers are generally not considered Armstrong numbers in the standard definition.

#include<stdio.h>

int power(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

void armstrong(int num){

    if (num<0) {
        printf("negative numbers are generally not considered Armstrong numbers in the standard definition.");
        return;
    }

    if (num==0) {
        printf("Armstrong Number!");
        return;
    }

    int temp = num;
    int count = 0;
    int sum = 0;
    while (temp!=0){
        temp/=10;
        count++;
    }
    
    temp = num;
    while (temp!=0)
    {
        int digit = temp%10;
        sum += pow(digit,count);
        temp/=10;
    }

    if (sum == num){
        printf("%d is an Armstrong Number!",num);
    }
    else{
        printf("%d is not an Armstrong Number!",num);
    }
}

int main(){
    armstrong(153);
    return 0;
}