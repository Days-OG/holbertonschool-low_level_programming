#include "main.h"

/**
 * _isspace - check if a character is whitespace
 * @c: the character to check
 *
 * Return: 1 is c is a whitespace character, otherwise 0
 */

int _isspace(int c)
{
if (c == 0x20 || (c >= 0x09 && c <= 0x0d))
{
return (1);
}
return (0);
}
