#include "lists.h"
#include <stdlib.h>

/**
 * find_listint_loop - A function that finds the loop contained in
 * a listint_t linked list
 * @head: A pointer
 * Return: The address of the node otherwise return NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp, *curr;

	if (head == NULL || head->next == NULL)
		return (NULL);
	temp = head->next;
	curr = (head->next)->next;
	while (curr)
	{
		if (temp == curr)
		{
			temp = head;
			while (temp != curr)
			{
				temp = temp->next;
				curr = curr->next;
			}
			return (temp);
		}
		temp = temp->next;
		curr = (curr->next)->next;
	}
	return (NULL);
}
