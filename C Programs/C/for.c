#include<stdio.h>

 int main() {
		for(fun();fun();fun())
			printf("%d \n",fun());
return 0;
		
	}
int fun() {
		static int num =7;
		return num--;
		
	}