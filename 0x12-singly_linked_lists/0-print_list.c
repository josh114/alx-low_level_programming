/*
 * File: 0-print_list.c
 * Auth: Joshua kenedinum
 */

#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in nw.
 */

size_t print_list(const list_t *nw)
{
	size_t node = 0;

	while (nw)
	{
		if (nw->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", nw->len, nw->str);

		node++;
		nw = nw->next;
	}

	return (node);
}
