//C Primier Plus Exercise5.11 Q5 modified :compound interest calculator 

#include<stdio.h>
int main(void)

{
	char start,start_over;
	float initial_money,money_added,total_money,year,interest;
	int count_year=0;
	
	//This section enable user whether to use this calculator or not
	printf("Press y to use compound interest calculator or press n to quit:");
	scanf("%c",&start);
	
	//calculator  
	while(start='Y')
	{
	
		printf("Key in your initial money,money added,year,interest:");
		scanf("%f %f %f %f",&initial_money,&money_added,&year,&interest);
	
		//first year
		total_money=initial_money*interest;
	
		count_year++;
		printf("year %d,your money is %f\n",count_year,total_money);
	
		//following years
		while(count_year++<year)
			{
				total_money=total_money*interest+money_added*interest;
				printf("year %d,your money is %f\n",count_year,total_money);
			}
		
		//This section enable user to repeat the function or not
		printf("Press y to continue using compound interest calculator or press n to quit:");
		scanf("%c",&start_over); // ?? this step is skip in the console
		start=start_over;
	}
	
	// end
	printf("Thank you");
	
	
}
