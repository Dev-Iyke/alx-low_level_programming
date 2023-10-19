#include "lists.h"

/**
 * add_node_end - function to add a new node at the end of a list
 * @head: pointer to the first node
 * @str: string
 * Return: address to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tempo;
	unsigned int i, counter = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		counter++;
	new->len = counter;
	new->next = NULL;
	tempo = *head;

	if (tempo == NULL)
		*head = new;
	else
	{
		while (tempo->next != NULL)
			tempo = tempo->next;
		tempo->next = new;
	}

	return (*head);
}

