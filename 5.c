#include <stdio.h>
void main()
{
 int sum,arr[5][5]=
               {
                {10,12,15,18,71},
                {1 ,2 ,3 ,4 ,5 },
                {10,20,30,40,50},
                {3 ,8 ,76,40 ,0},
                {8 ,7 ,5 ,6  ,4}
               };
 printf("Row totals : ");
 for (int i=0;i<5;i++)
 {
    for (int j=0;j<5;j++)
    {
       sum += arr[i][j];       
    }
     printf("%d ",sum);
     sum=0;  
 }           
 printf("\n");   
   printf("Column totals : ");
 for (int j=0;j<5;j++)
 {
    for (int i=0;i<5;i++)
    {
       sum += arr[i][j];       
    }
     printf("%d ",sum);
     sum=0;  
 }              
}