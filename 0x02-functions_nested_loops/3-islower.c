#include "main.h"

/**
 * _islwer - check if a character is lowercase
 * @c: the character to check
 *
 * Return: 1 if c is lowercase
 * Otherwise 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
