#include<stdio.h>
void main()
{
int tomato,carrot,onion,radish,total,a,b,c,d;
scanf("%d %d %d %d",&a,&b,&c,&d);
tomato=a*30;
onion=b*20;
carrot=c*25;
radish=d*40;
total=tomato+onion+carrot+radish;
printf("total bill=%d",total);
}
