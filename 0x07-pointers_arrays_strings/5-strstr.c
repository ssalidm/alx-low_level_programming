#include <stdlib.h>
#include "main.h"

/**
 * _strstr - finds the first occurrence of
 * a substring `needle` in a string `haystack`
 * @haystack: the string to search
 * @needle: the substring to look for
 *
 * Return: a pointer to the beginning of the
 * located substring in `haystack`,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
