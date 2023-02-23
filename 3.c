#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void main()
{
    char str[MAX_SIZE],rev_str[MAX_SIZE];
    int begin,end;
    printf("Enter String : \n");
    gets(str);
    end=strlen(str)-1;
    for(begin=0 ; begin<strlen(str) ; begin++)
    {
        rev_str[begin]=str[end];
        end--;
    }
     rev_str[begin] = '\0';
     printf("%s",rev_str);

}