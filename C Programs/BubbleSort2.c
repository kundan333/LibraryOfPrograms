/* sorting array using bubble sort */

#include<stdio.h>
#include<conio.h>
void main(){
int i,j,n,k,temp,a[]={5,10,2,15,7};
clrscr();
n= 5;
printf("\n size of array %d ",n);
printf("\n");

for(i=1;i<=n;i++){           // this loop used for passes
j=0;

while(j<n){                 // this loop used for sorting
if(a[j]>a[j+1]){
temp=a[j];                  // swapping of elements if prev
a[j]=a[j+1];                // element is greater than it's
a[j+1]=temp;                // adjecent element.
j++;
}
else
j++;
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