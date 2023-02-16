#include <stdio.h>
void main()
{
    int number = 10, *ptr = &number;
    printf("Number = %d\n", number);
    *ptr = 20;
    printf("Number = %d\n", number);
}