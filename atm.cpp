#include<stdio.h>
#include<windows.h>
#include<time.h>
int main()
{
	system("color 9F");
	int pin=1234,option,enteredPin,count=0,amount=1;
	float balance=5000;
	int continueTransaction=1;
	time_t now;
	time(&now);
	printf("\n");
	printf("\t\t\t\t\t        %s",ctime(&now));
	printf("\n\t\t\t====================*WELCOME TO BVRITH ATM*====================");
	while(pin != enteredPin)
	{
		printf("\n Please enter your pin :");
		scanf("%d",&enteredPin);
		if(enteredPin != pin)
		{
			Beep(610,500);
			printf("Invalid pin!!!");
		}
		count++;
		if(count==3 && pin!=enteredPin)
		{
			exit(0);
		}
		
	}
    while(continueTransaction != 0)
    {
	
	
		printf("\n\t\t\t===================*AVAILABLE TRANSACTIONS*===================");
		printf("\n\n\t\t1.WITHDRAW");
		printf("\n\t\t2.DEPOSIT");
		printf("\n\t\t3.BANK BALANCE CHECK");
		printf("\n\n\t PLEASE SELECT OPTION:");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				while(amount % 500 != 0)
				{
					printf("\n\t\t ENTER AMOUNT:");
					scanf("%d",&amount);
					if(amount % 500 != 0)
					{
					printf("\n\t THE AMOUNT SHOULD BE MULTIPLE OF 500");
				}
				}
				if(balance<amount)
				{
					printf("\n\t SORRY!!! INSUFFICIENT BALANCE");
					amount=1;
					break;
				}
				else
				{
					balance -= amount;
					printf("\n\t\t YOU HAVE WITHDRAW RS.%d\n\t\tYOUR NEW BALANCE IS RS.%.2f",amount,balance);
					printf("\n\t\t\t=================THANK YOU DEAR CUSTOMER=================");
					amount=1;
					break;
				}
			case 2:
				printf("\n\t\t PLEASE ENTER AMOUNT:");
				scanf("%d",&amount);
				balance+=amount;
				printf("\n\t\t YOU HAVE DEPOSITED RS.%d\n\t\tYOUR NEW BALANCE IS RS.%.2f",amount,balance);
				printf("\n\t\t\t=================THANK YOU DEAR CUSTOMER=================");
				amount=1;
				break;
			case 3:
				printf("\n\t\tYOUR BALANCE IS Rs.%.2f",balance);
				break;
	        default:
	         	Beep(1000,500);
	        	printf("\n\t\t INVALID OPTION!!!!");
		}
		printf("\n\t\t DO YOU WISH TO PERFORM ANOTHER TRANSACTION?\n PRESS 1[YES],0[NO]");
		scanf("%d",&continueTransaction);
printf("\n\t\t\t====================THANK YOU !!! VISIT AGAIN!!!=====================");
	}
	return 0;
}