#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - This frees up listint_t
 * @head: pointer to listint_t
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
