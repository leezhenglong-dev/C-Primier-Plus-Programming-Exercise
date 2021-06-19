// C primier plus Exercise 2.12 Q8
//function in function

#include <stdio.h>
 
void two(void)
{
	printf("two\n\n");
}

void one_three(void)
{
	printf("one\n\n");
	
	two();

	printf("three\n\n");

}



int main(void)
{
	printf("starting now:\n\n");

	one_three();

	printf("done!");

	return 0;
}
