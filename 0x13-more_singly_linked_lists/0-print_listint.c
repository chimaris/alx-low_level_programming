#include "lists.h"

/**
 * print_listint - Print elements in listint_t
 * @h: The pointer to the head
 * Return: The number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		len += 1;
		h = h->next;
	}
	return (len);
}
