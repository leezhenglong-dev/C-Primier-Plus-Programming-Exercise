// C Primier Plus Exercise9.11 Q4

#include<stdio.h>
float calc(float num_1, float num_2); // There is some issue on my computer when computing double type

int main(void)
{
	float num_1, num_2,result;
	
	printf("Enter two number:");
	scanf("%f %f",&num_1, &num_2);
	
	result=calc(num_1, num_2);
	
	printf("result=%f",result);
	
	return 0;
	

}
	
float calc(float num_1, float num_2)
{
	float mean;
	
	mean=1/( (1/num_1+1/num_2)/2);
	
	return mean;
}
	
	
	
