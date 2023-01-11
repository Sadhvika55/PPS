#include<stdio.h>
void main()
{
int n,i,c=0;
printf("\n my computer world");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	if(n%i==0)
	c++;
}
if(c==2)
{
printf("\n %d=n is prime",n);
}
else
{
printf("\n %d= n is not a prime",n);
}
}
