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
	int mul;

	mul = atoi(argv[1]) * atoi(argv[2]);

	if (argc == 3)
	{
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
