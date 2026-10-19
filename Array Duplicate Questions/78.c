// Q4 — Print All Duplicates Once

// Input: Enter array: 2 5 2 7 5 2 9 7

// Output: Duplicates: 2 5 7
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {2, 5, 2, 7, 5, 2, 9, 7};
    int len = sizeof(arr) / sizeof(arr[0]);

    int *ptr = calloc(len, sizeof(int));

    for (int i = 0; i < len; i++)
    {
        int freq = 1;
        if (ptr[i] == 1)
            continue;
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                ptr[j] = 1;
                freq++;
            }
        }
        if(freq>1){
            printf("%d ", arr[i]);
        }
    }

    return 0;
}