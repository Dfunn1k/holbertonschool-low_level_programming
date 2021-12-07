#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - keygen
 * Return: success
 */
int main(void)
{
	int value;
	int number;
	while (value < 2772)
	{
		srand(time(0) + value);
		number = (rand() % (122 - 48)) + 48;
		if ((value + number) <= 2772)
		{
			printf("%c", number);
			value = value + number;
		}
		else
			break;
	}
	if (value < 2772)
	{
		number = 2772 - value;
		printf("%c", number);
	}
	return (0);
}
