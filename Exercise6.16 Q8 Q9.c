// C Primier Plus Exercise6.16 Q8 Q9

#include<stdio.h>
#include<math.h>

float math_part (float num_1, float num_2) ; // stand by for Q9

int main(void)

{
	float num_1, num_2, num_3, num_4;
	
	// Q8
	printf("Q8\n");
	
		printf("Insert two num(insert non digit to esc):");
		
		while(scanf("%f %f",&num_1,&num_2)==2)
		{
			printf("The result is : %f\n",fabs(num_1-num_2)/(num_1*num_2));
	
			printf("Insert two num(insert non digit to esc):");
		}
	
		printf("Thank you for using this function\n");
		
		fflush(stdin); 
		//if user key in non-digit to quit Q8 part, the non-digit will remain in the buffer and effect the scanf in Q9 (line34)
		//the fflush() func will clear the buffer 
		
	// Q9 
	printf("Q9\n");
		printf("Insert two num(insert non digit to esc):");
		
		while(scanf("%f %f",&num_3,&num_4)==2) 
		{
			printf("The result is %f",math_part(num_3, num_4));
	
			printf("Insert two num(insert non digit to esc):");
		}
	
		printf("Thank you for using this function\n");
		
	return 0;
	
}

// working for Q9 onlu
float math_part (float num_3, float num_4) 
{
	float result;
	
	result=fabs(num_3-num_4)/(num_3*num_4);
	
	return result;
	
}





