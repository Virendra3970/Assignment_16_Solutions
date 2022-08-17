#include<stdio.h>
int main()
{
 int i,j,a[3][3],sum=0;
 /*printf("Please Enter the order of matrix: ");
 scanf("%d%d", &i,&j);*/
 printf("Enter the values for first matrix: ");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  { scanf("%d", &a[i][j]);
    printf("%d ",a[i][j]);
  }
  printf("\n");
 }
 printf("Sum of row's elements of given matrix: ");
 for(i=0;i<3;i++)
 {
  sum=0;
  for(j=0;j<3;j++)
  {
    sum=sum+a[i][j];
    
   }
  printf("%d, ",sum);//printf("\n");
 }
 printf("\nSum of column's elements of given matrix: ");
 for(j=0;j<3;j++)
 {
  sum=0;
  for(i=0;i<3;i++)
  {
    sum=sum+a[i][j];
   
   }
  printf("%d, ",sum);//printf("\n");
 }
 
 return 0;
}
