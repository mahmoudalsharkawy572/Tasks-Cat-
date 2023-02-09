#include <stdio.h>
void main()
{
  int selection,arr[5];
  printf("Enter array elemnts : \n");
  for (int i=0;i<5;i++)
{
  scanf("%d",&arr[i]);
}
  printf("Enter selection -> 0.for ascending , 1.for descending : ");
  scanf("%d",&selection);
switch(selection){

case 0:
    printf("Ascend : ");
    for (int i=0;i<5;i++)
 {
    printf("%d ",arr[i]);
 }
     break;
case 1:     
        printf("Descend : ");

 for (int i=4;i>=0;i--)
 {
    printf("%d ",arr[i]);
 }
 break;
  default :
  printf("Invalid selection");
  break;
}
}