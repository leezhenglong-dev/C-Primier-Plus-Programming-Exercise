// C Primier Plus Exercise8.11 Q2

#include<stdio.h>

int main(void)
{
	int ch;
	
	while( scanf("%c",&ch) != EOF)
	{
		if(ch>=64)
		printf("%4d\n",ch);
		
		else if(ch>=0 && ch<=63)
		printf("CTRL+%d",ch+64);
		
		else
		printf("error");
		
		while( (getchar()) !='\n')
		continue;
	}
	
	return 0;
	
}
