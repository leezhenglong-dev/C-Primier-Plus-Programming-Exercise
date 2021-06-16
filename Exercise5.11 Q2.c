#include <stdio.h>
int main(void)

{
	int num,determinar;
	
	printf("Enter a number:");
	scanf("%d",&num);
	determinar=num+10;
	printf("%d	",num);
	
	while(num++<determinar)
	/*let say num=10,when num=19,it pass through the while test then it increased by 1
	so that it printf 20 in the console*/
	
	printf("%d	",num);
	
	printf("\nthe end");
	
	return 0;
	
}
