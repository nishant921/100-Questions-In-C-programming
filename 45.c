// 95. Count digits using recursion.

#include <stdio.h>

int countDigits(long long num)
{
    if (num<0) num=-num;
    if (num<=9)
        return 1;
    return 1 + countDigits(num / 10);
}

int main()
{

    printf("%d\n", countDigits(0));
    printf("%d\n", countDigits(1230));
    printf("%d\n", countDigits(2312232));

    
    return 0;
}