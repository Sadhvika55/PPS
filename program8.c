#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c,r1,r2;
printf("enter values of a,b,c");
scanf("%d %d %d",&a,&b,&c);
r1=((-b)+sqrt((b*b)-4*a*c))/2*a;
r2=((-b)-sqrt((b*b)-4*a*c))/2*a;
printf("the roots are %d %d",r1,r2);
if(((b*b)-(4*a*c))>0)
{
printf("roots are real and distinct");
}
else if(((b*b)-(4*a*c))==0)
{
printf("roots are real and equal");
}
else if(((b*b)-(4*a*c))<0)
{
printf("roots are imaginary");
}
}
