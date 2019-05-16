#include "monty.h"
/**
*op_push- function that adds a node to the beginning of the list
*
*@head: pointer to the beginning of the list
*@n: data for the new node
*
*Return: address of the new node
*/
stack_t *op_push(stack_t **head, unsigned int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		free(new);
		exit(EXIT_FAILURE);
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
*op_pall- 
