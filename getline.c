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

	fptr = open(filename, "r");
	if (!fptr)
		exit(EXIT_FAILURE);
	while ((read = getline(&lineptr, &len, fptr)) != -1)
	{
		*args = tokenize(read);
		get_ops(*args);
		free(args);
		free(read);
	}
}
