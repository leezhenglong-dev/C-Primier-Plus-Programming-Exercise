// Cperimier plus Exercise4.8 Q5
 
#include<stdio.h>
int main (void)

{
	float speed,size;
	
	printf("Insert the download speed and the size of the files:");
	scanf("%f %f",&speed,&size);
	
	printf("At %.2fmegabits per second, a file of %.2megabytes\n",speed,size);
	printf("downloads in %.2f seconds.",(size*8)/speed);
	
	return 0;
}

