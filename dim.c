#include<stdio.h>
#define MAX 10
void main()
{
	int A[MAX][MAX],transpose[MAX][MAX];
	int rows,cols,i,j;
	printf("\n enter no.of rows,cols");
	scanf("%d%d",&rows,&cols);
	printf("\n enter %d elements",rows*cols);
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			transpose[j][i]=A[i][j];
	               
		}
	}
			for(i=0;i<cols;i++){
				for(j=0;j<rows;j++)
				{
	                	printf("%d",transpose[i][j]);
				}
	
        printf("\n");
			}

}
