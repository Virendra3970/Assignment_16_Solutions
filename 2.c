#include<stdio.h>
int main()
{
 int a[3][3], b[3][3],i,j, c[3][3],sum=0,k;
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
 printf("Product of two matrices of 3X3 is: \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  { 
   for(k=0;k<3;k++)
   {
    sum=sum+a[i][k]*b[k][j];
   }
   c[i][j]=sum;
   printf("%d ",c[i][j]);
   sum=0;
  }
  
  printf("\n");
 }
 
return 0; 
}
