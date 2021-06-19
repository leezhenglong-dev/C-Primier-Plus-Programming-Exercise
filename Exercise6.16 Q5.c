// C Primier Plus Exercise6.16 Q5

#include<stdio.h>
int main(void)

{
	char user,first_char,last_char=0;
	int row, char_per_row;
	
	printf("Insert a char");
	scanf("%c",&user);
	
	for(first_char='A',row=1;last_char<user;row++)
	{
	
		for(first_char='A',char_per_row=1 ; char_per_row<=row ; char_per_row++,first_char++)
			printf("%c",first_char);
			
		last_char= --first_char;
		
		
		for(;first_char>'A';)
			printf("%c",--first_char);
			
		printf("\n\n");
	}
	
	return 0;
	
		
}
