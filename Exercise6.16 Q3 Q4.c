// C Primier Plus Exercise6.16 Q3 Q4

#include<stdio.h>
int main (void)

{
		
	char lets[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	//this row create an array  which contents alphabet in capital letter
	//it is not necessary,this method using here is only for presentation purpose 
	//just in case any system which doesn't using ASCII
		
	// Q3 method 1 (using 'row' and 'word_per_row' two counter)(more variables but high readablity)
	printf("Q3 method 1\n");
 
	
		int row,word_per_row;
		char first_char=lets[5];
		
		for(row=1;first_char =lets[5],row<=6;row++)	//first_char is initialized as F for every iteration
		// or initialize row as 0 then make the test statement be row < 6 
		{
			for(word_per_row=1;word_per_row<=row;word_per_row++,first_char--)
			printf("%c",first_char);
			
			printf("\n");
		}
		
		
	// Q3 method 2 (using 'row' single counter)(less variables but low readablity)
	printf("\nQ3 method 2\n");

		for(row=1;row<=6;row++)	//first_char is initialized as F for every iteration
		// or initialize row as 0 then make the test statement be row < 6 
		{
			for(first_char='F';first_char>'F'-row;first_char--)
			printf("%c",first_char);
			
			printf("\n");
		}
	
	printf("\nQ4\n");
	
	//Q4
	
		first_char=lets[0];
		
		for(row=1;row<=6;row++)	
		{
			for(word_per_row=1;word_per_row<=row;word_per_row++,first_char++)
			printf("%c",first_char);
			
			printf("\n");
		}
	
}
