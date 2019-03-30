#include <stdio.h>
#include <stdlib.h>

int main()
{
	int r,c;
	printf("Enter Row than collumn \n");
	scanf("%d %d", &r,&c);     
	int **transpose =(int **)malloc(c * sizeof(int *));  
	for (int i=0; i<c; i++) 
         transpose[i] = (int *)malloc(r * sizeof(int)); 
	
	int **arr = (int **)malloc(r * sizeof(int *)); 
    for (int i=0; i<r; i++) 
         arr[i] = (int *)malloc(c * sizeof(int)); 
  
	
  
    
    for (int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            printf("i %d, j %d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

	printf("Before Transpose values: \n \n");
    for (int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++)
        {
			printf("%d  ",arr[i][j]);
         
        }
		printf("\n");
    }
	
	//transpose
	 for (int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
				transpose[j][i]=arr[i][j];
		}
    }
	
	
	
	
    printf("After Transpose values: \n \n");
    for (int i = 0; i < c; i++) {
        for(int j = 0; j < r; j++)
        {
			
			printf("%d  ",transpose[i][j]);
            //printf("r %d, Day %d = %d\n", i+1, j+1, arr[i][j]);
        }
		printf("\n");
    }
    return 0;
}