// C Primier Plus Exercise8.11 Q8

#include<stdio.h>

float select_first_num();
float select_second_num();

int main(void)
{
	int count;
	char operation,clear;
	float num_1,num_2;
	
	//Section 1 : select the operation 
	choose_operation:
		
	for(count=0 ; count<=70 ; count++)
	printf("*");
		
	printf("\n");
		
	printf("Enter the operation of your choice:\n");
	printf("a)add \t\t s)subtract \nm)multiply \t d)divide\nq)quit\n\n");

	for(count=0 ; count<=70 ; count++)
	printf("*");
		
	printf("\n");
		
	scanf("%c",&operation);
	
	switch(operation)
	{
		case'a':
		{	
		num_1=select_first_num();
		num_2=select_second_num();
		printf(" %f + %f is %f\n",num_1, num_2, num_1+num_2);
		break;
		}
		
		case's':
		{
		num_1=select_first_num();
		num_2=select_second_num();	
		printf(" %f - %f is %f\n",num_1, num_2, num_1-num_2);
		break;
		}		
	
		case'm':
		{	
		num_1=select_first_num();
		num_2=select_second_num();
		printf(" %f * %f is %f\n",num_1, num_2, num_1*num_2);
		break;
		}

		case'd':
		{			
			num_1=select_first_num();
			num_2=select_second_num();
		
			while(num_2 == 0)
			{
			printf("please insert non-zero number for the divider:");
			scanf("%f",&num_2);
			printf("\n");
			continue;
			}
			
			printf(" %f / %f is %f\n",num_1, num_2, num_1/num_2);
			break;			
		}
		
		case'q':
		{
		printf("bye\n");
		goto end;
		}
			
		default:
		{
		printf("I don't understand!\n");
			while( (clear=getchar())!='\n')
			continue;
		goto choose_operation;
		}
	}
	
	while( (clear=getchar())!='\n')
	continue;
	
	goto choose_operation;
	
	end:
	return 0;

}

float select_first_num()
{	
	float num;
	int count;
	char clear;
	
	select_numbers:
	printf("Insert first number which you want to operate:");
	
	while( scanf("%f",&num) !=1)
	{
		printf("Please insert effective numbers!\n");
			while( (clear=getchar())!='\n')
			continue;
		goto select_numbers;	
				
	}

	return num;
}

float select_second_num()
{	
	float num;	
	int count;
	char clear;
	
	select_numbers:
	printf("Insert second number which you want to operate:");
	
	while( scanf("%f",&num) !=1)
	{
		printf("Please insert effective numbers!\n");
			while( (clear=getchar())!='\n')
			continue;
		goto select_numbers;		
	}

	return num;
}		
		
		
		
		
		
		
		
		
		
