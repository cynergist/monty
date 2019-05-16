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
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		free(new);
		exit(EXIT_FAILURE);
	}
	printf("opcodes may be problem\n");
	new->n = n;
	printf("before hello\n");
	new->next = *head;
	printf("hello\n");
/*	new->prev = NULL; */
	printf("created first node\n");
	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head = new;
}
/**
*op_pall- print all elements of our doubly linked list
* @head: a pointer to the beginning of the list
*
* Return: number of nodes
*/
void op_pall(stack_t **head, unsigned int n)
{
	int i = 0;
	stack_t *temp = *head;

	(void)n;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
}
