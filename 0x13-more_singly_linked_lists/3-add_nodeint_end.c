#include "lists.h"

/**
 * add_nodeint_end - Add new element at the end of listint_t list
 * @head: The pointer to the head
 * @n: new element to add
 * Return: Address of new element else NULL;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	return (new_node);
}
