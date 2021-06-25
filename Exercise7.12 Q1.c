// C Primier Plus Exercise7.12 Q1

#include<stdio.h>
#define SPACE ' '
#define ENTER'\n'

int main(void)

{
	char ch;
	int char_count,enter_count,space_count;
	ch=char_count=enter_count=space_count=0;
	
	printf("Enter a paragraph:");
	
	while(( ch=getchar() )!='#')
	{
		if(ch==ENTER)
		enter_count++;
		
		else if(ch==SPACE||ch=='\t')
		space_count++;
		
		else
		char_count++;
	
	}
	
	printf("The no.of char=%d, no.of space=%d, no. of enter=%d",char_count,space_count,enter_count);
	
	return 0;
}
