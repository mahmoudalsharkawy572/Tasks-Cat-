#include <stdio.h>

int sum(int *x, int *y)
{
    int sum;
    sum = *x + *y;
    return sum;
}

void main()
{
    int n1, n2;
    printf("Enter two numbers : \n");
    scanf("%d %d", &n1, &n2);
    printf("------------------------------\n");
    printf("Sum = %d ", sum(&n1, &n2));
}