#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - A function that adds a node at the end of a linked list
 * @head: The pointer
 * @n: The integer
 * Return: The address of the new element otherwise return NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	else
		return (NULL);
	if (ptr != NULL)
	{
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new_node;
	}
	else
		*head = new_node;
	return (new_node);
}
