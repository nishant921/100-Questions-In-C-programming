// check whether a character is an alphaet, digit or a special character.

#include <stdio.h>

int main()
{
    char character;
    printf("Enter a single character: ");
    scanf("%c", &character);

    if (character >= 65 && character <= 122)
    {
        printf("%c is a alphabet!", character);
    }
    else if (character >= 48 && character <= 57)
    {
        printf("%c is a digit", character);
    }
    else
    {
        printf("%c is a special character.", character);
    }

    return 0;
}