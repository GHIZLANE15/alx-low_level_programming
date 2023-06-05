#include "lists.h"

/**
 * print_listint - prints a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: size of list
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
