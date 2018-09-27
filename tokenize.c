#include "monty.h"

/**
 * arg_count - number of tokens from getline
 * @str: string to count number of tokens
 * Return: number of tokens
 */
int arg_count(char *str)
{
	int word_count = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			word_count++;
		i++;
	}
	return (word_count);
}
/**
 * tokenize - function to get tokens from string
 * and store in an array
 * @str: string to tokenize
 * Return: array
 */
void tokenize(char *str)
{
	int i = 1, words;

	words = arg_count(str);
	if (words > 0)
	{
		array = malloc(sizeof(char *) * (words + 1));
		if (!array)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		array[0] = strtok(str, " \n\t");
		if (words > 1)
		{
			array[1] = strtok(NULL, " \n\t");
			i++;
		}
		array[i] = NULL;
	}
}
