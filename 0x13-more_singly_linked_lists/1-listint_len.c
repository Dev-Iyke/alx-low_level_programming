#include "lists.h"

/**
 * listint_len - function to print the number of elements in a linked list
 * @h: head of the list
 * Return: the number of element
 */

size_t listint_len(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		h = h->next;
	}
	return (counter);
}
