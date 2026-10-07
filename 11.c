// find the sum of digits.
// example:n 12345 -> 15

#include <stdio.h>

int digitSum(int n){
    int temp = n;
    int total = 0;
    while(temp!=0){
       int digit = temp%10;
       total +=digit;
       temp = temp/10;
    }
    return total;
}

int main(){

    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    printf("The sum of %d digits : %d",num,digitSum(num));

    return 0;
}