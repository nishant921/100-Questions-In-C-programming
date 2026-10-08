// Print all factors of n

#include<stdio.h>

void factors(int num){

    if(num==0) {printf("Zero has infinite many divisors!"); return;}

    printf("Factors of %d: ",num);
    int n = num < 0 ? -num : num;

    for (int i = 1; i <= n; i++)
    {
        if (n%i==0){
            printf("%d ",i);
            if (num<0 )printf("%d ",-i);
        }
    }
    printf("\n");
}

int main(){

    factors(-10);
    return 0;

}