#include<stdio.h>
#define max 10
int main()
{
	int A[max][max];
	int r1,c1,transpose[max][max],i,j;
	printf("\n enter the size of A");
	scanf("%d%d",&r1,&c1);
	printf("\n enter %d element into A",r1*c1);
for (i=0;i<r1;i++)
{
	for(j=0;j<c1;j++)
	{
		scanf("%d",&A[i][j]);
	}
}
for(i=0;i<c1;i++)
{
	for(j=0;j<r1;j++)
	{
		transpose[i][j]=A[j][i];
	}
}
printf("\n transpose is \n ");
for(i=0;i<c1;i++)
{
	for(j=0;j<r1;j++)
	{
		printf("%d   ",transpose[i][j]);
	}
	printf("\n ");
}
}
