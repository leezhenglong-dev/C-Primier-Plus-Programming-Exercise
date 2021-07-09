// C Primier Plus Exercise9.11 Q8

#include<stdio.h>

float power(float num, int power);

int main(void)
{
	float user,ans;
	int negative_power;
	
	printf("Insert the number and the negative power");
	
	while( scanf("%f %d",&user, &negative_power)==2)
	{
		ans=power(user, negative_power);
		
		printf("The power -%d of the num %f is %f\n",negative_power, user, ans);
		
		printf("Insert the number and the negative power or press q to leave");	
	}
}
	
float power(float num, int power)
{
	int i;
	float answer=1;

	if(power==0)
	return 1;
	
	else if(num==0)
	return 0;
	
	else
	{
		for( i=1; i<=power;	i++)
		answer=answer*(1.0/num);
	
		return answer;
}
}
