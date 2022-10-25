#include "lists.h"

/**
 * sum_listint - returns the sum of all the data(n) of list
 * @head: The pointer to the head
 * Return: Return total sum
 */

int sum_listint(listint_t *head)
{
	int total;

	total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
