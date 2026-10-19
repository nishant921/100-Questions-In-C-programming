// Q7 — Frequency of Every Element

// Input: Enter array: 2 5 2 7 5 2

// Output:
// 2 -> 3
// 5 -> 2
// 7 -> 1

#include <stdio.h>
int main()
{
    int arr[7];
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("Enter Array Elements: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }
    int visited[7] = {0};

    for (int i = 0; i < len; i++)
    {
        int freq = 0;
        if (visited[i]==1) continue;
        for (int j = 0; j < len; j++)
        {
            if (arr[i] == arr[j]){
                freq++;
                visited[j] = 1;
            }
        }
        printf("Frequency of %d : %d\n", arr[i], freq);
    }

    return 0;
}
