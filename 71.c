// 165. Find the most frequent character.


#include <stdio.h>
#include<string.h>
#include<limits.h>

int main()
{
    char arr[100];
    printf("Enter String: ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")] = '\0';

    // char arr[] = "Programming Language";

    printf("Original String: %s\n", arr);

    char most = '\0';
    int max = 0; 
    char least = '\0';
    int min = INT_MAX; 

    for (int i = 0; arr[i] != '\0'; i++)
    {
        int count = 0;
        for (int j = 0; arr[j] != '\0'; j++)
        {
            if (arr[i]==arr[j])count++;
        }
        if (count>max){
            max = count;
            most = arr[i];
        } 
        // 166. Find the least frequent character.
        if (count<min) {
            min = count;
            least = arr[i]; 
        }
    }

    printf("Most Occurred Character: %c\n",most);
    printf("Most Occurred Character Frequency: %d\n",max);

    printf("Leasr Occurred Character: %c\n",least);
    printf("Least Occurred Character Frequency: %d\n",min);

    return 0;
}
