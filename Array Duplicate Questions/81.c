// Q16 — Remove Duplicates

// Input:/ Enter array: 2 5 2 7 5 9 7

// Output: Array after removing duplicates: 2 5 7 9

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] = {2, 4, 7, 7, 2, 5, 7, 2, 9};
    int len = sizeof(arr) / sizeof(arr[0]);

    int *res = malloc(len* sizeof(int));
    int index = 0;
    for (int i = 0; i < len; i++)
        printf("%d ", arr[i]);

    for (int i = 0; i < len; i++)
    {
        int found = 0;
        for (int j = 0; j < index; j++)
        {
            if (arr[i] == res[j])
            {
                found = 1;
                break;
            }
        }
        if (!found)
            res[index++] = arr[i];
    }
    printf("\n");
    for (int i = 0; i < index; i++)
        printf("%d ", res[i]);
    return 0;
}