// Count the number of factors of n.

#include <stdio.h>

int countFactor(int n)
{

    if (n == 0)
    {
        printf("Enter a positive integer.\n");
        return 0;
    }

    int temp = n < 0 ? -n : n;
    int count = 0;

    for (int i = 1; i <= temp / 2; i++)
    {
        if (temp % i == 0)
        {
            count++;
        }
    }
    count++; // bcz n is itself is a factor.
    if (n<0) count*=2;

    return count; 
}

int main()
{

    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    printf("The total Number of factor of %d : %d", num, countFactor(num));

    return 0;
}