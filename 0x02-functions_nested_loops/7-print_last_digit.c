#include "main.h"

/**
* print_last_digit - prints the last digit of a number
*
* @num: number to print the last digit from
*
* Return: value of last digit
*/

int print_last_digit(int num)
{
int last_digit = (num % 10);
printf("%d", last_digit);
return (num % 10);
}
