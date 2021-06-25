// C Primier Plus Exercise7.17 Q7

#include<stdio.h>
# define OT_LINE 40
# define SALARY_PER_HOUR 1000
# define RATE_OF_OT 1.5
# define MONEY_BREAK_300 300
# define MONEY_ADDITION_150 150
# define MONEY_BREAK_450 450
# define RATE_OF_TAX_BELOW_300 0.15
# define RATE_OF_TAX_ADDITION_150 0.2
# define RATE_OF_TAX_REST 0.25

int main(void)
{
	int hour=0,ot_hour=0;
	float money=0,tax=0,net=0;
	
	printf("Insert your work hour:");
	scanf("%d",&hour);
	
	if(hour<=OT_LINE)
		money=hour*SALARY_PER_HOUR;

	else
		money=OT_LINE*SALARY_PER_HOUR + (hour-OT_LINE)*SALARY_PER_HOUR*RATE_OF_OT;
		
	if(money<=MONEY_BREAK_300)
		tax=money*RATE_OF_TAX_BELOW_300;
		
	else if(money<=MONEY_BREAK_450)
		tax=MONEY_BREAK_300*RATE_OF_TAX_BELOW_300 + (money-MONEY_BREAK_300)*RATE_OF_TAX_ADDITION_150;
	
	else
		tax=MONEY_BREAK_300*RATE_OF_TAX_BELOW_300 + MONEY_ADDITION_150*RATE_OF_TAX_ADDITION_150 + (money-MONEY_BREAK_450)*RATE_OF_TAX_REST;
	
	net=money-tax;
	
	printf(" Your work hour is %d and the money is %f ,the tax is %f, the net money is %f",hour, money, tax, net);
	
	return 0;
	
}
