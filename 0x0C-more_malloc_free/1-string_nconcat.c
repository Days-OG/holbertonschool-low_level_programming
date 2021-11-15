#include "main.h"

/**
 * string_nconcat - concatenate two string
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes to use from s2
 *
 * Description: copy s1 followed by the first n bytes of s2 into dynamically
 * allocated memory and append a terminating null-byte. if n is greater than
 * or equal to the lengtth of the string s2, use only the bytes from s2 up to
 * it's terminating null-byte treat NULL as an empty string
 *
 * Return: if memory allocatinon fails, return NULL otherwise return a pointer
 * to the first character of the new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *cat;
unsigned int s1_len = 0;
unsigned int s2 len = 0;
if (s1)
{
while (s1[s1_len])
{
++s1_len;
}
}
if (s2)
{
while (s2_len < n && s2[s2_len])
{
++s2_len;
}
}
cat = malloc(sizeof(char) * s1_len + s2_len + 1);
if (!cat)
{
return (NULL);
}
for (n = 0; n < s1_len; ++n, ++cat)
{
*cat = s1[n];
}
for (n = 0; n < s2_len; ++n, ++cat)
{
*cat = s2[n];
}
*cat = '\0';
return (cat - s1_len - s2_len);
}
