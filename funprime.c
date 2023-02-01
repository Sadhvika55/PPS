#include<stdio.h>
void primeornot();
void main()
{
	int n;
	printf("\n enter the value");
	scanf("%d",&n);
	primeornot(n);
}
void primeornot(int a)
{
	int flag,i;
	flag=0;
	for(i=1;i<=a;i++)
{
	if(a%i==0)
	flag++;
}
if(flag==2)
printf("%d is prime",a);
else
printf("%d is not prime",a);

}
