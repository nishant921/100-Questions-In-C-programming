// 133. Find the largest and smallest element in a single traversal.

#include<stdio.h>

int main(){
    int arr [] = {2,3,34,31,1,23,4,4,33,99};
    int len = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];
    int smallest = arr[0];

    for (int i=1; i<len;i++){
        if (arr[i]>largest) largest = arr[i];
        if (arr[i]<smallest) smallest = arr[i];
    }

    printf("largest: %d\n",largest);
    printf("smallest: %d\n",smallest);

    return 0;
}