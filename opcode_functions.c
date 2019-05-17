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
	if (!add_dnodeint(head, n))
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
