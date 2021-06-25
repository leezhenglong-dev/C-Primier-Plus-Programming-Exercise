// C Primier Plus Exercise6.16 Q18

#include <stdio.h>
# define DUNBARS_NUMBER 150

int main(void)

{
	int friend_initial=5,week;
	
	for(week=1 ; friend_initial<=DUNBARS_NUMBER ; week++ )
	{
		friend_initial=2*(friend_initial-week);
		printf("His friends are %d on %d week\n\n",friend_initial,week);
	}
	
	return 0;
	
	//??  The last line in the console should be avoid
	
}
