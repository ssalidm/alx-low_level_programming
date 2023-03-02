#include "main.h"

/**
 * _strncpy - Copies a string, up to n bytes from src to dest
 *
 * @dest: Pointer to the destination string, which should be
 * large enough to hold the copied result
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to copy from src
 *
 * Return: Pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n; i++)
{
	if (src[i] != '\0')
	{
		dest[i] = src[i];
	}
	else
	{
		break;
	}
}
while (i < n)
{
	dest[i] = '\0';
	i++;
}

	return (dest);
}
