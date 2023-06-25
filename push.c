#include "monty.h"
/**
 * push - add an element on top of the stack
 * @stack: the stack
 * @line_number: Line from which an operation is read
 *
 * Return: Returns void
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	int op_int;
	char *op_int_str = strtok(NULL, " \t\n");
	int isvalid_num = verify_int(op_int_str);

	if (op_int_str == NULL || !isvalid_num)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	op_int = atoi(op_int_str);

	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = op_int;
	new_node->prev = NULL;
	new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;

	*stack = new_node;
}
