#include<stdio.h>
int main()
{
 int i,j,a[3][3],b[3][3], count=0;
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
   if(a[i][j]==0)
    count++;
  }
 }
 if(count>9%2)
  printf("Yes, Given matrix is a sparse matrix.");
 else
  printf("No, Given matrix is a dense matrix");
return 0;
}
