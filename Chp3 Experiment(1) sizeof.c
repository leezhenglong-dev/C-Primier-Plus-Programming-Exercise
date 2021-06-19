//C primier plus Chp3 Experiment(1) sizeof()

# include<stdio.h>

int main(void)

{
	printf("Type short          have size of : %zd bytes = %d bits.\n", sizeof(short), 8 * sizeof(short));
	printf("Type int            have size of : %zd bytes = %d bits.\n",sizeof(int),8*sizeof(int));
	printf("Type long           have size of : %zd bytes = %d bits.\n", sizeof(long), 8 * sizeof(long));
	printf("Type long long      have size of : %zd bytes = %d bits.\n", sizeof(long long), 8 * sizeof(long long));
	printf("Type char           have size of : %zd bytes = %d bits.\n", sizeof(char), 8 * sizeof(char));
	printf("Type float          have size of : %zd bytes = %d bits.\n", sizeof(float), 8 * sizeof(float));
	printf("Type double         have size of : %zd bytes = %d bits.\n", sizeof(double), 8 * sizeof(double));
	printf("Type long double    have size of : %zd bytes = %d bits.\n", sizeof(long double), 8 * sizeof(long double));
	
	return 0;
}


