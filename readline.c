#include "monty.h"
/**
 * _readline - reads a line from the file
 * @file: file to be processed
 *
 * Return: void
 */
void _readline(FILE *file)
{
	char buffer[BUFFER_SIZE];
	int op_int;

	while (fgets(buffer, BUFFER_SIZE, file))
	{
		buffer[strcspn(buffer, "\n")] = '\0';
		opcode = strtok(buffer, " ");
		op_int_str = strtok(NULL, " ");

		if (opcode != NULL)
		{
			if (op_int_str != NULL)
			{
				op_int = atoi(op_int_str);
				printf("opcode : %s\n opint: %d\n", opcode, op_int);
			}
			else
			{
				fprintf(stderr, "Number not provided");
				exit(EXIT_FAILURE);
			}
		}
	}

}
