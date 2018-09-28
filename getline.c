#include "monty.h"

/**
 * get_line - function to get lines from file. Calls a function that
 * tokenizes the line and then checks if arguments are in a struct of op codes
 * @stack: stack we are editing
 * @filename: file to get lines from
 */
void get_line(stack_t **stack, const char *filename)
{
	FILE *fptr;
	char *lineptr = NULL;
	size_t len = 0;
	int err_flag;
	unsigned int line_count = 0;

	fptr = fopen(filename, "r");
	if (!fptr)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while (getline(&lineptr, &len, fptr) != -1)
	{
		line_count++;
		if (*lineptr == '\n')
			continue;
		tokenize(lineptr);
		err_flag = get_ops(stack, line_count);
		if (err_flag == 0)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n",
line_count, element_t.str);
			free_stack(stack);
			fclose(fptr);
			free(lineptr);
			exit(EXIT_FAILURE);
		}
	}
	free(lineptr);
	free_stack(stack);
	fclose(fptr);
}
