#include "lists.h"
/**
 * sum_listint - compute the sum of all elements in a linked list
 * @head: a pointer to the first node
 *
 * Return: the sun of all list elements or 0 if the list isn empty
 */

int sum_listint(listint_t *head)
{
	return (head ? head->n + sum_listint(head->next) : 0);
}
