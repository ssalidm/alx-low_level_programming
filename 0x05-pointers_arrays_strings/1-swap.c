#include "main.h"

/**
* swap_int - swaps the values of two integers.
* @a: pointer to the first int to be swapped
* @b: pointer to second int to be swapped
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
