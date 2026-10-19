// 168. Count the number of words.

// I love C programming - 4

#include<stdio.h>
#include<string.h>

int main(){

    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    int word = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        if (str[i]!=' ' && (i==0 || str[i-1]==' ')){
            word++;
        }
    }
    
    printf("The Number of word in '%s': %d",str,word);

    return 0;
}