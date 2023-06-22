#include "monty.h"
/**
 *  * f_pop - this is the function pop
 *   * @stack: this is the stack
 *    * @line_number: the number of the line
 */
void f_pop(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
tmp = *stack;
*stack = (*stack)->next;
free(tmp);
}

