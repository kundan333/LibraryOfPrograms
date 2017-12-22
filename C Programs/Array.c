#include<conio.h>
#include<stdio.h>

void main()
{

int a[100],n,i;
//a[100] -- 100 is length of array


printf("Enter length of array \n");
scanf("%d",&n);
printf("Enter elements to array \n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Your array is = \n");

for(i=0;i<n;i++)
{
printf(" a[%d] = %d \n",i,a[i]);
}

getch();
}