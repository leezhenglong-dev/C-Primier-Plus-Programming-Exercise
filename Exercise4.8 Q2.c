// C prrimier plus Exercise4.8 Q2

 #include<stdio.h>
 #include<string.h>
 
 int main(void)
 
 {
 	char name[40],sirname[40];
 	
 	printf("Insert your name sirname:\n");
 	scanf("%s%s",name, sirname);
 	printf("\n");
 	
 	
 	printf("Your name and sirname is:\"%s%s\"\n",name,sirname);
 	printf("Your name and sirname is:\"%*s%s\"\n",20-strlen(sirname),name,sirname);
 	printf("Your name and sirname is:\"%s%-*s\"\n",name,20-strlen(name),sirname);
 	printf("Your name and sirname is:\"%*s%s\"\n",(strlen(name)+strlen(sirname)+3)-strlen(sirname),name,sirname);
 	//reconmmeded no space between two %s
 	
 	return 0; 
 	
 }
