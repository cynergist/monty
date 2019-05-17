#include "lists.h"

/**
*add_dnodeint- function that add a new node at the beginning of a list
*
*@head: pointer to the beginning of a list.
*@n: new data for the new node
*
*Return: address of new element or NULL if fail
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
	return (*head);
}
