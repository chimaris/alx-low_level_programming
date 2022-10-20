#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: the head of the node
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	int length = 0;

	if (h == NULL)
		printf("[0] (nil)\n");
	while (h != NULL)
	{
		printf("%d %s\n", h->len, h->str);

		length++;
		h = h->next;
	}
	return (length);
}
