#include "monty.h"
/**
*reader- function to get input from main
*
*Return: 0
*/
int reader()
{
	ssize_t readbytes;
	size_t n = 0;

	while (1)
	{
		readbytes = getline(&global.line, &n, global.bytefile);
		if (readbytes == -1)
		{
			break;
		}
		global.commands = parser(global.line, " \t\n");
	}
}
