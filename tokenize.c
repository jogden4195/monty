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
char **tokenize(char *str)
{
	char *token, **arr;
	int i = 0, words;

	words = arg_count(str);
	arr = malloc(sizeof(char *) * (words + 1));
	if (!arr)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	token = strtok(str, " ");
	while (token != NULL)
	{
		arr[i] = token;
		token = strtok(NULL, " ");
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
