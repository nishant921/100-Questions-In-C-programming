// 159. Count frequency of a particular character.

// "banana"
// 'a' → 3

#include <stdio.h>
#include <string.h>

int count(char str[],char searchfor){
    int i=0;
    int freq=0;
    while (str[i]!='\0')
    {
        if (searchfor==str[i]) freq++;
        i++;
    }
    return freq;

}

int main(){

    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    int len = strlen(str);

    char search;
    printf("Enter Character to Count Frequency: ");
    scanf("%c",&search);

    int occur = count(str,search);

    printf("COUNTED OCCURENCES: %d",occur);

    return 0;

}

