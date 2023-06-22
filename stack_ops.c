#include "monty.h"
/**
 * push - pushes an element on top of the stack
 * stack: pointer to the stack
 * line_number: number of the op code line being read
 *
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	stack_t *pointer = malloc(sizeof(stack_t));

	if (pointer == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	
}
