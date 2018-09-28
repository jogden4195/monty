#include "monty.h"

/**
 * get_line - function to get lines from file. Calls a function that
 * tokenizes the line and then checks if arguments are in a struct of op codes
 * @stack: stack we are editing
 * @filename: file to get lines from
 */
void get_line(stack_t **stack, const char *filename)
{
	size_t len = 0;
	int err_flag;
	unsigned int line_count = 0;

	element_t.lineptr = NULL;

	element_t.fptr = fopen(filename, "r");
	if (!element_t.fptr)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	while (getline(&element_t.lineptr, &len, element_t.fptr) != -1)
	{
		line_count++;
		tokenize(element_t.lineptr);
		if (element_t.str == NULL)
			continue;

		err_flag = get_ops(stack, line_count);
		if (err_flag == 0)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n",
line_count, element_t.str);
			free_stack(stack);
			fclose(element_t.fptr);
			free(element_t.lineptr);
			exit(EXIT_FAILURE);
		}
	}
	free(element_t.lineptr);
	free_stack(stack);
	fclose(element_t.fptr);
}
