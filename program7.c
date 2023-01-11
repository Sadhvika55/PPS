#include<stdio.h>
int main()
{
int a,b,c;
printf("enter a,b and c values");
scanf("%d %d %d",&a,&b,&c);
if (a>b && a>c)
{
printf("maximum number is %d",a);
}
else if (b>c && b>a)
{
printf("maximum number is %d",b);
}
else if (c>a && c>b)
{
printf("maximum number is %d",c);
}
}
