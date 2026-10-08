// Find first digit of a number.

#include <stdio.h>

int firstDigit(int n){
    int first;

    while (n!=0){
        first = n%10;
        n/=10; 
    }
    
    return first;
}

int main(){

    int num;
    printf("Enter Numbe: ");
    scanf("%d",&num);

    printf("Number: %d\n",num);

    printf("First Digit: %d\n",firstDigit(num));

    return 0;

}