// 134. Find the sum of all elements except the maximum.

#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    int largest = arr[0];

    for(int i=0;i<len;i++){
        sum+=arr[i];
        if (arr[i]>largest) largest = arr[i];
    }
    sum-=largest;
    printf("Sum : %d",sum);
    
    return 0;
}