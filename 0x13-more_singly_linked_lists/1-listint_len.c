#include "lists.h"

/**
 * listint_len - Print number of elements in listint_t
 * @h = The pointer to the head
 * Return: Always 0
 */

size_t listint_len(const listint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len += 1;
		h = h->next;
	}
	return (len);
}
