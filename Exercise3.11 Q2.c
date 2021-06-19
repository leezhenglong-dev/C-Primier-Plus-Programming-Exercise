// C primier plus Exercise3.11 Q2

#include<stdio.h>

int main(void)

{
	int code;

	printf("Insert a ASCII code from(0-255):");
	scanf_s("%d", &code);  //compiler suggest using scanf_s() instead of scanf()
	printf("\n");

	printf("The code you insert represent %c in ASCII code.\n", code);

	return 0;

}
