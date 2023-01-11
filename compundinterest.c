#include<stdio.h>
#include<math.h>
void main()
{
float r=10,t=10,p=10,c;
printf("enter the values of p,r,t\n");
scanf("%f%f%f",&p,&r,&t);
c=p*pow((1+r/100),t);
printf("%f\n",c);
}

