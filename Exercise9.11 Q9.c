// C Primier Plus Exercise9.11 Q9

#include<stdio.h>

float power(float num, int pow);

int main(void)
{
	float user,ans;
	int negative_power;
	
	printf("Insert the number and the negative power");
	
	while( scanf("%f %d",&user, &negative_power)==2)
	{
		ans=power(user,negative_power);
		
		printf("The power -%d of the num %f is %f\n",negative_power, user, ans);
		
		printf("Insert the number and the negative power or press q to leave");	
	}
}
	
float power(float num, int pow)
{	
	float answer=1;

	if(pow==0)
	return 1;
	
	else if(num==0)
	return 0;
	
	else if(pow==1)
	{
	printf("Now the num is %f,the power is %d\n",num,pow);
	return 1.0/num;
	}
	
	else
	{
	printf("Now the num is %f,the power is %d\n",num,pow);
	answer=power(num,pow-1);	//recursion
	answer=(1.0/num)*answer;
	return answer;
	}
}
