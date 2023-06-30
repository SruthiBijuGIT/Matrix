#include<stdio.h>
int main()
{
 int a[10][10],i,j,c,r;
 printf("\n\nEnter the number of rows and columns of a matrix:\n");
 scanf("%d%d",&r,&c);
 printf("Input elements in the matrix:\n");
 for(i=0;i<r;i++)
 {
   for(j=0;j<c;j++)
   {
     printf("element - [%d],[%d]",i+1,j+1);
     scanf("%d",&a[i][j]);
    }
  }
printf("\nThe matrix is:\n");
for(i=0;i<r;i++)
{
  printf("\n");
  for(j=0;j<c;j++)
  {
    printf("%d\t",a[i][j]);

  }
}
printf("\n\n");
return 0;
}
