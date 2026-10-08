// 66. Check whether a number is perfect.

// Example: sum of factors excluding itself = num

// 6 = 1 + 2 + 3

#include<stdio.h>

void isPerfect(int num){
    int factorsSum = 0;

    if (num<=0){
        printf("Not a perfect number.");
        return;
    }
    
    for (int i = 1; i<num;i++){

        if (num%i==0){
            factorsSum+=i;
        }
    }
    if (factorsSum==num) printf("Perfect Number.");
    else printf("Not a Perfect Number.");
    
}

int main(){
    isPerfect(0);
}