#include "monty.h"

/**
 * main - does stuff
 * @argc: the number of arguments being passed in
 * @argv: an array of arguments passed
 *
 * Return: none
 */

int main(int argc, char **argv)
{
	stack_t *stack = NULL;
	const char *filename;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	filename = argv[1];
	get_line(&stack, filename);
	free_stack(&stack);
	return (EXIT_SUCCESS);
}
