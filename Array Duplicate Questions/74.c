// Q1 — Does Duplicate Exist?

// Input: array: 2 5 7 2 9
// Output: Duplicate exists

#include<stdio.h>

int main(){

    int arr[] = {2,5,7,9,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
    int duplicate = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(arr[i]==arr[j]){
                duplicate = 1;
                break;
            }
        }
        if (duplicate) break;
    }
    if (duplicate){
        printf("Duplicate exists");
    }
    else printf("Duplicate Not exists");
   return 0;
}
