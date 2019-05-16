#include "monty.h"
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
	int o, r;
	char *buffer; 

	if (argc < 2)
	{
		printf("USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	buffer = malloc(sizeof(char)* 100);
	if (buffer == NULL)
	{
		free(buffer);
		return (EXIT_FAILURE);
	}
	/* come back to see how to read to EOF no matter the size*/
	r = read(o, buffer, 100);
	if (r == -1)
	{
		printf("Error: Unable to read file %s", argv[1]);
		return(EXIT_FAILURE);
	}
	printf("%s", buffer);
	/*the print statment above was just a test to see if the 
	file was being opened and the contents properly stored in 
	the buffer. it was successful.
	the code to parse the contents of buffer and then
	feed that newly parsed string into the getfunc will go here.
	that will be the end of this main file*/
	free(buffer);
	return (EXIT_SUCCESS);
}
