#include <stdio.h>
#include <stdlib.h>
/**
 *main - print the result of the multiplication
 *@argc: contain the number of the arguments
 *@argv: array the strings
 *
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int mul, i;

	mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
