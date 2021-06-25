// C Primier Plus Exercise6.16 Q14

#include<stdio.h>

int main (void)

{
	int sequence_1[8], sequence_2[8],accumolator;
	int index;
	
	for(accumolator=0,index=0;index<=7;index++)
	{
		scanf("%d",&sequence_1[index]);
		accumolator+=sequence_1[index];
		
		sequence_2[index] = accumolator;
	}
	
	for(index=0;index<=7;index++)
		printf("%5d",sequence_1[index]);
		
	printf("\n");
		
	for(index=0;index<=7;index++)
		printf("%5d",sequence_2[index]);
	
	return 0;
	
}

