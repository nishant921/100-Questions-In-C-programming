// 144. Count vowels.

// 145. Count consonants.

// 146. Count digits in a string.

// 147. Count spaces.

// 148. Count special characters.

// 149. Count uppercase characters.

// 150. Count lowercase characters.

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];

    printf("Enter String: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;
    int special = 0;
    int upper = 0;
    int lower = 0;

    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z'||str[i] >= 'a' && str[i] <= 'z')
        {

            if (str[i] >= 'A' && str[i] <= 'Z') upper++;
            else lower++;

            if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'i' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
                vowels++;
            else
                consonants++;
        }

        else if (str[i] >= '0'&& str[i] <='9')
            digits++;

        else if (str[i] ==' ') spaces++;

        else
            special++;

        i++;
    }

    printf("Vowels :%d\n",vowels);
    printf("Consonants :%d\n",consonants);
    printf("Digits :%d\n",digits);
    printf("Special :%d\n",special);
    printf("Space :%d\n",spaces);
    printf("upper :%d\n",upper);
    printf("lower :%d\n",lower);

    return 0;
}
