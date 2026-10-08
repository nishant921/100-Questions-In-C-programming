// 93. Reverse a number using recursion.

#include <stdio.h>

int reverse(long long num, long long rev){

    if (num == 0) return rev;

    rev = (rev*10) + num%10;
    
    return reverse(num/10,rev);

}

int main(){

    printf("%d\n",reverse(1234567,0));

    return 0;
}