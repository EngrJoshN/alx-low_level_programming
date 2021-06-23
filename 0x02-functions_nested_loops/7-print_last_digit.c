#include "holberton.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
int digit;
digit = num % 10;

if (digit < 0)

{
_putchar(digit + '0');

return (digit);
}

else
{
_putchar(digit + '0');
 return (digit);
}
}
