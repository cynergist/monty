#include "monty.h"
/**
 * bridge - gets parsed lines from main and calls get_opcode
 *
 * @command - our command such as push, pall
 */
void bridge(char *command)
{
/*	stack_t **head; */
	char **package;
	int i = 0;

	package = parser(command, " ");
	while (package[i] != NULL)
	{
		printf("bridge string %s\n", package[i]);
		i++;
	}
/*	get_opcode(package[0])(*head, package[1]); */
}
