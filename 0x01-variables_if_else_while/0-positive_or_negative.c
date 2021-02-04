#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
*generate a random number af said if negative or positive
*/
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
