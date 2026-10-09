// 129. Swap first and last elements.

#include <stdio.h>

int main(){

    int arr[] = {1,2,3,4,5,6};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    int temp = arr[0];
    arr[0] = arr[len-1];
    arr[len-1] = temp;

    for (int i = 0; i < len; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}