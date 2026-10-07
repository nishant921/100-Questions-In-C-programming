// check whether three sides can form a triangle or not
// if can form a triangle: find if they're isosceles, equilateral or scalene

#include <stdio.h>

int main()
{

    float first, second, third;
    printf("Enter space separated 3 angles to check whether three sides can form a triangle or not: ");

    scanf("%f %f %f", &first, &second, &third);
    float total_angle = first + second + third;

    if (total_angle == 180.0)
    {
        printf("%.2f, %.2f and %.2f can form a triangle.\n", first, second, third);

        if (first == second && second == third)
        {
            printf("%.2f, %.2f and %.2f is an equilateral triangle\n", first, second, third);
        }
        else if (first == second || first == third || second == third)
        {
            printf("%.2f, %.2f and %.2f is an isosceles triangle.\n", first, second, third);
        }
        else
        {
            printf("%.2f, %.2f and %.2f is an scalene triangle.\n", first, second, third);
        }
    }
    else
    {
        printf("%.2f, %.2f and %.2f cannot form a triangle\n", first, second, third);
    }

    return 0;
}