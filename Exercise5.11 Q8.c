//C Primier Plus Exercise5.11 Q8

#include<stdio.h>
int main (void)

{
	int first_integer, second_integer=0, answer;
	
	printf("This program computes moduli:");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d",&second_integer);
	
	
	// ?? This section is skipped in the console for some unknowm reason
	printf("Now enter the first operand:");
	scanf("&d",&first_integer);
	
	while(first_integer>0)
	{
		answer=first_integer%second_integer;
		printf("%d %% %d is %d",first_integer,second_integer,answer);
		
		printf("Enter the next number for first operand(<=0 to quit):");
		scanf("%d",&first_integer);
		
	}
	
	printf("done");
	
	return 0;
		
}
