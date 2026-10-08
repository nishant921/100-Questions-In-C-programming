// B. Searching

// 121. Search for an element using linear search.

// Example:

// Array: 10 20 30 40 50
// Search: 30

// Output: Found

// 122. Search and print the index.

// 123. Count how many times a given number occurs.

// 124. Find the first occurrence of an element.

// 125. Find the last occurrence.

#include <stdio.h>

int find(int arr[], int search, int len)
{
    for (int i = 0; i < len; i++)
    {
        if (search == arr[i])
            return i;
    }
    return -1;
}

int main()
{

    int len;
    printf("Enter No. of Elements to Enter: ");
    scanf("%d", &len);

    if(len<=0){printf("Invalid size\n");return 1;}

    int arr[len];
    printf("Enter Elements: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    int search;
    printf("Search: ");
    scanf("%d", &search);

    if (find(arr, search, len) == -1)
    {
        printf("Not Found\n");
    }
    else
        printf("found\n");

    // serach and print the index
    printf("Index: %d\n", find(arr, search, len));

    // count element occurences
    int o;
    printf("Enter occurrence of which element to find: ");
    scanf("%d", &o);
    int occur = 0;
    for (int i = 0; i < len; i++)
    {
        if (o == arr[i])
            occur++;
    }
    printf("Occurrence: %d\n", occur);

    int o2;
    printf("Enter element to find it's first occurrence: ");
    scanf("%d", &o2);
    int occur2 = -1;
    for (int i = 0; i < len; i++)
    {
        if (o2 == arr[i])
        {
            occur2 = i;
            break;
        }
    }
    printf("First Occurrence: %d\n", occur2);
    
    int last;
    printf("Enter element to find it's last occurrence: ");
    scanf("%d", &last);
    int lastoccur = -1;
    for (int i = 0; i < len; i++)
    {
        if (last == arr[i])
        {
            lastoccur = 1;
        }
    }
    printf("last Occurrence: %d\n", lastoccur);
    
    return 0;
}