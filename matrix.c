#include<stdio.h>
#define MAX 10
void main()
{
int A[MAX][MAX];
int rors,cols,i,j;
prinf("\n enter no.of rows.cols);
scanf("%d%d",&rows,&cols);
printf("\n enter %d elements",rows*cols);
for(i=0;i<rows;i++)
{
	for(j=0;j<cols;j++0)
	{
		scanf("%d",&A[i][j]);
		printf("\n");
		for(i=0;i<rows;i++)
		{
			for(j=0;j<cols;j++)
			{
				printf("%d\n",A[i][j]);
			}
			printf("\n");
		}
	}
}
}
