// Q2 — Find One Duplicate

// Input: Enter array: 4 7 2 7 9

// Output: Duplicate: 7
#include <stdio.h>

int main()
{

    int arr[] = {2, 4, 7, 2, 7, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int duplicate = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate = 1;
                printf("Duplicate: %d\n", arr[j]);
                break;
            }
        }
        if (duplicate)
            break;
    }
    printf("No duplicate found");

    return 0;
}