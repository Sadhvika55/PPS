#include<stdio.h>
#define max 10
void main()
{
	int a[max][max],b[max][max],c[max][max];
	int r1,r2,c1,c2,i,j;
	printf("\n size of a matrix a");
	scanf("%d%d",&r1,&c1);
	printf("\n size of a matrix b");
	scanf("%d%d",&r2,&c2);
	if(r1==r2&&c1==c2)
	{
		printf("\n enter the elements %d of a",r1*c1);
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
				for(i=0;i<r1;i++)
				{
					for(j=0;j<c1;j++)
					{
			
						printf("\n %d",a[i][j]);
					}
		printf("\n");
		}
	}
		printf("\n enter the element %d of b",r1*c1);
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
        for(i=0;i<r1;i++)  
{
	for(j=0;j<c1;j++)
	{
	        printf("\n enter the elements %d",b[i][j]);
			}
		}
	
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{				c[i][j]=a[i][j]+b[i][j];
				printf("enter the values %d",c[i][j]);			}
			printf("\n");
		}
	
}

