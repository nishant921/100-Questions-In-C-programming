// 89. Print numbers from n to 1 using recursion.

#include <stdio.h>

void display(int num)
{

    if (num < 0)
    {
        printf("Enter a positive Integer");
        return;
    }

    if (num == 0)
        return;

    printf("%d ", num);
    display(num - 1);
}

int main()
{

    display(20);

    return 0;
}
