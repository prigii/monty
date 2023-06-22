#include "monty.h"

/**
 *  * f_push - function that pushes a value to the stack
 *   * @stack: stack head
 *    * @line_number: line number
 *     *@free_stack: frees the stack
 *      *@value: value of stack to be freed
 */

void f_push(stack_t **stack, unsigned int line_number)
{
stack_t *node = malloc(sizeof(stack_t));
int x;
if (value == NULL)
{
fprintf(stderr, "L%d: usage: push integer\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
x = atoi(value);
node->n = x;
node->prev = NULL;
node->next = *stack;
if (*stack != NULL)
(*stack)->prev = node;
*stack = node;
}
