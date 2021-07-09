// C Primier Plus Exercise9.11 Q6

#include<stdio.h>
void compare(int *pnum_1, int *pnum_2, int *pnum_3);


int main(void)
{
	int num_1, num_2, num_3;
	printf("Insert three different num:");
	scanf("%d %d %d",&num_1, &num_2, &num_3);
	
	compare(&num_1, &num_2, &num_3);
	
	printf("The number arranged in ascending order are:%d %d %d",num_1,num_2,num_3);
}

void compare(int *pnum_1, int *pnum_2, int *pnum_3)
{
	int temp;
	
	if(*pnum_1>*pnum_2 && *pnum_1>*pnum_3)	//when num_1 is max
	{
		if(*pnum_2>*pnum_3)
		{
		temp=*pnum_1;
		*pnum_1=*pnum_3;
		*pnum_3=temp;
		}
		
		else
		{
		temp=*pnum_3;
		*pnum_3=*pnum_1;
		*pnum_1=*pnum_2;
		*pnum_2=temp;
		}
	}
	
	else if (*pnum_2>*pnum_1 && *pnum_2>*pnum_3)	//when num_2 is max
	{
		if(*pnum_1>*pnum_3)
		{
		temp=*pnum_3;
		*pnum_3=*pnum_2;
		*pnum_2=*pnum_1;
		*pnum_1=temp;
		
		}
		
		else
		{
		temp=*pnum_3;
		*pnum_3=*pnum_2;
		*pnum_2=temp;
		}		
	}
	
		else //when num_3 is max
	{
		if(*pnum_1>*pnum_2)
		{
		temp=*pnum_2;
		*pnum_2=*pnum_1;
		*pnum_1=temp;
		}
	}
}
	
	
	

