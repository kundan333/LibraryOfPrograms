#include<stdio.h>

int main(){
	int i;
	for(i=1;i<=20;i++)
	{
		switch(i){
			case 0 : i=i+2;
			case 1 : i=i+3;
			case 2 : i=i+5;
			case 3 : i=i+6;
			default : i=i+2;
			break;	
			}
			printf("%d",i);
	}
	
	
}