// 136. Count duplicate elements.
// Example:

// arr = {1, 2, 2, 3, 3, 3, 4}
// 2 appears 2 times → 1 duplicate
// 3 appears 3 times → 2 duplicates

// So total duplicate occurrences = 3.

#include <stdio.h>

int main(){

    int arr[] = {1,2,2,3,3,3,4};
    int len = sizeof(arr)/sizeof(arr[0]); 

    int duplicates = 0;

    for (int i = 0; i<len;i++){
        for (int j=i+1; j<len;j++){
            if (arr[i]==arr[j]) duplicates++;
            break;
        }
    }

    printf("Duplicates: %d\n",duplicates);

    return 0;

}