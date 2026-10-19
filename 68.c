// 162. Remove all spaces from a string.

// "hello world" → "helloworld"

#include <stdio.h>
#include <string.h>

int main(){

    char arr[100];
    printf("Enter String: ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")] = '\0';

    printf("Original String: %s\n",arr);

    int index=0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        if (arr[i]==' ') continue;
        arr[index++] = arr[i];  
    }

    arr[index]='\0';

    printf("After Changing String: %s\n",arr);

    return 0;
}
