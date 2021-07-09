// C Primier Plus Exercise9.11 Q10 to_base_n()

#include<stdio.h>
void to_base_n(int num,int base);

int main(void)
{
	int user,base_user;
	
	printf("Enter a num and the base you desired,while both bigger larger than 2 and smaller than 10:");
	
	while( scanf("%d %d",&user, &base_user)==2)
	{
		if(user>=2 && user<=10 && base_user>=2 && base_user<=10)
		{
		to_base_n(user,base_user);
		printf("\n");
		}
		
		else
		{
		printf("Enter in the correct way again!");
		continue;
		}
		
		printf("Enter a num and the base you desired(press q to qiut)");
	}
	
	return 0;
}

void to_base_n(int num, int base)
{
	int printnum;
	
	printnum=num%base;
	
	if(num>=base)
	to_base_n(num/base,base);
	
	printf("%d",printnum);
	
	return ;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
