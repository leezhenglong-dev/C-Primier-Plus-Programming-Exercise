// C Primier Plus Exercise7.12 Q11

#include<stdio.h>

int main(void)
{
	const float PRICE_ARTICHOKE=2.05;
	const float PRICE_BEETROOT=1.15;
	const float PRICE_CARROT=1.09;
	const int OFFER_MIN=100;
	const float OFFER=0.05;
	const int WEIGHT_BREAK_1=5;
	const int WEIGHT_BREAK_2=20;
	const float SHIPPING_FEE_BELOW_5=6.5;
	const float SHIPPING_FEE_BETWEEN_5_20=14;
	const float SHIPPING_FEE_ADDITION_PER_1=0.5;
	
	char item;
	
	int weight_artichoke,weight_beetroot, weight_carrot;
	int total_weight_artichoke=0,total_weight_beetroot=0,total_weight_carrot=0,total_weight=0;
	
	float gross_price, discounted, offered_price;
	float shipping_fee;
	
	printf("select the vege you need(Q to quit):\n");
	printf("A.artichoke\t B.beetroot\t C.carrot\n");
	scanf("%c",&item);
		
	do
	{
		switch(item)
		{
			case'A':
			{
				printf("Insert the weight you need:");
				scanf("%d",&weight_artichoke);
				total_weight_artichoke+=weight_artichoke;
				break;
			}
			
			case'B':
			{
				printf("Insert the weight you need:");
				scanf("%d",&weight_beetroot);
				total_weight_beetroot+=weight_beetroot;
				break;
			}
			
			case'C':
			{
				printf("Insert the weight you need:");
				scanf("%d",&weight_carrot);
				total_weight_carrot+=weight_carrot;
				break;
			}
			
			case'Q':
			goto makesure;
			
			default:
			{
				printf("error!\n");
				break;
			}
		}	
		
		printf("Enter the alphabet again to add on the vege:");
		fflush(stdin);
		
	} while( (scanf("%c",&item))==1);
	
	
	makesure:
	printf("You have selected %d of artichoke, %d of beetroot, %d of carrot\n",
	total_weight_artichoke, total_weight_beetroot, total_weight_carrot);
	
	gross_price = total_weight_artichoke*PRICE_ARTICHOKE+total_weight_beetroot*PRICE_BEETROOT+total_weight_carrot*PRICE_CARROT;
	
	if(gross_price>=OFFER_MIN)
	{
		discounted=gross_price*OFFER;
		offered_price=gross_price - discounted ;
	}
	
	else
	offered_price=gross_price;
	
	total_weight=total_weight_artichoke+total_weight_beetroot+total_weight_carrot;

	if(total_weight<=WEIGHT_BREAK_1)
	shipping_fee=SHIPPING_FEE_BELOW_5;
	
	else if(total_weight<=WEIGHT_BREAK_2)
	shipping_fee=SHIPPING_FEE_BETWEEN_5_20;
	
	else
	shipping_fee=SHIPPING_FEE_BETWEEN_5_20 + (total_weight-WEIGHT_BREAK_2)*SHIPPING_FEE_ADDITION_PER_1;
	
	printf("The vege total weight=%d\n",total_weight);
	printf("Gross price=%f\n",gross_price);
	printf("Offer=%f\n",discounted);
	printf("shipping fee=%f\n",shipping_fee);
	printf("net price=%f",offered_price+shipping_fee);
	
	return 0;
}

















