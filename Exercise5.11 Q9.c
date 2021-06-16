// C Primier Plus Exercise5.11 Q9

#include<stdio.h>

//There is some issue for this compiler when proceed the type 'double'
//so all the double is exchanged by float

void Temperature(float temperature);

int main(void)
{
	float temperature;
	int test;
	
	printf("Insert temperature in Fahrenheit:");
	test=scanf("%f",&temperature);
	
	while(test==1)	//use == instead of = to compare the test and 1 to get the truth number of the statement
	{
		Temperature(temperature);
		printf("Insert another temperature:");
		test=scanf("%f",&temperature);
	}
	
	printf("done");
	
	return 0;
}


void Temperature(float temperature)
{
	float celcius,kelvin;
	const float CORRECTION_TO_KELVIN=273.16;
	const float CORRECTION_TO_CELSIUS=32;
	
	celcius=5.0/9.0*(temperature-CORRECTION_TO_CELSIUS);
	kelvin=temperature+CORRECTION_TO_KELVIN;
	
	printf("The temperature in Fahrenheit is:%f\n",temperature);
	printf("The temperature in Celcius is %f\n",celcius);
	printf("The temperature in Kelvin is %f\n",kelvin);
	
}
