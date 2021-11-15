#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: the string to search
 * @accept: the byte to match
 *
 * Return: pointer to the byte in s that matches one of the bytes in
 * accept or NULL if no such byte
 */

char *_strpbrk(char *s, char *accept)
{
char *accept_pos;

for (; *s; ++s)
{
for (accept_pos = accept; *accept_pos; ++accept_pos)
{
if (*s == *accept_pos)
return (s);
}
}
return (NULL);
}
