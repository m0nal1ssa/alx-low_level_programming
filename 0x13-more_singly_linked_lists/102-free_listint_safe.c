#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - This frees a listint_t linked list.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = *h;
	while (current != NULL)
	{
		count++;
		/* Save next pointer before you free current node */
		temp = current->next;

		/* Set the current node's next to NULL */
		current->next = NULL;

		/* Free up the current node */
		free(current);

		/* Move to the next node */
		current = temp;

		/* If theres a repeation, break the loop */
		if (current == *h)
		{
			/* Set head to NULL to show the list is freed */
			*h = NULL;
			break;
		}
	}

	return (count);
}
