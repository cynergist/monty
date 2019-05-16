#include "monty.h"
/**
 * get_opcode - Compares opcodes and calls correct
 * opcode function from opcode_funcs
 *
 * @s: the opcode
 * @num: function name
 * Return: 0
 */
void (*get_opcode(char *s))(stack_t **stack, unsigned int n)
{

	instruction_t opcodes[] = {
		{"push", op_push},
		{"pall", op_pall},
		{NULL, NULL}
	};
	int i = 0;
	stack_s *head = NULL;

	while (opcodes[i].opcode)
	{
		if (strcmp(opcodes[i].opcode, s) == 0)
		{
			printf("found a match %s\n", s);
			opcodes[i].f(&stack, line_number);
		}
		else
		{
			printf("either no match was found or the two functions are not linking");
		}
		i++;
	}
	return (NULL);
}
