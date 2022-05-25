/*
 * File: 1-list_len.c
 * Auth: joshua kenedinum
 */
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Finds the number of elements in
 *            a linked list_t list.
 * @h: The linked list_t list.
 *
 * Return: The number of elements in nw.
 */
size_t list_len(const list_t *h)
{
	size_t head = 0;

	while (h)
	{
		head++;
		h = h->next;
	}

	return (head);
}
