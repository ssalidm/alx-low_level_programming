#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 *
 * @dest: Pointer to the destination string, which should be large enough
 *        to hold the concatenated result
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	int i = 0;

	while (i < n && src[i] != 0)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';

	return (dest);
}
