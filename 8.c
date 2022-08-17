#include<stdio.h>
int main()
{
 int i,j,a[3][3],b[3][3];
 printf("Enter the values for first matrix: ");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  { scanf("%d", &a[i][j]);
    printf("%d ",a[i][j]);
  }
  printf("\n");
 }
 printf("Lower Triangular of given matrix: \n");
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  { 
    if(i>j)
     a[i][j]=0;
    b[i][j]=a[i][j];
   //printf("%d ",b[i][j]);
  }
  //printf("\n");
 }
  for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
  { //scanf("%d", &a[i][j]);
    printf("%d ",b[i][j]);
  }
  printf("\n");
 }

 
 return 0;
}
