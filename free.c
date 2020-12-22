#include "monty.h"

/**
 *want_to_be_free - Free struct variables
 */

void want_to_be_free(void)
{
	stack_t *tmp = variables.head;

	while (tmp)
	{
		variables.head = variables.head->next;
		free(tmp);
		tmp = variables.head;
	}

	if (variables.buffer != NULL)
	{
		free(variables.buffer);
	}

	fclose(variables.monty_file);
}
