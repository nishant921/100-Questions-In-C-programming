// 163. Remove vowels from a string.

#include <stdio.h>
#include <string.h>

int isvowel(char c){
    char vowel[] = "AEIOUaeiou";
    return (strchr(vowel,c)!=NULL);
}

int main(){

    char arr[100];
    printf("Enter String: ");
    fgets(arr,sizeof(arr),stdin);
    arr[strcspn(arr,"\n")] = '\0';

    printf("Original String: %s\n",arr);
    
    
    int index = 0;
    for (int i = 0; arr[i]!='\0'; i++)
    {
        if (isvowel(arr[i])) continue;
        arr[index++] = arr[i];
    }
    arr[index] = '\0';
    
    printf("Original String After Change : %s\n",arr);
    

    return 0;
}