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
	newStrings = malloc(sizeof(char *) * 3);
	if (newStrings == NULL)
	{
/* Clean(1) means clean all variables calling malloc and closes file pointer */
		clean(1);
		exit(EXIT_FAILURE);
	}
/* Ensuring newStrings at 1 is initialized to be NULL */
	newStrings[1] = NULL;
	newStrings[2] = NULL;
	while (token && i < 2)
	{
		newStrings[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	newStrings[i] = NULL;
	return (newStrings);
}
/**
*numcheck - function checks for valid num
*
*@s: string
*
*Return: True or false
*/
int numcheck(char *s)
{
	int i = 0;

	if (s[i] == '-' || s[i] == '+')
		i++;

	while (s[i])
	{
		if (!isdigit(s[i]))
			return (0);
		i++;
	}
	return (1);
}
