#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list
 * Return: number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t n;

	for (n = 0; h; n++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (n);
}
