#include <stdio.h>
#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0.
*
* Return: void
*/

void times_table(void)
{
int i;
for (i = 0; i < 10; i++)
{
int j;
for (j = 0; j < 10; j++)
{
if (j == 9)
{
printf("%d\n", (i * j));
}
else
{
printf("%d, ", (i * j));
}
}
}
}
