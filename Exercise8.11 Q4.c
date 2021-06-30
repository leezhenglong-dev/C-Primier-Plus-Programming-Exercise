// C Primier Plus Exercise8.11 Q4

#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>

float calc_word(float user);
void calc_mean(float ch, float word);

int main(void)
{
	float user,ch=0,word;
	
	while( (user=getchar()) != '\n') // ? cant use EOF otherwise it will never stop
	{
		if( !isspace(user))
		ch++;
		
		word=calc_word(user);	
	}
	
	printf("There are %f word and %f char\n",word,ch);
	
	calc_mean(ch,word);

	return 0;
	
}

float calc_word(float user)
{
	bool inword; // do not initialize inword here otherwise it will initialize everytime enter this func()
	float word;
	
	if( !isspace(user) && !inword)
	{
		inword=true; 
		word++;
	}
	
	if( isspace(user) && inword)
	inword=false;
	
	return word;
}

void calc_mean(float ch, float word)
{
	float mean;
	
	mean=ch/word;
	
	printf("Mean char per word is %f",mean);
}















