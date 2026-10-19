// Write a program for an array that prints the elements which appear more than once. Each repeated element should be printed only once, in order of first appearance. Don’t take any input. (4M)
// Test case: {4,2,4,7,2,9,7,1} → 4 2 7

#include <stdio.h>

int main(){
    int arr[]={4,2,4,7,2,9,7,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        int found = 0;
        for (int j = 0; j < i; j++)
        {
            if(arr[i]==arr[j]){ 
                found=1;
                break;
            }
        }
        if(found)continue;
        
        int freq=1;
        for (int k = i+1; k < len; k++)
        {
            if(arr[i]==arr[k]){ 
                    freq++;
                }
        }
        if(freq>1)printf("%d ",arr[i]);
    }

    return 0;
    

}