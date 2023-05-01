#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to the head of the list
 * Return: the size of the list that was free'd
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
