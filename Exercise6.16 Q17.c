// C Primier Plus Exercise6.16 Q17

#include<stdio.h>
#define MONEY_SUBTRACTED 100000

int main(void)

{
	float money=1000000;
	int year ;
	
	for(year=0 ; money>=0 ; year++ )
		money=money*1.08-MONEY_SUBTRACTED;
		
	printf("After %d year,he has no money",year);
	
	// 21 year
	
}

