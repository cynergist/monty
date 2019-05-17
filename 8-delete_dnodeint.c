#include "lists.h"

/**
*delete_dnodeint_at_index- function to delete a node at given index
*
*@head: pointer to the beginning of a list
*@index: position to be deleted
*
*Return: 1 on success, -1 on fail
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp, *temp2;

	temp = *head;
	if (*head == NULL)
	{
		return (-1);
	}
	for (i = 0; i < index; i++)
	{
		temp2 = temp;
		if (temp != NULL)
		{
			temp = temp->next;
		}
		else
		{
			return (-1);
		}
	}
	if (index == 0)
	{
		*head = temp->next;
	}
	else if (temp->next != NULL)
	{
		temp2->next = temp->next;
		temp2->prev = temp->prev;
	}
	else
	{
		temp2->next = NULL;
		temp2->prev = temp->prev;
	}
	free(temp);
	return (1);
}
