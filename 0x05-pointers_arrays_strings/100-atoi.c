#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: pointer to string
 * Return: the string converted to a number
 */

int _atoi(char *s)
{
	int i, signo = 1;
	unsigned int mult = 1, num = 0;
	char *tmpp;

	while (*s != '\0') /* Recorremos la cadena hasta encontrar un número */
	{
		if (*s == '+')
			signo *= 1;
		if (*s == '-')
			signo *= -1;

		if (*s < 58 && *s > 47)
			break;
		s++;
	}
	/* Guardamos la ubicación del caracter dónde se encontró un número*/
	tmpp = s;
	s++;

	/* Recorremos para saber la cant. de digitos y hacer Descomp. canónica*/
	while (*s != '\0' && *s != ' ')
	{
		mult *= 10;
		s++;
	}
	/* Multiplicamos el primer digito por mul y así sucesivamente*/
	for (i = 0; *tmpp != '\0'; mult /= 10)
	{
		num += (*tmpp - 48) * mult;
		tmpp++;
		i++;
	}

	if (signo < 0)
		return (num * -1);

	return (num);
}
