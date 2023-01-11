//C PROGRAM TO FIND ROOTS OF A QUADRATIC EQUATIONS

#include<stdio.h>
#include<math.h>
void main()
{
double a,b,c,d,r1,r2; 
 printf("enter the value a,b,c: ");
 scanf("%lf,%lf,%lf",&a,&b,&c);
 d=(b*b)-4*a*c;
	 if(d>0)
	 {
		 r1=(-b+sqrt(d))/(2*a);
		 r2=(-b-sqrt(d))/(2*a);
		 printf("r1=%lf,r2=%lf",r1,r2);
		 printf("roots are real");
	 }
	 else
	 	 if(d==0)
		 {
			 r1=r2=(-b)/(2*a);
			 printf("r1=%lf,r2=%lf",r1,r2);
		 }
	 
		 else
			 if(d<0);
			 {
				 r1=sqrt(d)/2*a;
				 r2=-b/2*a;
				 printf("roots are imaginary");
				 printf("r1=%lf,r2=%lf",r1,r2);
			 }
}

