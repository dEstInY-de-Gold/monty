#include "monty.h"

/**
 * push - pushes data to stack
 * @num: data
 */

void push(int num)
{
	stack_t *ptr, *new;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failure");
		exit(EXIT_FAILURE);
	}
	/*
	if (atoi(num) == NULL)
	{
		printf("L<%d>: usage: push integer\n", f(line_number));
		exit(EXIT_FAILURE);
	}*/
	if (ptr->n >= stack_size)
	{
		fprintf(stderr, "Error: stack is full\n");
		exit(EXIT_FAILURE);
	}
	new->n = num;
	new->next = ptr;
	ptr->prev = new;
	new->prev = NULL;
}
