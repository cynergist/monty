#include "monty.h"

global_t global = GLOBAL_INIT;

/**
 * main - Reads opcodes from a file and implements them
 *
 *@argv: String of arguments
 *@argc: Number of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int o, r, i = 0;
	char *buffer;
	char **commandLines;

	if (argc < 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	global.bytefile = fopen(argv[1], "r");
	if (global.bytefile == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	commandLines = parser(buffer, "\n");
	while (commandLines[i] != NULL)
	{
		printf("before bridge call %d\n", i);
		printf("first bridge successful\n");
		bridge(commandLines[i], i + 1);
		printf("after bridge called %d\n", i);
		i++;
	}
	/*the print statment above was just a test to see if the
	file was being opened and the contents properly stored in
	the buffer. it was successful.
	the code to parse the contents of buffer and then
	feed that newly parsed string into the getfunc will go here.
	that will be the end of this main file*/
	free(commandLines);
	free(buffer);
	return (EXIT_SUCCESS);
}
