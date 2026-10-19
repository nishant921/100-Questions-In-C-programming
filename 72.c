// 167. Check whether two strings are anagrams.

// listen
// silent
// → Anagram

#include <stdio.h>
#include <string.h>

int main(){

    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    char str2[100];
    printf("Enter String: ");
    fgets(str2,sizeof(str2),stdin);
    str2[strcspn(str2,"\n")] = '\0';

    if (strlen(str) != strlen(str2)){
        printf("Not Anagrams!");
    }
    else{
        int count_1 = 0;
        int count_2 = 0;
        for(int i=0; str[i]!='\0';i++){
            for (int j = 0; str2[j]!='\0'; j++)
            {
                if(str[i]==str[j])
                    count_1++;
                if(str[i]==str2[j])
                    count_2++;
                
            }
        }   
        
        if (count_1==count_2) printf("Anagram");
        else printf("Not Anagram");
    }
        
    return 0;
}
