#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints a linked lists
 * @h: pointer to the first code
 *
 * Return:size of list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
