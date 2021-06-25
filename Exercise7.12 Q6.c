// C Primier Plus Exercise7.17 Q6

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	char ch;
	bool prev=0;
	int count=0;
	
	while( (ch=getchar())!='#')
	{
		if(ch=='i')
		{
			if(prev==1)
			count++;
		}
		
		if (ch=='e')
		prev=1;
		
		else
		prev=0;
	
	}
	
	printf("%d",count);
	
	return 0;
	
}

