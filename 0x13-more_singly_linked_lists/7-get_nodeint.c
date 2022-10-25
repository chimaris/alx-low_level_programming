#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @head: The pointer to the head
 * @index: index of the node, starting at 0
 * Return: Return nth node else Null
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	node = 0;
	while (node < index)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		node++;
	}
	return (head);
}
