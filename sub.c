#include "monty.h"
/**
 * sub - subtracts the top element of the stack from the second
 * top element of the stack
 * @stack: the stack
 * @line_number: line being read
 *
 * Return: void
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *top;
	stack_t *sec_top;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	top = *stack;
	sec_top = top->next;

	sec_top->n -= top->n;
	pop(stack, line_number);
}
