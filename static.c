#include<stdio.h>
void smaple();
void main()
{
	sample();
	sample();
	sample();
}
void sample()
{
	static int x;
	printf("%d",x);
	x++;
}
