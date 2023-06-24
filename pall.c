#include "monty.h"
#include <stdlib.h>
/**
 * pall - displays content of the stack
 * @stack: stack to be printed
 * @line_number: current line number being read
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current = *stack;

	(void) line_number;
	while (current != NULL)
	{
		stack_t *tmp = current;

		printf("%d\n", current->n);
		current = current->next;
		free(tmp);
	}
	*stack = NULL;
}
