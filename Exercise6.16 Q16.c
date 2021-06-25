// C Pirmier Plus Exercise6.16 Q16

#include<stdio.h>

int main(void)

{
	int year;
	double Daphne_total,Daphne_initial=100, Deirdre=100;
	
	Daphne_total=Daphne_initial;
	
	for(year=1; Daphne_total>=Deirdre ; year++)
	{
		Daphne_total+=Daphne_initial*0.1;
		Deirdre+=Deirdre*0.05;
	}
	
	printf("In year %d, Daphne=%f, Deirdre=%f",--year,Daphne_total,Deirdre);
	
	return 0;
	
}
