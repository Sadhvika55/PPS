#include<stdio.h>
void swap(int*,int*);
void main()
{
	int a,b;
	printf("enter the value");
	scanf("%d%d",&a,&b);
	printf("\n a=%d,b=%d",a,b);
	swap (&a,&b);
	printf("\n a=%d,b=%d",a,b);
}   
void swap(int*p1,int*p2)
{
	int t;
	t=*p1;
	*p1=*p2;
	*p2=t;
}


