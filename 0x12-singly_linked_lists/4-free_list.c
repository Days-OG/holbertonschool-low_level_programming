#include "list.h"
/**
 * free_list - a ñinked list
 * @head: the first list node
 */
void free_list(list_t *head)
{
if (!head)
return;
free_list(head->next);
free(head->str);
free(head);
}
