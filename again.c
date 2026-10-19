// D. Important placement problems

// 131. Find the second largest element.

// Example:

// 10 5 20 8 15

// Answer: 15

// 132. Find the second smallest element.

// 133. Find the largest and smallest element in a single traversal.

// 134. Find the sum of all elements except the maximum.

// 135. Find the difference between maximum and minimum.

// 136. Count duplicate elements.

// 137. Find whether an array contains duplicates.

// Example:

// 1 2 3 4 2

// → Duplicate exists

// 138. Print all duplicate elements.

// 139. Find the frequency of each element.

// Example:

// 1 2 2 3 3 3

// 1 → 1
// 2 → 2
// 3 → 3

// 140. Find the missing number.

// Example:

// 1 2 3 5

// Missing = 4


#include <stdio.h>
#include <limits.h>

int main(){
    int arr[] = {10,10,1,1,2,2,3,3,4,4,5,5,9,9}; 
    int len = sizeof(arr)/sizeof(arr[0]);

    int sum = 0;
    int duplicates = 0;
    int isduplicate = 0 ;

    int largest = arr[0];
    int second_large =  INT_MIN;
    int smallest = arr[0];
    int second_Smallest =  INT_MAX;

    for (int i = 0; i<len;i++){
        if (arr[i]>largest){
            second_large = largest;
            largest =  arr[i];
        }
        else if(arr[i]>second_large && arr[i]!=largest){
            second_large =arr[i];
        }
        if (smallest>arr[i]){
            second_Smallest = smallest;
            smallest = arr[i];
        }
        else if(second_Smallest>arr[i] && arr[i]!=smallest){
            second_Smallest = arr[i];
        }

        sum += arr[i]; 
        for(int j=i+1;j<len;j++){
            if (arr[i]==arr[j]){
                duplicates++;
                isduplicate = 1;
                break;
            }
        }
        
    }

    printf("Largest : %d\n",largest);
    printf("Second Largest : %d\n",second_large);

    printf("Smallest : %d\n",smallest);
    printf("Second Smallest : %d\n",second_Smallest);
    
    
    sum = sum-largest;
    printf("Sum Except Max : %d\n",sum);
    
    printf("Difference: %d\n",largest-smallest);


    printf("Duplicate Count: %d\n",duplicates);

    if (isduplicate) printf("Duplicate Exsits!");
    
    return 0;
}




