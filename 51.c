// 128. Print array elements in reverse order without modifying the array.

#include<stdio.h>

void reversePrint(int arr[],int len){
        for (int i = 0; i < len; i++)
        {
            printf("%d ",arr[len-i-1]);
        }
}

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);

    reversePrint(arr,len);


    return 0;
}