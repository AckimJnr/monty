#include "monty.h"
/**
 * main - starting point of the monty program
 * argc: Number of arguments passe to our program
 * argv: array of the arguments passed
 *
 * Return: Return 0 on successful execution, otherwise -1
 */
int main(int argc, char **argv)
{
	FILE *file;

	(void) argv;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	_readline(file);
	fclose(file);
	return (0);
}
