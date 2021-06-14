//C primier plus Exercise5.11 Q1

#include<stdio.h>
#define SECOND_PER_MIN 60

int main (void)

{
	int seconds, min;
	
	printf("Enter the time in seconds:");
	scanf("%d",&seconds);	//scanf will jump to next line automatically,\n is not necessary 
	
	while(seconds>0)
		{
		min=seconds/SECOND_PER_MIN;
		seconds=seconds%SECOND_PER_MIN;
		printf("The time is %dmin %dseconds\n\n",min,seconds);
		
		printf("Enter the time in seconds:");
		scanf("%d",&seconds);
		}
	
	printf("error");
	
	return 0;
	
		
}
