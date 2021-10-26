#include <stdio.h>
#include "main.h"
/**
 *main - display all arguments it receives
 *@argc: contain the number of arguments
 *@argv: an array of the arguments
 *
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
return (0);
}
