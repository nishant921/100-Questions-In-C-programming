// Q12 — First Duplicate

// Input: Enter array: 4 7 2 5 7 2 9

// Output: First duplicate: 7

// Here, 7 is encountered as a duplicate before 2.

#include <stdio.h>

int main()
{
    int arr[] = {2,4,7, 7, 2, 5, 7, 2, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int found=0;

    for (int i = 1; i < len && (!found); i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(arr[i]==arr[j]){
                printf("First duplicate: %d\n",arr[i]);
                found = 1;
                break; 
            }
        }
    }
     if (!found)
        printf("No duplicate found\n");
    
    return 0;

}