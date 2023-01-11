#include<stdio.h>
void main()
{
int age;
char name[10];
float sal;
char gender;
char dob[9];
printf("\n my computer world");
printf("enter name\n");
gets(name);
printf("\n enter age\n");
scanf("%d",&age);
scanf(" %c",&gender);
scanf(" %s",dob);
scanf("%f",&sal);
printf("\n");
puts(name);
printf("\n age=%d,\n ,\n gender=%c,\ndob=%s,\nsal=%f",age,gender,dob,sal);
}
