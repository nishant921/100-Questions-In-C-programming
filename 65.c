// 158. Check whether a string is palindrome.

// madam → palindrome
// hello → not palindrome

#include <stdio.h>
#include <string.h>

void palindrome(char arr[], int len){
    int ispalindrome = 1;
    for(int i=0; i<len/2;i++){
        if (arr[i]!=arr[len-i-1]) ispalindrome = 0;
    }
    if (ispalindrome)printf("Palindrome String.");
    else printf("NOT Palindrome String.");
}

int main(){

    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    int len = strlen(str);

    palindrome(str,len);

    return 0;

}