// C Pirmier Plus Exercise6.16 Q12

#include<stdio.h> 

int main(void)

{
	//sequence_1
	printf("sequence_1\n\n");
	
	int selector;
	float denominator_1,limit_1,total_1,num_1;
	
	printf("Insert a limit for the for the frist array:");
	
	while(scanf("%f",&limit_1)==1)	// if ; is here and the user continue to key in 1, the while loop will be infinite
	{
		for(total_1=0,denominator_1=1.0;denominator_1<=limit_1;denominator_1++)
			{
				num_1=1.0/denominator_1;
				total_1+=num_1;
				printf("%f+",num_1);
			}	
		printf("=%f\n",total_1);	
	}
	
	fflush(stdin);
	
	//sequence_2
	printf("\nsequence_2\n\n");
	
	float denominator_2,limit_2,total_2,num_2,negative_determinor,negative_counter;
	
	printf("Insert a limit for the for the second array:");

	while(scanf("%f",&limit_2)==1)
	{
	
		for(total_2=0,denominator_2=1.0;denominator_2<=limit_2;denominator_2++)
			{
				
				for(negative_determinor=-1,negative_counter=1;negative_counter<=denominator_2;negative_determinor*=-1.,negative_counter++)
				;
				
			num_2=negative_determinor*1.0/denominator_2;
			total_2+=num_2;
			printf("%f+",num_2);
			}
		printf("=%f\n",total_2);
		
	}	
	
	//The sequence_2 will approach 7;
	
	return 0;
	
}
