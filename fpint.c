#include "monty.h"
/**
 * f_pint - prints the value at the top of the stack
 * @stack: stack
 * @line_number: line number
 */

void f_pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
