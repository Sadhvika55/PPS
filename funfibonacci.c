#include<stdio.h>
int fibonacci(int );
void main()
{
	int x,c;
	printf("enter the value");
	scanf("%d",&x);
	c=fibonacci(x);
	printf("\n%d",c);
}
int fibonacci(int n)
{
	int a=0,b=1,i,c;
	printf("%d %d",a,b);
	c=a+b;
	for(i=3;i<n;++i)
{
	a=b;
	b=c;
 c=a+b;
 return c;
}
}
