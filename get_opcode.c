#include "monty.h"
/**
 * get_opcode - Compares opcodes and calls correct
 * opcode function from opcode_funcs
 *
 * @s: the opcode
 * @num: function name
 * Return: 0
 */
int (*get_opcode(char *s))(int)
{
	instruction_t instruction_s [] = {
		{"push", op_push},
		{NULL, NULL}
	};
	int i = 0;

	while (instruction_s[i].instruction_s)
	{
		if (strcmp(instruction_s[i].opcode, s) == 0)
		{
			return (instruction_s[i].f);
		}
		i++;
	}
	return (NULL);
}
