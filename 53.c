// 130. Swap adjacent elements.

#include<stdio.h>

void swapAdj(int arr[],int len){

    for (int i = 0; i+1 < len; i+=2)
    {
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main(){

    int rating[] = {1,2,3,4,7};     
    int len = sizeof(rating)/sizeof(rating[0]);

    swapAdj(rating,len);

     for (int i = 0; i < len; i++)
    {
        printf("%d ",rating[i]);
    }

    return 0;
}