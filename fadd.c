#include "monty.h"
/**
*  * f_add - function that adds the stacks
*   * @stack: the stacks to be added
*    * @line_number: the number of the lin
*/
void f_add(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
(*stack)->next->n += (*stack)->n;
f_pop(stack, line_number);
}

