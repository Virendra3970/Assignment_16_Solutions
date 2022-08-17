#include<stdio.h>
int main()
{
 int i,j,a[i][j],b[i][j];
 printf("Please Enter the order of matrix: ");
 scanf("%d%d", &i,&j);
 printf("Enter the values for first matrix: ");
 for(i=0;i<j;i++)
 {
  for(j=0;j<i;j++)
  { scanf("%d", &a[i][j]);
    printf("%d ",a[i][j]);
  }
  printf("\n");
 }
 printf("Transpose of given matrix: \n");
 for(i=0;i<j;i++)
 {
  for(j=0;j<i;j++)
  {
   b[j][i]=a[i][j];
   //printf("%d ",b[i][j]);
  }
  //printf("\n");
 }
  for(i=0;i<j;i++)
 {
  for(j=0;j<i;j++)
  { //scanf("%d", &a[i][j]);
    printf("%d ",b[i][j]);
  }
  printf("\n");
 }

 
 return 0;
}
