#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - A function that deletes the head node on a linked list
 * @head: The pointer
 * Return: The head node's data otherwise return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	ptr = *head;
	if (ptr == NULL)
		return (0);
	*head = ptr->next;
	n = ptr->n;
	free(ptr);
	return (n);
}
