#include "main.h"

/**
 * _isalpha - check if a character is alphabethical
 * @c: the character to check
 *
 * Retur: 1 if c is alphabethical
 * Otherwise 0.
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || ( c >= && c <= 'Z'))
{
return (1);
}
return (0);
}
