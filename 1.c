#include<stdio.h>
int main()
{
 int a[3][3], b[3][3],i,j, c[3][3];
 printf("Enter the values for first matrix: ");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  { scanf("%d", &a[i][j]);
    printf("%d ",a[i][j]);
  }
  printf("\n");
 }
 printf("Enter the values of second matrix: ");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  { scanf("%d", &b[i][j]);
    printf("%d ",b[i][j]);
  }
  printf("\n");
 }
 printf("Sum of two matrices of 3X3 is: \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  { 
   c[i][j]=a[i][j]+b[i][j];
   printf("%d ",c[i][j]);
  }
  printf("\n");
 }
 
return 0; 
}
