#include "main.h"

/**
 * print_last_digit - print the last digit of a integer
 * @n: the value to print the last digit of
 *
 * Return: the last digit of n
 */

int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = -1 * n;
}
_putchar('0' + n);
return (n);
}
