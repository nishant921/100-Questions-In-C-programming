// Print Armstrong numbers from 1 to 1000.

#include <stdio.h>
int power(int base, int exponent)
{
    int result = 1;

    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

int main(){

    int start = 1;
    int end = 1000;

    for (int i = start; i <= end; i++)
    {

        int temp = i;
        int count = 0;
        int sum = 0;
        while (temp!=0)
        {
            temp/=10;
            count++;
        }

        temp = i;

        while(temp!=0){
            int digits = temp%10;
            sum += power(digits,count);
            temp/=10;
        }

        if (sum==i){
            printf("%d\n",i);
        }
        
    }
    
}