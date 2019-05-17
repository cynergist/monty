#include "monty.h"
/**
 * get_opcode - Compares opcodes and calls correct
 * opcode function from opcode_funcs
 *
 * @s: the opcode
 * Return: 0
 */
void (*get_opcode(char *s))(stack_t **stack, unsigned int n)
{
	instruction_t opcodes[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
/*		{"swap", op_swap},
		{"add", op_add}, */
		{"nop", op_nop},
		{NULL, NULL}
	};
	int i = 0;

	while (opcodes[i].opcode)
	{
		if (strcmp(opcodes[i].opcode, s) == 0)
		{
			return (opcodes[i].f);
		}
		i++;
	}
/* Printing the stderr, required message, line_num, opcode */
	fprintf(stderr, "L%i: unknown instruction %s\n",
		global.line_num, s);
	clean(1);
	exit(EXIT_FAILURE);

	return (NULL);
}
