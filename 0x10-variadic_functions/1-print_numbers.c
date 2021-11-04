#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *print_numbers - function that prints numbers
 *@separator: char separator
 *@n: num of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

		va_list parametros;

		va_start(parametros, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(parametros, int));
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
		va_end(parametros);
		printf("\n");
}
