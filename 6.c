// find the greatest of four numbers.
#include <stdio.h>

int main()
{

    int first, second, third, fourth;
    printf("Enter 4 space separated Numbers: ");
    scanf("%d %d %d %d", &first, &second, &third, &fourth);

    int greatest = first;

    if (greatest < second)
    {
        greatest = second;
    }
    if (greatest < third)
    {
        greatest = third;
    }
    if (greatest < fourth)
    {
        greatest = fourth;
    }

    printf("The Greatest Number is %d\n", greatest);
    return 0;
}