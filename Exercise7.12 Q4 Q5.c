// C Primier Plus Exercise7.12 Q4

#include<stdio.h>
# define DOUBLE"!!"
int main(void)
{	
	//Q4 
	printf("Q4\n");
	
		char ch;
		
		while( (ch=getchar())!='#')
		{
			if( ch=='.')
			printf("%c",'!');
			
			else if(ch=='!')
			printf("%s",DOUBLE);
			
			else
			putchar(ch);
		}
	
	printf("\n");
	fflush(stdin);
	
	//Q5
	printf("Q5\n");
	
		while( (ch=getchar())!='#')
		{
			switch(ch)
			{
				case '.' :
				printf("%c",'!');
				break;
				
				case'!':
				printf("%s",DOUBLE);
				break;
				
				default:
				putchar(ch);
				break;
			}
				
		}
	
	return 0;
}
