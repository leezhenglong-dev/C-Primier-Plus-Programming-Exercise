// C Primier Plus Exercise7.12 Q8

#include<stdio.h>
# define OT_LINE 40
# define RATE_OF_OT 1.5
# define MONEY_BREAK_300 300
# define MONEY_ADDITION_150 150
# define MONEY_BREAK_450 450
# define RATE_OF_TAX_BELOW_300 0.15
# define RATE_OF_TAX_ADDITION_150 0.2
# define RATE_OF_TAX_REST 0.25

int main(void)
{
	int selection,count,hour=0,ot_hour=0;
	float salary_per_hour,money=0,tax=0,net=0;
	
	//Section 1 : select the salary rate
	insert_salary_per_hour:
	{
		for(count=0 ; count<=70 ; count++)
		printf("*");
		
		printf("\n");
		
		printf("Enter the number corresponding to the desired pay rate or action:\n");
		printf("1)$8.75/hr\t\t2)$9.33/hr\n3)$10.00/hr\t\t4)$11.20/hr\n5)quit\n\n");

		for(count=0 ; count<=70 ; count++)
		printf("*");
		
		printf("\n");
		
		scanf("%d",&selection);

	}
	
	// Section 2.1 : If the user key in the effective selection, start to calculate the salary
	if(selection>=1 && selection <=4)
	{
		// Swicth section : Setting the salary rate to the calculator
		switch(selection)
		{
			case 1:
			{
			salary_per_hour=8.75;
			break;
			}
			
			case 2:
			{
			salary_per_hour=9.33;
			break;
			}
			
			case 3:
			{
			salary_per_hour=10.00;
			break;
			}
					
			case 4:
			{
			salary_per_hour=11.20;
			break;
			}	
		}
		printf("Your salary rate is:%.2f\n\n",salary_per_hour);
		
		//Section 4 :Insert the work hour
		printf("Insert your work hour:");
		scanf("%d",&hour);
		
		//Section 5 : Calculate the money
		if(hour<=OT_LINE)
			money=hour*salary_per_hour;
	
		else
			money=OT_LINE*salary_per_hour + (hour-OT_LINE)*salary_per_hour*RATE_OF_OT;
		
		//Section 6 : Calculate the tax
		if(money<=MONEY_BREAK_300)
			tax=money*RATE_OF_TAX_BELOW_300;
			
		else if(money<=MONEY_BREAK_450)
			tax=MONEY_BREAK_300*RATE_OF_TAX_BELOW_300 + (money-MONEY_BREAK_300)*RATE_OF_TAX_ADDITION_150;
		
		else
			tax=MONEY_BREAK_300*RATE_OF_TAX_BELOW_300 + MONEY_ADDITION_150*RATE_OF_TAX_ADDITION_150 + (money-MONEY_BREAK_450)*RATE_OF_TAX_REST;
		
		net=money-tax;
		
		printf(" Your work hour is %d and the money is %f ,the tax is %f, the net money is %f",hour, money, tax, net);
	}
	
	// Section 2.2 : If the user choose to quit, then quit
	else if (selection==5)
	printf("quit");

	// Section 2.3 : If the user key in an error selection, it start over	
	else
	{
		printf("Please enter the corect selection");
		fflush(stdin);
		goto insert_salary_per_hour;
	}
	
	return 0;
	
}
