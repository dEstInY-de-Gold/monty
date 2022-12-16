#include "monty.h"

/**
 * main - calls funcs for execution
 * @ac: number of arguments
 * @av: pointer to array of arguments
 *
 * Return: zero on success
 */

int main(int ac, char **av)
{
	int value;

	if (strcmp(av[1], "push") == 0)
	{
		if (ac < 3)
		{
			fprintf(stderr, "Error: missing value for push\n");
			exit(EXIT_FAILURE);
		}
		value = atoi(av[2]);
		push(value);
	}
	else if (strcmp(av[1], "pall") == 0)
	{
		pall();
	}
	return (0);
}
