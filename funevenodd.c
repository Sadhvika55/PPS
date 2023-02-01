#include<stdio.h>
void evenorodd(int);
void main()
{
	int n;
	printf("\n enter the given value");
	scanf("%d",&n);
	evenorodd(n);
}
void evenorodd(int a)
{
	if(a%2==0)
		printf("\n a is even");
	else
		printf("\n a is odd");
}
