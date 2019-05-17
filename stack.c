#include "lists.h"
/**
*print_dlistint- function to print elements of list
*
*@h: pointer to the beginning of the list
*
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
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
/**
*get_dnodeint_at_index- funtion that returns node at given index
*
*@head: beginning of the list
*@index: position of node to be returned
*
*Return: node at nth position or NULL if fail
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	temp = head;
	for (i = 0; i < index; i++)
	{
		if (temp != NULL)
		{
			temp = temp->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (temp);
}
#include "lists.h"
/**
*dlistint_len- function that returns the number of elements in a list
*
*@h: pointer to the beginning of the list
*
*Return: number of elements in a list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
#include "lists.h"
/**
*free_dlistint- function that frees a list
*
*@head: beginning of the list
*
*Return: none, void type
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
