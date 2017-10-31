#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,r,c,arr[10][10];
clrscr();
printf("Enter the number of row in matrix:  ");
scanf("%d", &r);
printf("Enter the number of column in matrix: ");
scanf("%d", &c);
printf("Enter the elements of matrix:  \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
scanf("%d",&arr[i][j]);
}
printf("The matrix is :\n");

for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("arr[%d][%d]=%d \t",i,j,arr[i][j]);
}
printf("\n");
}
getch();
}