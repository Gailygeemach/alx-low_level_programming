#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len - A function that counts the number of unique
 * nodes in a looped listint_t linked list
 * @head: The pointer to the head
 * Return: The number of nodes otherwise return 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp, *curr;
	size_t nodes;

	nodes = 1;
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
 * print_listint_safe - A function that prints a listint_t list
 * @head: A pointer to the head
 * Return: The number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t y = looped_listint_len(head), index = 0;

	if (y == 0)
	{
		for (; head != NULL; y++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < y; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (y);
}
