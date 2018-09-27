#include "monty.h"

/**
 * get_line - function to get lines from file. Calls a function that
 * tokenizes the line and then checks if arguments are in a struct of op codes
 * @stack: stack we are editing
 * @filename: file to get lines from
 */
void get_line(stack_t **stack, const char *filename)
{
	ssize_t read;
	FILE *fptr;
	char *lineptr = NULL;
	size_t len = 0;
	unsigned int line_count = 0;

	fptr = fopen(filename, "r");
	if (!fptr)
	{
		fprintf(stderr, "Error: Can't open file %p\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&lineptr, &len, fptr)) != -1)
	{
		line_count++;
		if (read == 1)
			continue;
		tokenize(lineptr);
		get_ops(stack, line_count);
		free(array);
	}
	fclose(fptr);
}
