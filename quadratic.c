#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,discriminant,root1,root2;
printf("enter coefficients a,b,c values");
scanf("%f%f%f",&a,&b,&c);
discriminant=((b*b)-4*a*c);
root1=(-b+(discriminant)^1/2/2*a);
root2=(-b-(discriminant)^1/2/2*a);
printf("%f%f",root1,root2);
}
