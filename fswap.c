#include "monty.h"

/**
*  * f_swap - this is the function that swaps between two stacks
*   * @stack: the stack
*    * @line_number: the number of the line
*/

void f_swap(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
if (*stack == NULL || (*stack)->next == NULL)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
tmp = (*stack)->next;
(*stack)->next = tmp->next;
(*stack)->prev = tmp;
if (tmp->next != NULL)
tmp->next->prev = *stack;
tmp->prev = NULL;
tmp->next = *stack;
*stack = tmp;
}
