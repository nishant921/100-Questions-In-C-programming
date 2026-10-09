// 135. Find the difference between maximum and minimum.

#include<stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int max = arr[0];
    int min = arr[0];
    int len = sizeof(arr)/sizeof(arr[0]);

    for (int i=1;i<len;i++){
        if (arr[i]>max) max=arr[i];
        if (arr[i]<min) min=arr[i];
    }
    printf("The Difference between maximum and minimum: %d",max-min);


    return 0;
}
