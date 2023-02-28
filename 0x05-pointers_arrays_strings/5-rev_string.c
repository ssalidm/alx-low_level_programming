#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string in place
 *
 * @s: Pointer to the string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
int len = strlen(s);
int i;

for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
