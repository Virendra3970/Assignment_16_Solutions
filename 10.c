#include<stdio.h>
int main()
{
 int i,j,a[3][3],b[3][3], max=0,sum=0,index;
 printf("Enter the values for first matrix: ");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  { scanf("%d", &a[i][j]);
    printf("%d ",a[i][j]);
  }
  printf("\n");
 }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  {
   if(a[i][j]==1)
    sum=sum+a[i][j];
  }
  if(sum>max)
  {
   max=sum;
   index=i;
  }
 }
 for(j=0;j<3;j++)
 {
  printf("%d | ",a[index][j]);
 }
 return 0;
}
