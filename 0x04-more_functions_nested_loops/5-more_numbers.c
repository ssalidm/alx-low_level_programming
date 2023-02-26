#include "main.h"

/**
 * more_numbers - prints the numbers 0 to 14
 * ten times followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j > 9)
			{
				putchar((j / 10) + '0');
			}
			putchar(j % 10 + '0');
			j++;
		}
		putchar('\n');
		i++;
	}
}
