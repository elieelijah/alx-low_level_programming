#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node, *current_node;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);

		return (1);
	}

	prev_node = *head;
	current_node = prev_node->next;

	for (i = 1; i < index && current_node != NULL; i++)
	{
		prev_node = current_node;
		currrent_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	prev_node->next = current_node->next;
	free(current_node);

	return (1);
}
