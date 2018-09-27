#include "monty.h"

/**
 * get_line - function to get lines from file. Calls a function that
 * tokenizes the line and then checks if arguments are in a struct of op codes
 * @filename: file to get lines from
 */
void get_line(stack_t **stack, const char *filename)
{
	ssize_t read;
	FILE *fptr;
	char *lineptr = NULL;
	size_t len = 0;
	int i = 0;
	unsigned int line_count = 1;

	if (access(filename, F_OK) == -1)
	{
		fprintf(stderr, "Error: File <%p> does not exist.\n", filename); 
		exit(EXIT_FAILURE);
	}
	fptr = fopen(filename, "r");
	if (!fptr)
	{
		fprintf(stderr, "Error: Can't open file <%p>\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&lineptr, &len, fptr)) != -1)
	{
		array = tokenize(lineptr);
		get_ops(stack, line_count);
		free(array);
		line_count++;
	}
	fclose(fptr);
}
