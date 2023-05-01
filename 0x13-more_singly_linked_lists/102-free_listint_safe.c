#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list with a loop
 * @h: Pointer to pointer to the head of the list
 *
 * Return: The size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		tmp = current;
		current = current->next;
		free(tmp);

		if (tmp < current)
			break;
	}

	*h = NULL;
	return (count);
}
