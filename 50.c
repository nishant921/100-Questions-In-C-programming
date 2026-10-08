// 127. Copy one array into another.

#include <stdio.h>

void copy(int copiedto[], int source[], int len ){
    for (int i = 0; i < len; i++)
    {
        copiedto[i] = source[i];
    }
}

int main(){

    int arr[] = {1,2,3,4,5,6};
    int arr2[20];
    int arrlen = sizeof(arr)/sizeof(arr[0]);


    copy(arr2,arr,arrlen);
    for (int i = 0; i < arrlen; i++)
    {
        printf("%d",arr2[i]);
    }
    
    return 0;
    
}