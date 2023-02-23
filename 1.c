#include <stdio.h>
#define MAX_SIZE 100 


void main()
{
    char str[MAX_SIZE];

    printf("Enter your text : ");
    gets(str);

    for(int i=0; str[i]!='\0'; i++)
    {
        
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase string : %s",str);
    
}