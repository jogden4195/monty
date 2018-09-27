#include "monty.h"

/**
 * push_n - function that adds a new node at the end of a doubly linked list
 * @head: double pointer to doubly linked list
 * @arr: string array
 * @line_num: current line count
 * Return: void
 */
void push_n(stack_t **stack, unsigned int line_num)
{
	stack_t *new_node, *temp, *head;
	int n;
	head = *stack;
	if (element_counter() != 2)
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
	n = atoi(array[1]);
	new_node->n = n;
	new_node->prev = NULL;
	if (head != NULL)
		(head)->prev = new_node;
	new_node->next = head;
	head = new_node;
}

/**
 * element_counter - counts the number of elements in the array
 * @arr: the array whose elements we are counting
 * Return: number of elements in the array
 */
int element_counter(void)
{
	int count = 0;
	while (array[count])
		count++;
	return count;
}
