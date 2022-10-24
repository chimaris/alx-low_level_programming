#include "lists.h"

/**
 * add_nodeint - Add new element in the beginning of listint_t list
 * @head: The pointer to the head
 * @n: new element to add
 * Return: Address of new element else NULL;
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
