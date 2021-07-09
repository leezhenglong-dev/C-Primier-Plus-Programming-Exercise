// C Primier Plus Exercise9.11 Q3

#include<stdio.h>

void print(char, int, int);

int main(void)
{
	int row;
	int char_per_line;
	char ch;
	
	printf("Enter a char:");
	scanf("%c",&ch);
	
	printf("Enter char_per_line:");
	scanf("%d",&char_per_line);
	
	printf("Enter row:"); 
	scanf("%d",&row);
	
	print(ch,char_per_line,row);
	
	return 0;
	
}

void print(char ch, int char_per_line, int row)
{
	int n,m;
	
	for(n=1;n<=row; n++)
	{
		for( m=1; m<=char_per_line ; m++)
		{
			printf("%c",ch);
		}
		
		printf("\n");	
	}
	
}
	
	
	
	
	
	
	
	
	
	
	

