#include<stdio.h>
#include<conio.h>
int main()
{
int a=500;
clrscr();
printf("Before function call x=%d \n",a);
change(a);
printf("After function call x=%d \n",a);

getch();
return 0;
}
 change(int num)
{
printf("Before adding value inside function num=%d \n",num);
num=num+100;
printf("After adding value inside fun num=%d \n",num);
}
