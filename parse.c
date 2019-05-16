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
	newStrings = malloc(sizeof(char *) * 32);
	if (newStrings == NULL)
	{
		free(newStrings);
		return (0);
	}
		while(token)
	{
		newStrings[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	newStrings[i] = NULL;
	return (newStrings);
}
