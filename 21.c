// Print all prime numbers from 1 to 100.

#include <stdio.h>

void allPrime(int start, int end)
{

    if (start > end)
    {
        printf("Enter a valid range.");
        return;
    }
    if (start < 0)
    {
        printf("Enter a valid Positive range.");
        return;
    }

    if (start < 2)
        start = 2;
    for (int i = start; i < end; i++)
    {
        int isprime = 1;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isprime = 0;
                break;
            }
        }
        if (isprime)
            printf("%d\n", i);
    }
}

int main()
{

    int start, end;
    printf("Enter range - space separated: ");
    scanf("%d %d", &start, &end);

    allPrime(start, end);

    return 0;
}