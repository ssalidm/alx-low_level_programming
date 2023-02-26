#include "main.h"

/**
 * print_line - prints a straight line of '_' characters in the terminal
 *
 * @n: the number of times the '_' character should be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		if (n > 0)
		{
			putchar('_');
		}
		else
		{
			putchar('\n');
		}
		i++;
	}
	putchar('\n');
}
