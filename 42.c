// 92. Sum of digits using recursion.


#include <stdio.h>

int digitSum(int num){

    if (num==0) return 0;
    return num%10 + digitSum(num/10);

}

int main(){

    printf("%d",digitSum(12));

    return 0;
}