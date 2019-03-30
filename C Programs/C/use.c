#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
char a[]="hello";
char *p = a;

printf("%d",(int)strlen(p+1+1));

getch();
}