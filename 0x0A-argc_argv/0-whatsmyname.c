#include <stdio.h>
#include "main.h"
/**
 *main - a program that prints its name
 *@argc: name of the function
 *@argv: array of the strings
 *
 *Return: 0(function success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

return (0);
}
