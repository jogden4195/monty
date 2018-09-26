#include "monty.h"

/**
 * main - does stuff
 * @argc: the number of arguments being passed in
 * @argv: an array of arguments passed
 *
 * Return: none
 */

void main(int argc, char **argv)
{
	stack_t *stack = NULL;
	const char *filename;

	if (argc > 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	filename = argv[1];
	get_line(filename);
	exit(EXIT_SUCCESS);
}
