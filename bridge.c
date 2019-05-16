#include "monty.h"
/**
 * bridge - gets parsed lines from main and calls get_opcode
 *
 * @command - our command such as push, pall
 */
void bridge(char *command, int c)
{
	stack_t **head; 
	char **package;
	int i = 0;
	void (*action)(stack_t **, unsigned int);

	head = NULL;
	package = parser(command, " ");
	while (package[i] != NULL)
	{
		printf("bridge string %s\n", package[i]);
		i++;
	}
	action = get_opcode(package[0]);
	printf("")
	action(head, c); 
}
