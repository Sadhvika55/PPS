#include<stdio.h>
void main()
{
	int i,n,A[15],*ptr,sum;
	printf("hello\n");
	scanf("%d",&n);
	ptr=&A[0];
		for(i=0;i<n;i++)
		{	
		scanf("%d",ptr);
		ptr++;
		}
	ptr=&A[0];
	sum=0;
	for(i=0;i<n;i++)
	{
         sum=sum+*ptr;
	 ptr++;
	}
	 printf("sum=%d \t",sum);

}
