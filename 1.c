// Swap two numbers using a third variable.

// #include <stdio.h>

// int main(){

//     int fnum, snum;
//     printf("Enter Space Separated two Numbers : ");
//     scanf("%d %d",&fnum,&snum);

//     printf("Before Swapping: first: %d and second: %d\n",fnum,snum);

//     int temp = fnum;
//     fnum = snum;
//     snum = temp;
//     printf("After Swapping: first: %d and second: %d",fnum,snum);


//     return 0;
// }

// Swap two numbers using a third variable using pointer
#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int fnum, snum;
    printf("Enter Space Separated two Numbers : ");
    scanf("%d %d",&fnum,&snum);

    printf("Before Swapping: first: %d and second: %d\n",fnum,snum);
    
    swap(&fnum,&snum);
    printf("After Swapping: first: %d and second: %d",fnum,snum);


    return 0;
}