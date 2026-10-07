// Given a character, determine whether it is a vowel or consonant.

#include <stdio.h>
#include <string.h>

int main()
{

    char c;
    printf("Enter only aplhabet character : ");
    scanf("%c", &c);

    if (c >= 65 && c <= 122)
    {

        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        {
            printf("Vowel");
        }
        else
        {
            printf("Consonant");
        }
    }
    else
    {
        printf("Enter Valid alphabet!");
    }

    return 0;
}