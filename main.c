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
	stack_t **head = stack;
	FILE *filenaame;

	if (argc > 2):
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	filename = argv[1];
	/**
	 * might have to change args passed into getline
	 * to include stack
	 */
	getline(filename);
}
