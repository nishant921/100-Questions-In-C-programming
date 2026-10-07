// Count the digit of a numbers.
// Example = 15625  -> 5

#include <stdio.h>

int countDigit(int num){
    if (num==0) return 1;
    int count = 0;
    int temp = num;
    while (temp!=0){
        temp=temp/10;
        count++;
    }
    return count;
}

int main(){
    int num;
    printf("Enter a Number: ");
    scanf("%d",&num);

    printf("Number: %d\n",num);
    printf("Total Number of digits: %d\n",countDigit(num));

    return 0;

}