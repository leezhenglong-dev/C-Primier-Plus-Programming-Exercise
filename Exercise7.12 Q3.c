// C Primier Plus Exercise7.17 Q3

#include<stdio.h>

int main (void)

{
	int user[20],mean_of_even, mean_of_odd, total_of_even, total_of_odd;
	mean_of_even=mean_of_odd=total_of_even=total_of_odd=0;
	
	int counter=0, counter_max=0;
	int count_of_even=0,count_of_odd=0;

	printf("Insert number:");
	scanf("%d",&user[counter]);
	
	while(user[counter]!=0)
	{
		if(user[counter]%2==0)
		{
			count_of_even++;
			total_of_even+=user[counter];
			mean_of_even=total_of_even/count_of_even;
		}
		
		else
		{
			count_of_odd++;	
			total_of_odd+=user[counter];	
			mean_of_odd=total_of_odd/count_of_odd;
		}
		
		counter++;
		printf("Insert another number:");
		scanf("%d",&user[counter]);
	}
	
	counter_max=counter;
	printf("The numbers you insert are:");
	
	for( counter=0 ; counter<=counter_max ; counter++)
	{
		printf("%3d",user[counter]);
	}
	printf("\n");
	
	printf("There are %d even numbers and %d odd numbers\n",count_of_even, count_of_odd);
	printf("The mean of the even numbers are:%d and the mean of the odd numbers are:%d",mean_of_even, mean_of_odd);
	
	return 0;

}
