#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - A function that reverses a linked list
 * @head: The pointer
 * Return: A pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *j;
	listint_t *z;

	j = NULL;
	z = NULL;
	while (*head != NULL)
	{
		z = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = z;
	}
	*head = j;
	return (*head);
}
