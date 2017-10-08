/* sorting array using insertion sort */
#include<stdio.h>
#include<conio.h>
void main(){
int i,j,n,k,temp,a[50];
clrscr();
//n= 5;
printf("\n enter the size of array ");
scanf("\n %d",&n);

printf("\n enter elements for array :: \n");
for(i=0;i<n;i++){
printf("\n enter %d element for array : ",i+1);
scanf("%d",&a[i]);
}
printf("\n array is ");
for(i=0;i<n;i++){
printf("%d ",a[i]);
}
printf("\n");

for(i=1;i<=(n-1);i++){

for(j=i-1;j>=0;j--){
if(a[j+1]<a[j]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
printf("\n pass %d - ",i);
for(k=0;k<n;k++){
printf(" %d ",a[k] );
}
printf(" \n ");
}
printf("\n\n sorted array :- ");
for(i=0;i<n;i++){
printf("\n %d ",a[i]);
}
getch();
}