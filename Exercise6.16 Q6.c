// C Primier Plus Exercise6.16 Q6

#include<stdio.h>

int main(void)
{
	int num,lower_limit, upper_limit ;
	
	printf("Insert the lower limit and the upper limit:") ;
	scanf("%d %d",&lower_limit, &upper_limit) ;
	
	for(num=lower_limit ; num<=upper_limit ; num++ )
		printf("%2d %10d %10d\n", num , num*num , num*num*num) ;
	
	return 0 ;
	
}
