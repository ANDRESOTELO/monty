#include "monty.h"

/**
 *get_function - Get function from struct
 *@line_num: Line number
 */

void get_function(unsigned int line_num)
{
	char *opcode = NULL;
	int i = 0;

	instruction_t op[] = {
		{"push", push_stack}, {"pall", pall_function}, {"pint", pint_function},
		{"pop", pop_function}, {"swap", swap_function}, {"add", add_function},
		{"nop", nop_function}, {"sub", sub_function}, {"div", div_function},
		{"mul", mul_function}, {"mod", mod_function}, {"pchar", pchar_function},
		{"pstr", pstr_function}, {"rotl", rotl_function}, {"rotr", rotr_function},
		{NULL, NULL},
	};
	opcode = strtok(variables.buffer, " ");
	if (opcode != NULL && opcode[0] != '#')
	{
		while (op[i].opcode)
		{
			if (strcmp(op[i].opcode, opcode) == 0)
			{
				op[i].f(&variables.head, line_num);
				break;
			}
			i++;
		}
	}
	if (op[i].opcode == NULL)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", line_num, opcode);
		want_to_be_free(), exit(EXIT_FAILURE);
	}
}
