#include "monty.h"
/**
*op_push- function that adds a node to the beginning of the list
*
*@head: pointer to the beginning of the list
*@n: data for the new node
*
*Return: address of the new node
*/
void op_push(stack_t **head, unsigned int n)
{
	if (!global.commands[1] || !numcheck(global.commands[1]))
	{
		fprintf(stderr, "L%d: usage: push integer\n", n);
		clean(1);
		exit(EXIT_FAILURE);
	}
	if (!add_dnodeint(head, atoi(global.commands[1])))
	{
		fprintf(stderr, "Error: malloc failed\n");
		clean(1);
		exit(EXIT_FAILURE);
	}
}
/**
*op_pall- print all elements of our doubly linked list
* @head: a pointer to the beginning of the list
*@n: data for the new node
* Return: number of nodes
*/
void op_pall(stack_t **head, __attribute__((unused)) unsigned int n)
{
	print_dlistint(*head);
}
/**
*op_pint - function to print the first node added
*
*@head: point to the beginning of the function
*@n: line number
*
*Return: void
*/
void op_pint(stack_t **head, unsigned int n)
{
	stack_t *temp;

	temp = get_dnodeint_at_index(*head, 0);
	if (temp)
	{
		printf("%d\n", temp->n);
	}
	else
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", n);
		clean(1);
		exit(EXIT_FAILURE);
	}
}
/**
*op_pop - function to delete node at the head
*
*@head: beginning of the list
*@n: line number
*
*Return: void
*/
void op_pop(stack_t **head, unsigned int n)
{
	stack_t *temp;


	temp = *head;
	if (!temp)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", n);
		clean(1);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (temp->next)
		{
			temp->next->prev = NULL;
			*head = temp->next;
		}
		else
		{
			*head = NULL;
		}
		free(temp);
	}
}

/**
*op_nop - function does nothing
*@head: beginning of the list
*@n: line number
*Return: void
*/
void op_nop(stack_t **head, unsigned int n)
{
	(void)*head;
	(void)n;
}
