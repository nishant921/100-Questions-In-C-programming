// 88. Print numbers from 1 to n using recursion.

#include <stdio.h>

void display(int num)
{
    
    if (num < 0)
    {
        printf("Enter a positive Integer");
        return;
    }
    
    if (num==0) return;
    
    display(num-1); 

    printf("%d ",num);

} 

int main(){

    display(10);

    return 0;
}
