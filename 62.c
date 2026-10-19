// The array contains numbers from 1 to n, with exactly one number missing.

// Example: 1 2 3 5

// Numbers should be:  1 2 3 4 5

// So 4 is missing.

// Standard approach — Sum formula

// The sum of numbers from 1 to n is: n(n+1)/2

// Expected sum - Actual sum = Missing number

#include <stdio.h>

int main()
{

    int arr[] = {1, 2, 3,4,5,6,8,9};
    int len = sizeof(arr) / sizeof(arr[0]);
    int n =len+1;
    int actual = 0;
    int expected = n*(n+1)/2;

    for(int i=0;i<len;i++){
        actual+=arr[i];
    }
    printf("Missing Number: %d",expected-actual);

    return 0;
}