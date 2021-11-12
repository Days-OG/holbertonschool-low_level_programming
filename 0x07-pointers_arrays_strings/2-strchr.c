#include "main.h"

/**
 * _strchr - locate character in string
 * @s: a pointer to the string to search
 * @c: the character to search for
 *
 * Return: if a match is found, return a pointer to it
 * otherwise, return NULL
 */

char *_strchr(char *s, char c)
{
for (; *s; ++s)
{
if (*s == c)
{
return (s);
}
}
return (*s == c ? s : NULL);
}
