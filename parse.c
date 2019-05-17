#include "monty.h"
/**
*parser- function used to parse input into desired strings
*
*@buffer: input to be parsed
*@delim: delimiter used to determine the stopping point
*
*Return: pointer to an arrary of strings created
*/
char **parser(char *buffer, char *delim)
{
	char *token;
	char **newStrings;
	int i = 0;

	token = strtok(buffer, delim);
	newStrings = malloc(sizeof(char *) * 2);
	if (newStrings == NULL)
	{
/* Clean(1) means clean all variables calling malloc and closes file pointer */
		clean(1);
		exit(EXIT_FAILURE);
	}
/* Ensuring newStrings at 1 is initialized to be NULL */
	newStrings[1] = NULL;
	while(token && i < 2)
	{
		newStrings[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	newStrings[i] = NULL;
	return (newStrings);
}
