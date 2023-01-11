#include<stdio.h>
struct student

{
	int rollno,marks,age;
char name[10];
}s;
void main()
{
struct student st1,st2;
printf("\n enter name of first student");
printf("\n enter name of second student");
gets(st1.name);
gets(st2.name);

printf("\n enter rollno marks age if first student");
printf("\n enter rollno marks age if second student");
scanf("%d%d%d",&st1.rollno,&st1.marks,&st1.age);
scanf("%d%d%d",&st2.rollno,&st2.marks,&st2.age);
printf("\nfirst student details");
printf("\n second student details");
puts(st1.name);
puts(st2.name);
printf("\n %d %d %d ",st1.rollno,st1.marks,st1.age);
printf("\n %d %d %d ",st2.rollno,st2.marks,st2.age);
}
