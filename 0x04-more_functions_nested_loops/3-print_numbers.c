#include "main.h"

/**
 * print_numbers - print number 0 througgh 9
 * 
 *  Return: void
 */

void print_numbers(void)
{
char i;
for (i = '0'; i <= '9'; ++i)
{
_puthcar(i);
}
_putchar('\n');
}

