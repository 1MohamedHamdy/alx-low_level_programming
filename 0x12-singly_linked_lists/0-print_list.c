#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t num_nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		num_nodes++;

	}
	return (num_nodes);
}
