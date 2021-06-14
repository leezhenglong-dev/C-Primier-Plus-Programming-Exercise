// C primier plus Exercise4.8 Q6

#include<stdio.h>
#include<string.h>
int main(void)

{
	char name[10],sirname[10];
	
	printf("Key in your name and sirname:\n");
	scanf("%s%s",name,sirname);
	printf("\n");
	
	printf("%s %s\n",name,sirname);
	printf("%*d %*d",strlen(name),strlen(name),strlen(sirname),strlen(sirname));
	
	
	return 0;
	
	
}
