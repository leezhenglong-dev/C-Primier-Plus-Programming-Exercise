// C primier plus Exercise4.8 Q8

#include<stdio.h>
#define CONVERSION_TO_KM 1.609
#define CONVERSION_TO_LITRE 3.785
int main (void)

{
	float gallon,mile;
	
	printf("Insert gallon and mile:\n");
	scanf("%f %f",&gallon,&mile);
	
	printf("miles/gallon=%.1f\n",mile/gallon);
	printf("litre/km=%.1f",(gallon*CONVERSION_TO_LITRE)/((mile*CONVERSION_TO_KM)*100));
	
	return 0;
	
}
