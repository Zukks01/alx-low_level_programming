#include "lists.h"
/**
 * add_nodeint - a function that adds a new node
 * @head: current place in the list
 * @n: n element.
 * Return: pointer to current position in list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
