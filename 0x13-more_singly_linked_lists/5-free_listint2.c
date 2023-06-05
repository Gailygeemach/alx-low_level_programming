#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - A function that frees a listint_t list
 * @head: The pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *opt;

	if (head == NULL)
		return;
	while (*head)
	{
		opt = *head;
		*head = (*head)->next;
		free(opt);
	}
	head = NULL;
}
