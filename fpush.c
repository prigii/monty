#include "monty.h"

/**
 *  * f_push - function that pushes a value to the stack
 *   * @stack: stack head
 *    * @line_number: line number
 *     *
 */

void f_push(stack_t **stack, unsigned int line_number)
{
char *value = value;
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
