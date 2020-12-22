#include "monty.h"

/**
 *main - Entry point
 *@argc: Count arguments in buffer
 *@argv: Arguments value
 *Return: Exit Success
 */

int main(int argc, char **argv)
{
	ssize_t nread;
	size_t len = 0;
	unsigned int line_num = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	variables.monty_file = fopen(argv[1], "r"); /*For access to FILE in struct*/

	if (variables.monty_file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((nread = getline(&variables.buffer, &len, variables.monty_file)) != -1)
	{
		line_num++;
		if (variables.buffer != NULL)
		{
			variables.buffer[strlen(variables.buffer) - 1] = '\0';
			get_function(line_num);
		}
	}
	exit(EXIT_SUCCESS);
}
