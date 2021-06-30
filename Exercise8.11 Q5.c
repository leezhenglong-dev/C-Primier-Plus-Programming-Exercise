// C Primier Plus Exercise8.11 Q5

#include<stdio.h>

int main(void)
{

	int guest=50;
	char user,tips;	
	char clear;

	const int MAX=100;
	const int MIN=0;
	int max=MAX,min=MIN;
	
	printf("I guess the magic number is %d,is it?\n",guest);
	printf("If I correct then you key in y,otherwise you key in n\n");
	scanf("%c",&user);
		while( (clear=getchar())!='\n')
		continue;
	 
	determine_user : switch(user)
	{
		case'y':
		{
		printf("I win!");
		break;
		}

		case'n':
		{	
			printf("If it is bigger then you key in B otherwise key in S\n");
			tips=getchar();
				while( (clear=getchar())!='\n')
				continue;

				determine_tips : switch(tips)
				{
					case'S':
					{
					min=guest;
					guest=(max+min)/2;
					break;
					}
						
					case'B':
					{
					max=guest;
					guest=(max+min)/2;
					break;
					}	
							
					default:
					{
					printf("I can't understand,please insert an effective char B or S\n");
					scanf("%c",&tips);
						while( (clear=getchar())!='\n')
						continue;
					goto determine_tips;
					}			
				}
								
			printf("I guess the magic number is %d,is it?\n",guest);
			printf("If I correct then you key in y,otherwise you key in n\n");
			scanf("%c",&user);
				while( (clear=getchar())!='\n')
				continue;
			goto determine_user;		
		}
			
		default:
		{
		printf("I can't understand,please insert an effective char y or n:");
		scanf("%c",&user);
		printf("\n");
			while( (clear=getchar())!='\n')
			continue;
		goto determine_user;	
		}
	}
	
	return 0;

}















