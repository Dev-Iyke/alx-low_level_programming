#include "lists.h"

/**
 * add_nodeint - function to add an element to the beginning of a linked list
 * @head: head of new list maybe. lol
 * @n: nodes
 * Return: a new linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_n;

	if (head == NULL)
		return (NULL);

	new_n = malloc(sizeof(listint_t));
	if (new_n == NULL)
		return (NULL);
	if (*head == NULL)
		new_n->next = NULL;
	else
		new_n->next = *head;
	new_n->n = n;
	*head = new_n;

	return (*head);
}
