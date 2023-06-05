#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - A function that that frees a listint_t list
 * @head: The pointer
 */
void free_listint(listint_t *head)
{
	listint_t *opt;

	while (head)
	{
		opt = head->next;
		free(head);
		head = opt;
	}
}
