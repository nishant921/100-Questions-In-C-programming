// 131. Find the second largest element.

// Example:

// 10 5 20 8 15

// Answer: 15

// 132. Find the second smallest element.

#include<stdio.h>
#include<limits.h>

int second_largest(int* arr,int len){
    int largest = arr[0];
    int second = INT_MIN;
    
    for (int i = 1; i < len; i++)
    {
        if (largest<arr[i]){
            second =  largest;
            largest = arr[i];
        }else if (second<arr[i] && arr[i]!=largest) second = arr[i];
    }
    return  second; 
}

int second_smallest(int *arr, int len){
    int smallest = arr[0];
    int second = INT_MAX;
    for (int i = 1; i < len; i++)
    {
     if (smallest>arr[i]){
        second = smallest;
        smallest = arr[i];
     }else if (second>arr[i] && arr[i]!=smallest) second = arr[i];
    }
    return second;
    
}


int main(){

    int arr[] =  {1, 1, 2, 3, 4};;
    int len = sizeof(arr)/sizeof(arr[0]);

    int sec_large = second_largest(arr,len);
    printf("%d\n",sec_large);

    int sec_small = second_smallest(arr,len);
    printf("%d\n",sec_small);
    
 
}