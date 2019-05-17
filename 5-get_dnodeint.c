#include "lists.h"
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
