#include "lists.h"
/**
 * free_listint - define function
 * @head: describe argument
 */
void free_listint(listint_t *head)
{
	listint_t *nodes;

	while ((nodes = head) != NULL)
	{
		head = head->next;
		free(nodes);
	}
}
