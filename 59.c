// 137. Find whether an array contains duplicates.

// Example:

// 1 2 3 4 2

// → Duplicate exists

#include <stdio.h>

int main()
{

    int arr[] = {1, 2, 2, 3, 3, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);
    int duplicates = 0;

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicates++;
                break;
            }
        }
    }
    if (duplicates > 0)
        printf("Duplicate exists");

    else
        printf("No duplicate exists");

    return 0;
}