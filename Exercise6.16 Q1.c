// C Primier Plus Execise6.16 Q1

#include<stdio.h>
int main(void)

{
	int index;
	char alphabet[26];
	
	printf("Insert 26 alphabet:");
	
	for(index=0;index<=25;index++)
		scanf("%c",&alphabet[index]);
	
	printf("The alphabet read are:");
	
	for(index=0;index<=25;index++)
	printf("%c",alphabet[index]);
	
	return 0;
	
}
	
