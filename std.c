#include<stdio.h>
struct student
{
	int rollno,marks,age;
	char name[10];
}s;
void main()
{
	struct student st1,st2,st3;
	printf("\n student of first");
	gets(st1.name);
	printf("\n values of rollno,marks,age");
	scanf("%d%d%d",&st1.rollno,&st1.marks,&st1.age);
	printf("\n student of second");
	scanf("%s",st2.name);
	printf("\n value of rollno,marks,age");
	scanf("%d%d%d",&st2.rollno,&st2.marks,&st2.age);
 printf("\n first student details\n");
        puts(st1.name);
        printf(" %d\n %d\n %d ",st1.rollno,st1.marks,st1.age);

	printf("\n second student details");
	printf("\n %s",st2.name);

	printf("\n %d\n %d\n %d",st2.rollno,st2.marks,st2.age);
}
