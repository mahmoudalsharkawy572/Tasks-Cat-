#include<stdio.h>
#pragma pack(1)

typedef struct Employees
{
 int salary,bonus,deductions;

}employee;
void main()
{
 int counter,sum=0;
 employee em[3];
 printf("\n");
 for (counter = 0 ; counter<3 ; counter++)
 {
    printf("Enter your salary (employee %d ): ",counter+1);
    scanf("%d",&em[counter].salary);
    printf("Enter your bonus (employee %d ): ",counter+1);
    scanf("%d",&em[counter].bonus);
    printf("Enter your deductions (employee %d ): ",counter+1);
    scanf("%d",&em[counter].deductions);
    printf("\n");
 }
 printf("\n");
 for (counter = 0 ; counter<3 ; counter++)
 {
    printf("Employee %d information: \n",counter+1);
    printf("Salary = %d \n",em[counter].salary);
    printf("Bonus = %d \n",em[counter].bonus);
    printf("Deductions = %d \n",em[counter].deductions);
    sum+=(em[counter].salary+em[counter].bonus-em[counter].deductions);
    printf("\n");
 }
 
 printf("Total money = %d\n",sum);

}