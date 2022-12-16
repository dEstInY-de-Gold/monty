#include "monty.h"

/**
 * pall - prints values on stack
 */

void pall(void)
{
	stack_t *ptr;
	int i;

	for (i = 0; i >= 0; i++)
	{
		printf("%d\n", ptr->n);
	}
}
