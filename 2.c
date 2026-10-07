// Swap two numbers without using a third variable.

#include <stdio.h>

int main(){

    int fnum, snum;
    printf("Enter Space Separated two Numbers : ");
    scanf("%d %d",&fnum,&snum);

    printf("Before Swapping: first: %d and second: %d\n",fnum,snum);

    // XOR(^) lets you recover one number when you XOR the combined value with the other number.
    // snum = fnum^snum;
    // fnum = snum^fnum;
    // snum = fnum^snum;

    // using mathematics
    snum = fnum+snum;   // second = 10+20 = 30
    fnum = snum-fnum;  // first = second(30)-first(10)= 20
    snum = snum-fnum; //  second = second(30) - first(20) = 10 
    printf("After Swapping: first: %d and second: %d",fnum,snum);


    return 0;
}