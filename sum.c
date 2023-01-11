#include<stdio.h>
void main()
{
int rem,n,sum;
printf("\n my computer world");
scanf("%d",&n);
sum=0;
while(n>0)
{
rem=n%10;
sum=sum+rem;
n=n/10;
}
printf("\n sum=%d",sum);

}
