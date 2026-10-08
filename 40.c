// 90. Fibonacci using recursion.

#include <stdio.h>

int fibonacci(int num){

    if (num==1 || num==2) return num-1;

    // Recursive Case: F(n) = F(n-1) + F(n-2)
    return fibonacci(num-1)+fibonacci(num-2);
    
}
//                     f(5)
//                   /      \
//                f(4)      f(3)
//               /   \      /   \
//            f(3)   f(2) f(2)  f(1)
//            /  \      |    |     |
//         f(2) f(1)   1    1     0
//           |    |
//           1    0

int main(){

    int terms;

    printf("Enter the number of terms: ");
    scanf("%d", &terms);


    for (int i = 1; i <=terms; i++)
    {
        printf("%d ",fibonacci(i));
    }
    

    return 0;
}