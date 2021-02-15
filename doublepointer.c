#include<stdio.h>
int main()
{
  int n,i,j;
  printf("Enter the size of Matrix (Count as nXn for both matrix )  => "); scanf("%d",&n);

  int  arr1[n][n], arr2[n][n],  arr3[n][n];
  int *ptr1[n][n],*ptr2[n][n], *ptr3[n][n];

  printf("Enter %dX%d elements for matrix 1 (Total %d) = >",n,n,n*n);
  for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&arr1[i][j]);
  printf("Enter %dX%d elements for matrix 2 (Total %d) = >",n,n,n*n);
  for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&arr2[i][j]);

  for(i=0;i<n;i++) 
    {
        for(j=0;j<n;j++) 
         {
             ptr1[i][j] = &arr1[i][j];  
             ptr2[i][j] = &arr2[i][j];
             ptr3[i][j] = &arr3[i][j];

            *ptr3[i][j] = *ptr1[i][j] + *ptr2[i][j];
         }
    }      
printf("addition of 2 array printed using pointer *ptr3 =>\n");
      for(i=0;i<n;i++) 
       {  for(j=0;j<n;j++) 
          { 
              printf(" %2d ",*ptr3[i][j]);
          }   
           printf("\n");
       }    
return 0;

}
