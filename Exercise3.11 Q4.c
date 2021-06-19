// C primier plus  Exercise3.11 Q4

#include<stdio.h>
int main(void)

{
	float f;

	printf("enter a floating-value:");
	scanf_s("%f", &f);
	printf("\n\n");

	printf("fixed-point notation: %f\n", f);
	printf("exponential notation: %e\n", f);
	printf("p notation: %a\n", f);

	return 0;

}
