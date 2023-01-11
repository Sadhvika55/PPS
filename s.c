#include<stdio.h>
int main()
{
	int operand1, operand2;
	char choice;
	printf("enter two operands");
	scanf("%d%d" ,&operand1,&operand2);
	printf("enter an operator");
       	scanf("%c",&choice);
	switch(choice)
	{
		case '+':printf("operand1+operand2=%d",operand1+operand2);
			 break;
		case '-':printf("operand1-operand2=%d",operand1-operand2);
			 break;
		case '*':printf("operand1*operand2=%d",operand1*operand2);
			 break;
		case'/' :printf("operand1/operand2=%d",operand1/operand2);
			 break;
		case'%' :printf("operand1%%operand2=%d",operand1%operand2);
			 break;
	}
	         return 0;
}



