#include<stdio.h>
#include<math.h>
void arm();
void main()
{
	int x;
	printf("enter the value");
	scanf("%d",&x);
	arm(x);
}
void arm(int a)
{
	int i,n,rem,sum;
	sum=0;
	i=a;
	while(a>0)
{
	rem=a%10;
	sum=sum+pow(rem,3);
	a=a/10;
}
if(sum==i)
	printf("%d is armstrong",i);
	else
	printf("%d is not armstrong",i);
	}
