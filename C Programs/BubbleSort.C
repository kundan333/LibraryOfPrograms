#include<stdio.h>
#include<conio.h>
#define N 5
void main()
{
void bubble(int *a);
int a[N],i;

printf("Enter Elements in array\n");
for(i=0;i<N;i++)
{
printf("Enter Value of A[%d]:",i);
scanf("%d",&a[i]);
}
bubble(a);
printf("Sorted List\n");
for(i=0;i<N;i++)
{
printf("A[%d]=%d\n",i,a[i]);
}
getch();
}
void bubble(int *a)
{
int i,j,temp;
for(i=0;i<N-1;i++)
{
for(j=0;j<N-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}