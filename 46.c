
#include <stdio.h>

int main()
{

    // 105. Create a pointer to an array.
    int marks[50];

    int *ptr = marks;

    // // arr address
    // printf("%p\n", (void *)&marks[0]);

    // // ptr pointing to which address
    // printf("%p\n", (void *)ptr);

    // // ptr addres
    // printf("%p\n", (void *)&ptr);

    // // 106. Print array elements using a pointer.
    // marks[0] = 98;
    // marks[1] = 88;
    // marks[2] = 78;
    // marks[3] = 68;
    // marks[4] = 58;
    // printf("%d\n", *ptr);
    // printf("%d\n", *(ptr+1));
    // printf("%d\n", *(ptr+2));
    // printf("%d\n", *(ptr+3));

    // // 110. Write a program to traverse an array using a pointer.
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", *ptr);
    //     ptr++;
    // }

    // // 107. Explain:  int *p; vs int a[5];
    // // first one is a integer pointer which will point to some address where as second one is a integer array which will hold 5 elements

    // // 108. What happens when you increment an int * pointer?
    // // it will point to the next memory address if it is 4 bytes interger then it will pointer to next location
    // // ptr++ moves the pointer to the next element of its type, not simply the next byte.

    // printf("%p\n",(void *) ptr);
    // ptr++;
    // printf("%p\n", (void *)ptr);
    // ptr++;
    // printf("%p\n", (void *)ptr++);
    // printf("%p\n", (void *)ptr);

    // 109. What is pointer arithmetic?
    // Pointer arithmetic means performing operations such as
    // +, -, ++, -- on pointers.
    // The movement is based on the size of the pointer's data type.
    
    marks[0] = 98;
    marks[1] = 88;
    marks[2] = 78;
    marks[3] = 68;
    marks[4] = 58;
    ptr += 4;

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", *ptr);
        ptr--;
    }

    return 0;
}