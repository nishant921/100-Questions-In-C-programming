// Given a character, determine whether it is a vowel or consonant using strings
#include <stdio.h>
#include <string.h>

int isVowel(char ch){
    char vowel[] = "aeiouAEIOU";
    return (strchr(vowel,ch)!=NULL);
}

int main(){

    char c;
    printf("Enter a character: ");
    scanf("%c",&c);

    if (c>=65 && c<=122){
        if (isVowel(c)){
            printf("Entered Character %c is a Vowel.",c);
        }
        else{
            printf("Entered Character %c is a Consonant.",c);
        }
    }
    else{
        printf("Enter a valid Alphabet Character.");
    }

    return 0;
}