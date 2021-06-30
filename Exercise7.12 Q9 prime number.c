// C Primier Plus Exercise7.12 Q9 prime number 

#include<stdio.h>
#include<stdbool.h>

int main(void)
{
	int user,num,div;
	bool is_prime;
	
	printf("Insert a limit :");
	scanf("%d",&user);
	
	for(num=2 ; num<=user ; num++)
	{		
		for(div=2, is_prime=true ; is_prime==true&&div<num ; div++)
		{
			if(num%div==0)
			is_prime=false;
		}
		
		if(is_prime==true)
		printf("%3d",num);
	}
	
	return 0; 
}
