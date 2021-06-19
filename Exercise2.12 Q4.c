//C primier plus Exercise 2.12 
// create an own function

#include <stdio.h>

// The declaration of the function must be on top of the main function (in DevC++ and Visual Studio )

void jolly(void)   //create the own function : jolly
{
	printf("For he's  jolly good fellow !\n\n");
}

void deny(void)
{
	printf("Which nobody can deny!");
}

int main(void)

{
	jolly();
	jolly();
	jolly();

	deny();

	getchar();

	return 0;
}
