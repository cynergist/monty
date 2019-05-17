#include "monty.h"
/**
*reader- function to get input from main
*
*Return: 0
*/
void reader(void)
{
	ssize_t readbytes;
	size_t n = 0;
	void (*action)(stack_t **, unsigned int);

	while (1)
	{
		readbytes = getline(&global.line, &n, global.bytefile);
		if (readbytes == -1)
		{
			break;
		}
/* This ensures that getline will count even blank, tabbed, etc. lines */
		global.line_num++;

		global.commands = parser(global.line, " \t\n");
		if (global.commands[0])
		{
			action = get_opcode(global.commands[0]);
			action(&global.stack, global.line_num);
		}
		clean(0);
	}
}
