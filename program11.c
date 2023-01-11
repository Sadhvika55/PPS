#include<stdio.h>
int main()
{
int marks1,marks2,marks3,tot,avg;
printf("enter marks1,marks2 and marks3");
scanf("%d %d %d",&marks1,&marks2,&marks3);
tot=marks1+marks2+marks3;
avg=tot/3;
printf(" avg is %d",avg);
if(avg>70)
printf("\n distinction");
else if(avg>60 && avg<=70)
printf("\n first class");
else if(avg>40 && avg<=60)
printf("\n second class");
else if (avg<=40)
printf("\n fail");
}
