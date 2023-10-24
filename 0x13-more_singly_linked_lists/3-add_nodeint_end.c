#include "lists.h"

/**
 * add_nodeint_end - function to add an element to the end of a linked list
 * @head: head of new list maybe. lol
 * @n: nodes
 * Return: a new linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_n;
	listint_t *tmp;

	(void)tmp;

	last_n = malloc(sizeof(listint_t));

	if (last_n == NULL)
		return (NULL);
	last_n->n = n;
	last_n->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = last_n;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = last_n;
	}

	return (*head);
}
