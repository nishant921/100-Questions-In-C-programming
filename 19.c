// Count the apperance of a given digit in a given Number.

#include <stdio.h>

int countDigit(int n, int d){
    int count = 0;
    while (n!=0){
        int digit = n%10;
        n/=10;

        if(d==digit) count++; 
    } 
    return count;
}

int main(){
    
    unsigned num;
    printf("Enter Number: ");
    scanf("%d",&num);
    
    int digit;
    printf("Enter digit to count: ");
    scanf("%d",&digit);

    printf("The total occurences of %d : %d\n",digit,countDigit(num,digit));

    return 0;

}