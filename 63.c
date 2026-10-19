// 142. Find string length without using strlen().

// 143. Find string length using strlen().

#include <stdio.h>
#include <string.h>

int length(char str[]){
    int i = 0;
    while (str[i]!='\0')
    {
        i++;
    }
    return i;
}

int main(){
    char str[100];

    printf("Enter String: ");
    fgets(str,sizeof(str),stdin);

    int arrayCapacity = sizeof(str)/sizeof(str[0]);

    // for (int i = 0 ; i<len;i++){
    //     if (str[i]=='\n') {
    //         str[i] = '\0';
    //         break;
    //     }
    // }

    str[strcspn(str,"\n")] = '\0';

    puts(str);

    printf("len using sizeof but this give overall allocates length for str variable: %d\n",arrayCapacity);
    printf("Using User defined Length Function: %d\n",length(str));
    
    
    // using strlen() from string.h
    printf("Length Function: %zu\n",strlen(str));   
    return 0;
}