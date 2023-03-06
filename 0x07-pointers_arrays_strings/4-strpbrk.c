#include "main.h"

/**
 * _strpbrk - locates the first occurrence of a
 * byte from `accept` in the string `s`
 * @s: the string to search
 * @accept: the set of bytes to look for
 *
 * Return: a pointer to the byte in `s` that
 * matches one of the bytes in `accept`,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
			while (*a != '\0')
			{
				if (*s == *a)
				{
					return (s);
				}
				a++;
			}
			s++;
	}
	return (NULL);
}
