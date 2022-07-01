#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Determine if a random number is positive, negative or zero
 *Return: 0 on success
 */
int main(void)
{	int b

	srand(time(0));
	b = rand()- RAND_MAX / 2;

	if (b > 0)
		printf("%d is positive number\n",n);
	else if(b < 0)
		printf("%d is negative number\n",n);
	else
		printf("%d is zero\n",n);
	return (0);
}
