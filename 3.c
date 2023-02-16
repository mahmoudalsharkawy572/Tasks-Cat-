#include <stdio.h>

void *multiplication(int a[3][3], int b[3][3], int arow, int bcol, int brow)
{
    int product[3][3], sum=0;
    for (int i = 0; i < arow; i++)
    {
        for (int j = 0; j < bcol; j++)
        {
            for (int k = 0; k < brow; k++)
            {
                sum += a[i][k] * b[k][j];
            }

            product[i][j] = sum;
            sum = 0;
        }
    }
    printf("Resultant array \n");
    for (int i = 0; i< arow; i++)
    {
        for (int j = 0; j< bcol; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}

void main()
{
    int x[3][3] = {{1, 2, 5},
                   {1, 2, 1},
                   {3, 2, 1}};

    int y[3][3] = {{2, 1, 2},
                   {3, 1, 2},
                   {1, 1, 1}};
    multiplication(x, y, 3, 3, 3);
}