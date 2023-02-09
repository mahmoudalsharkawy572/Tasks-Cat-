#include <stdio.h>
void main()
{
 int arr[5],max1,max2;
 printf("Enter array elements : \n");
 for (int i=0;i<5;i++)
 {
   scanf("%d",&arr[i]);
 }
 for (int i=0;i<5;i++)
 {
   if (max1<arr[i])
   {
      max1=arr[i];
   }
 }
 printf("largest element : %d \n",max1);
 for(int i=0;i<5;i++)
{
 if(max1>arr[i] && max2<arr[i])
 {
   max2=arr[i];
 }
}
  printf("Second largest element : %d \n",max2);

}
