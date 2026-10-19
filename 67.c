// 160. Find the first occurrence of a character.

// 161. Find the last occurrence.


#include <stdio.h>
#include <string.h>


int main(){

    char str[100];
    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")] = '\0';

    char c1;
    printf("Enter Character to Find it's First Occurence: ");
    scanf(" %c",&c1);

    char c2;
    printf("\nEnter Character to Find it's last Occurence: ");
    scanf(" %c",&c2);

    int first = -1;
    int last = -1;
    
    int i =0;
    while (str[i]!='\0')
    {
       if (str[i]==c1 && first == -1){
           first = i;
       }
       if (str[i]==c2){
        last = i;
       };
       i++;
    }
    
    printf("First Occurence : %d\n",first+1);

    printf("Last Occurence : %d\n",last+1);

    return 0;

}