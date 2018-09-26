#include "monty.h"

/**
 * get_line - function to get lines from file. Calls a function that
 * tokenizes the line and then checks if arguments are in a struct of op codes
 * @filename: file to get lines from
 */
void get_line(FILE *filename)
{
	ssize_t read;
	FILE *fptr;
	char *lineptr = NULL, **args;
	size_t len = 0;
	unsigned int line_count = 1;

	if (access(filename) == -1)
	{
		fprintf(stderr, "Error: File <%p> does not exist.\n", filename); 
		exit(EXIT_FAILURE);
	}
	fptr = open(filename, "r");
	if (!fptr)
	{
		fprintf(stderr, "Error: Can't open file <%p>\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&lineptr, &len, fptr)) != -1)
	{
		*args = tokenize(read);
		get_ops(*head, *args, line_count);
		free(args);
		free(read);
		line_count++;
	}
	close(filename);
}
