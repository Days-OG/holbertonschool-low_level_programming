#include "lists.h"
/**
 * print_list - print list items
 * @h: the list to print
 *
 * Description: print each list items, prefixed by it's length
 * "[%d]%\n" if a list item is null
 *
 * Return: size of the list
 */
size_t print_list(const list_t *h)
{
if (h)
{
if (h->str)
printf("[%d] %s\n", h->len, h->str);
else
printf("[0] (nil)\n");
return (print_list(h->next) + 1);
}
return (0);
}
