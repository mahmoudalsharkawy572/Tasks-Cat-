#include<stdio.h>
 
void main() {
 int arr[100], size, i, j;
  
 printf("Enter number of elements in array from (1-100)\n");
 scanf("%d", &size);
 printf("Enter array elements : \n") ;
  
 for(i = 0; i < size; i++){
  scanf("%d", &arr[i]);
 }
  
 printf("Unique Elements\n");
 for(i = 0; i < size; i++) {
  for (j=0; j<i; j++){
      if (arr[i] == arr[j])
       break;
       }
      
     if (i == j){
      printf("%d ", arr[i]);
  }
 }
  
}