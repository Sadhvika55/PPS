#include<stdio.h>
void fact();
void main()
{
	fact();
}
void fact()
{
	int n,fact=1,i;
	printf("enter the value");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("\n factorial of given no%d",fact);
}
