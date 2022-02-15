#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  this program assign a random number
 * Return: success(0)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n = n % 10;

	if (n == 0)
		printf("n is %d and is 0");
	else if (n > 5)
		printf("n is %d and is greater than 5", n);
	else
		printf("n is %d and is less than 6 and not 0", n);
	return (0);
}
