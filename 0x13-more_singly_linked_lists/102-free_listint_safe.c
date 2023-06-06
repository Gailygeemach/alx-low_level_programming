#include "lists.h"
#include <stdlib.h>

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);
/**
 * looped_listint_count - A function that counts the number of
 * unique nodesin a looped listint_t linked list.
 * @head: A pointer to the head
 * Return: The number of unique nodes otherwise return 0
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *temp, *curr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	temp = head->next;
	curr = (head->next)->next;
	while (curr)
	{
		if (temp == curr)
		{
			temp = head;
			while (temp != curr)
			{
				nodes++;
				temp = temp->next;
				curr = curr->next;
			}
			temp = temp->next;
			while (temp != curr)
			{
				nodes++;
				temp = temp->next;
			}
			return (nodes);
		}
		temp = temp->next;
		curr = (curr->next)->next;
	}
	return (0);
}
/**
 * free_listint_safe - A function that frees a listint_t list safely
 * @h: A pointer to the address of
 *     the head
 * Return: The size of the list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *str;
	size_t y = looped_listint_count(*h), index;

	if (y == 0)
	{
		for (; h != NULL && *h != NULL; y++)
		{
			str = (*h)->next;
			free(*h);
			*h = str;
		}
	}
	else
	{
		for (index = 0; index < y; index++)
		{
			str = (*h)->next;
			free(*h);
			*h = str;
		}
		*h = NULL;
	}
	h = NULL;
	return (y);
}
