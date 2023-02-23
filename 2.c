#include <stdio.h>
#define MAX_SIZE 100

void main()
{
    char str[MAX_SIZE];
    int digit_num=0,alpha_num=0,special_num=0;
    printf("Enter String : \n");
    gets(str);
    for (int i=0 ; str[i] != '\0' ;i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122))
        alpha_num++;

        else if(str[i]>=48 && str[i]<=57)
        digit_num++;

        else 
        special_num++;
    }

    printf("Number of digits : %d\n",digit_num);
    printf("Number of alphbets : %d\n",alpha_num);
    printf("Number of special characters : %d\n",special_num);

}