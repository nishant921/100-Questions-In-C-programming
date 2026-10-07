// Check whether a character is uppercase or lowercase.

#include<stdio.h>

int main(){

    char word;
    printf("Enter a character: ");
    scanf("%c",&word);

    if (word>=65 && word<=90){
        printf("%c is a uppercase character!",word);
    }
    
    if (word>=97 && word<=122){
        printf("%c is a LowerCase character!",word);
    }


    return 0;
}
