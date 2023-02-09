#include <stdio.h>

void repeat(int arr[],int size)
{
  int i,j;
  printf("Repeated elements : ");
  for (i=0;i<size;i++)
  { 
    for (j=i+1;j<size;j++)
    {
     
     if (arr[i]==arr[j])
      {
        printf("%d ",arr[j]);
      }
    }
  }
}

void main()
{ 
  int size,arr[size];  
    printf("Enter array size : \n");
    scanf("%d",&size);
  printf("Enter array elements : \n");
 for (int i=0;i<5;i++)
 {
   scanf("%d",&arr[i]);
 }
  repeat(arr,size);
    
}
