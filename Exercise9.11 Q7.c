// C Primier Plus Exercise9.11 Q7 

#include<stdio.h>

int detchar(char ch);

int main(void)
{
	char user;
	
	printf("Enter a char:");
	
	while( (user=getchar())!='\n')
	{	
		if( user>='A'&& user<='z') // In the ASCII,uppercase is lower than lowercase
		{
		printf("It is char:%c;",user);
		printf("It number is : %d\n",detchar(user));
		}
		
		else 
		printf("It is not a char\n");		
	}
	
	return 0;
}

int  detchar( char ch)
{
	if( ch>='a' && ch<='z')
	return ch-'a'+1;
	
	else if ( ch>='A' && ch<='Z')
	return ch-'A'+1;
	
	else 
	printf("error");
}
	
	
	
	
	
	
	
	
