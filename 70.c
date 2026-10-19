// 164. Remove duplicate characters.

// Example:

// programming

// Produce a string containing each character only once.

#include <stdio.h>
#include <string.h>

int main()
{

    char arr[100];
    printf("Enter String: ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")] = '\0';

    // char arr[] = "Programming";

    printf("Original String: %s\n", arr);

    
    int index = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        int isduplicate = 0;
        for (int j = 0; j<index; j++)
        {
            if (arr[i] == arr[j]){
                isduplicate = 1;
                break;
            }
        }
        if (!isduplicate) arr[index++] = arr[i];
    }
    arr[index] = '\0';

    printf("Original String After Change : %s\n", arr);

    return 0;
}