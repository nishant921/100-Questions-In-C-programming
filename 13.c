// Reverse a number.
// Example : 5465 -> 5645

#include <stdio.h>

int rev(int n){
    int temp = n;
    int reverse = 0;

    while (temp!=0)
    {
        int digit = temp %10;
        temp = temp/10;
        reverse = (reverse*10) + digit;
    }

    return reverse;

}

int main(){

    int num;
    printf("Enter Number : ");
    scanf("%d",&num);

    printf("Original Number : %d",num);
    printf("Reverse Number : %d",rev(num));

    return 0;
}