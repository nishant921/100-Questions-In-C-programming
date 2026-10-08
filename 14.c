// Check whether a number is palindrome or not.
// :Number which is same from either side is palindrome number.
// Example: 121 - palindrome
// Example: 123 - not a palindrome

#include <stdio.h>

void palindrome(int n){
    if (n<0) printf("Negative Number is not palindrome in standard definitions.");
    
    int temp = n;
    long long rev = 0;

    while(temp!=0){
        rev = (rev * 10) + (temp%10);
        temp /=10;
    }
    if (rev==n) printf("%d is a Palindrome Number.",n);
    else printf("%d is not a Palindrome Number.",n);
}

int main(){


    int num;
    printf("Enter Number: ");
    scanf("%d",&num);

    palindrome(num);

    return 0;
}