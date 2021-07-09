// C Primier Plus Exercise9.11 Q11 Fibonacci()

#include<stdio.h>

int main(void)
{
	int user,printFibo,prev,i;
	
	printf("Enter a term limit for the Fibonacci function:");
	scanf("%d",&user);
	
	if(user==1)
	printf("The Fibonacci sequence is %d",1);
	
	else if (user==2)
	printf("The Fibonacci sequence is %d %d",1,1);
	
	else
	{
		printf("The Fibonacci sequence is %d %d ",1,1);
		
		for(i=3,prev=1,printFibo=1;i<=user;i++)
		{
		printf("%d ",printFibo+=prev);
		prev=printFibo-prev;
		}	
	}
	
	return 0;
}


	
	
	
	
	
