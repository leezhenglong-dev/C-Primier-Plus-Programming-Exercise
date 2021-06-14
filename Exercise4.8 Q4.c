//C primier plus Exercise4.8 Q4

#include<stdio.h>
#define CONVERSION 100
int main(void)     

{
	char name[10];
	float height;
	
	printf("Key in your name and height(in cm)\n");
	scanf("%s %f",name,&height);
	
	printf("%s,you are %f meter tall",name,height/CONVERSION);
	
	return 0;
	
}
