// Find the sum of factors.

#include <stdio.h>

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
}


int sumFactor(int num){
    if (num == 0) {printf("Enter Positive or Negative Intergers:"); return 0;}

    int n = num<0? -num: num;

    int sum = 0;

    for (int i=1; i<=n;i++){
        if (n%i==0){
            sum+=i;
            if(num<0){
                sum+=-i;
            }
        }
    }

    return sum;

}

int main(){

    factors(-10);

    printf("THE sum: %d",sumFactor(-10));


    return 0;
}