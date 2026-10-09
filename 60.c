// 138. Print all duplicate elements.

#include<stdio.h>

int main(){

    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    
    

    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; j < len; j++)
        {
            if(arr[i]==arr[j]){
                printf("%d ",arr[j]);
                break;
            }
        }       
    }
    

    
    return 0;
}
