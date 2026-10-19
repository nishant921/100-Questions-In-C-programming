
// Q6 — Frequency of One Element

// Input: Enter array: 2 5 2 7 2 9
// Enter element: 2
// Output: Frequency of 2 = 3
#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 7, 2, 7, 9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int element;
    printf("Enter Element to find its frequency: ");
    scanf("%d",&element);
    int freq = 0;

    for (int i = 0; i < len; i++)
    {
        if(arr[i] == element ) freq++;
    }
    printf("Frequency of %d : %d",element,freq);

    return 0;
}
