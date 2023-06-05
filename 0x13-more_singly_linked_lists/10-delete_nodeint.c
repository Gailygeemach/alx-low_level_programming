#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - A function that deletes
 * the node at a given index
 * @head: The pointer
 * @index: The index of the node
 * Return: 1 (success) otherwise return -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int z;
	listint_t *prev;
	listint_t *next;

	prev = *head;
	if (index != 0)
	{
		for (z = 0; z < index - 1 && prev != NULL; z++)
		{
			prev = prev->next;
		}
	}
	if (prev == NULL || (prev->next == NULL && index != 0))
	{
		return (-1);
	}
	next = prev->next;
	if (index != 0)
	{
		prev->next = next->next;
		free(next);
	}
	else
	{
		free(prev);
		*head  =next;
	}
	return (1);
}
