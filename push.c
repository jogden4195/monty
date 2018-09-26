#include "monty.h"

/**
 * push_n - function that adds a new node at the end of a doubly linked list
 * @head: double pointer to doubly linked list
 * @arr: string array
 * @line_num: current line count
 * Return: void
 */
void push_n(char **arr, unsigned int line_num)
{
	stack_t *new_node, *temp;

	if (sizeof(arr) != 2 || is_num(arr[1]) == 0)
	{
		fprintf(stderr, "L<%u>: usage: push integer\n", line_num);
		exit(EXIT_FAILURE);
	}
	new_node = malloc(sizeof(stack_t));
	if (!new_node)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = atoi(arr[1]);
	new_node->next = NULL;
	if (!(*stack))
	{
		new_node->next = *stack;
		new_node->prev = NULL;
		*stack = new_node;
		exit(EXIT_SUCCESS);
	}
	temp = *stack;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	new_node->prev = temp;
}

/**
 * is_num - function to check is string is number
 * @arr: string array
 * Return: 1 on success, 0 on failure
 */
int is_num(char *arr)
{
	int i = 0;

	while (arr[i] != '\0')
	{
		if (is_digit(arr[i]))
			continue;
		else
			return (0);
		i++;
	}
	return (1);
}


/**
 * is_digit - checks if character is a digit
 * @c: character to check
 * Return: 1 on success, 0 on failure
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
