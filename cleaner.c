#include "monty.h"
void clean(int everything)
{
	if (global.line)
	{
		free(global.line);
		global.line = NULL;
		free(global.commands);
		global.commands = NULL;
	}
	if (everything)
	{
		free_dlistint(global.stack);
		global.stack = NULL;
		fclose(global.bytefile);
		global.bytefile = NULL;
	}
	
}
