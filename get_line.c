#include "monty.h"

/**
 *  *_get - function that gets the opcode
 *   *@line: the line that gets executed
 *    *@opcode: this is the opcode
 *     *@stack: this is the stack
 *      *@line_number: the number of the line
 */
void _get(char *line, char *opcode, stack_t **stack, unsigned int line_number)
{
instruction_t instructions[] = {
{"push", f_push},
{"pint", f_pint},
{"pall", f_pall},
{"add", f_add},
{"pop", f_pop},
{"swap", f_swap},
{"nop", f_nop},
{NULL, NULL}
};
int i;
for (i = 0; instructions[i].opcode != NULL; i++)
{
if (strcmp(opcode, instructions[i].opcode) == 0)
{
instructions[i].f(stack, line_number);
return;
}
}
fprintf(stderr, "L%d: unknown instruction %s\n", line_number, opcode);
free(line);
free_stack(*stack);
exit(EXIT_FAILURE);
}
