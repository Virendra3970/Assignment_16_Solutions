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
 printf("Sum of right diagonal elements of given matrix: ");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
    if(i==j)
     sum=sum+a[i][j];
   }
  //printf("\n");
 }
 printf("%d",sum);
 return 0;
}
