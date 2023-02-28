#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 *
 * @str: Pointer to the string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else
	{
		i = (len - 1) / 2;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}

