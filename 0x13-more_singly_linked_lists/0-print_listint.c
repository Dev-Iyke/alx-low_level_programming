 #include "lists.h"

/**
 * print_listint - function to print each item in a list
 * @h: head of the list elements
 * Return: the nunber of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter;

	if (h == NULL)
		return (0);
	for (counter = 0; h != NULL; counter++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (counter);
}
