/*
 * File: 2-add_node.c
 * Auth: Joshua kenedinum
 */

#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *bup;
	int i;
	list_t *nw;

	nw = malloc(sizeof(list_t));
	if (nw == NULL)
		return (NULL);

	bup = strdup(str);
	if (bup == NULL)
	{
		free(nw);
		return (NULL);
	}

	for (i = 0; str[i];)
		i++;

	nw->str = bup;
	nw->len = i;
	nw->next = *head;

	*head = nw;

	return (nw);
}
