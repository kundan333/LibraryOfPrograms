#include<stdio.h>

int main(){
	static int a[] = {10,20,30,40,50};
	static int *p[] = {a,a+1,a+2,a+3,a+4};
	int i;
	//int **ptr = p;
	//ptr++;
	
	//printf("%d  %d",ptr-p,**ptr);
	
	for(i=0;i<5;i++)
	{
		printf("%d \n",*p[i]);
	}
	
	
}