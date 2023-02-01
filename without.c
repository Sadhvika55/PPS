#include<stdio.h>
void fact();
void main()
{
	fact();
}
void fact(int fact)
{
	int n,fact=1,i;
	printf("\n enter the value");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	fact=fact*i;
	printf("\n%d =fact",fact);
}
