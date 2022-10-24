#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: Pointer to head list
 * Return: return head node else 0;
 */

int pop_listint(listint_t **head)
{
	listint_t *x;
	int headNode;

	if (*head == NULL)
		return (0);
	if (*head)
	{
		x = (*head);
		headNode = (*head)->n;
		(*head) = (*head)->next;
		free(x);
	}

	return (headNode);
}
