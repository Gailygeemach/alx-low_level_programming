#include "lists.h"
/**
 * sum_listint - A function that returns the sum of all the data
 * @head: The pointer
 * Return: The sum of all the data otherwise return 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head  != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
