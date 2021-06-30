// C Primier Plus Exercise 8.11 Q6

#include<stdio.h>
#include<ctype.h>

char get_first(void);

int main(void)
{
	int return_ch;
	
	printf("Insert a row of char and I will return you the first char you insert:");
	
	printf("The first char you insert is %c ",return_ch=get_first() );
	
	return 0;
}

char get_first (void)
{
	char ch;
	ch=getchar();
	printf("\n");
	
	while( isspace(ch))
	ch=getchar();
	
	return ch;
}
	
	
	
	
	
	

