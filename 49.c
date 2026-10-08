// C. Array manipulation

// 126. Reverse an array.

// 1 2 3 4 5 → 5 4 3 2 1


#include <stdio.h>

void reverseArray(int arr[],int len){
    for (int i=0;i<len/2;i++){
        int temp = arr[i];
        arr[i] = arr[len-1-i];
        arr[len-i-1] = temp;
    }
}

int main(){

    int num[] = {1,2,3,4,5};
    printf("Original: ");
    for(int i=0;i<5;i++){
        printf("%d ",num[i]);
    }
    printf("\n");

    reverseArray(num,5);
    printf("Reverse: ");
    for(int i=0;i<5;i++){
        printf("%d ",num[i]);
    }
    

    return 0;
}
