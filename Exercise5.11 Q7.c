//C primier plus Exercise5.11 Q7 

#include<stdio.h>

void cubic_calculator(double num)

int main(void)
{
	double num;
	
	printf("Insert the number:");
	scanf("%f",&num);
	printf("The number you insert is %f\n",num);
	
	cubic_calculator(num);
	
	//The printf function should not exist in main function
	
	return 0;
	
}

void cubic_calculator(double num)
{
	num=num*num*num;
	printf("The cubic of the number is:%f",num);
}

//There is some issue when this computer execute on value of the type 'double' It will show 0
//while there is no problem with float
