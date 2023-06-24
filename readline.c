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
	int line_number = 0;
	while (fgets(buffer, BUFFER_SIZE, file))
	{
		line_number++;
		buffer[strcspn(buffer, "\n")] = '\0';
		opcode = strtok(buffer, " ");
		op_int_str = strtok(NULL, " ");

		if (opcode != NULL)
		{
			if (op_int_str != NULL)
			{
				op_int = atoi(op_int_str);
				for (i = 0; instructions)
			}
			else
			{
				fprintf(stderr, "L%u: usage: push interger", line_number);
				exit(EXIT_FAILURE);
			}
		}
	}

}
