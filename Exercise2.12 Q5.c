//C primier plus Exercise 2.12 Q5

#include <stdio.h>

void br(void)
{
	printf("Brazil, Russia");
}

void ic(void)
{
	printf("India, China");
}

int main(void)
{
	br();   // ';' should be after the fucntion identifier;
	printf(", ");
	ic();
	printf("\n\n");

	ic();
	printf(", ");
	printf("\n\n");

	br();

	return 0 ;

}
