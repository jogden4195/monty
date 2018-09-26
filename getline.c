#include "monty.h"

/**
 * get_line - function to get lines from file. Calls a function that
 * tokenizes the line and then checks if arguments are in a struct of op codes
 * @filename: file to get lines from
 */
void get_line(const char *filename)
{
	ssize_t read;
	FILE *fptr;
	char *lineptr = NULL, **args;
	size_t len = 0;
	unsigned int line_count = 1;

	if (access(filename, F_OK) == -1)
	{
		fprintf(stderr, "Error: File <%p> does not exist.\n", filename); 
		exit(EXIT_FAILURE);
	}
	fptr = fopen(filename, O_RDONLY);
	if (!fptr)
	{
		fprintf(stderr, "Error: Can't open file <%p>\n", filename);
		exit(EXIT_FAILURE);
	}
	while ((read = getline(&lineptr, &len, fptr)) != -1)
	{
		args = tokenize(lineptr);
		get_ops(args, line_count);
		free(args);
		free(lineptr);
		line_count++;
	}
	fclose(fptr);
}
