// 139. Find the frequency of each element.

// Example:

// 1 2 2 3 3 3

// 1 → 1
// 2 → 2
// 3 → 3

#include <stdio.h>

int main(){

    int arr[] = {1,2,2,3,3,3};
    int len = sizeof(arr) / sizeof(arr[0]);

    int duplicates = 0;

    for (int i=0; i<len;i++){
        int count = 0;
        int isalreadycounted=0;

        // counts
        for (int j = 0; j < len; j++)
        {
            if (arr[i]==arr[j]){ count++;}
        }

        // 
        for (int k = 0; k < i; k++)
        {
            if (arr[i]==arr[k]){ isalreadycounted=1;break;}
        }

        if (isalreadycounted) continue;

        printf("%d -> %d\n", arr[i], count); 
        
    }
    

    return 0;
}
