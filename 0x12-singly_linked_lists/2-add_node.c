#include "lists.h"

/**
 * add_node - function to add a new node at the beginning of a list
 * @head: pointer to the first node
 * @str: string
 * Return: address to new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i, counter = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		counter++;
	new->len = counter;
	new->next = *head;
	*head = new;

	return (*head);
}
