#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100


void main()
{
    char str[MAX_SIZE],ch;

    printf("Input string : ");
    gets(str);
    printf("Input character to search : ");
    scanf("%c",&ch);
    for (int i=0 ;str[i] != '\0' ;i++)
    if (str[i]==ch)
    {
        printf("'%c' is found  at index %d",ch,i);
        break;
    }



}
