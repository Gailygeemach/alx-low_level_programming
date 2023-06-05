#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - A function that inserts
 * a new node at a given position
 * @head: The pointer
 * @idx: The index of the list
 * @n: The integer for the new node
 * Return: The address of the new node otherwise return NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int z;
	listint_t *new;
	listint_t *y;

	y = *head;
	if (idx != 0)
	{
		for (z = 0; z < idx - 1 && y != NULL; z++)
		{
			y = y->next;
		}
	}
	if (y == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = y->next;
		y->next = new;
	}
	return (new);
}
