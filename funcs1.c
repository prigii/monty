#include "monty.h"

/**
 *  * f_push - function that pushes a value to the stack
 *   * @stack: stack
 *    * @line_number: line number
 *     *
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

/**
*  * f_pall - prints all values on the stack
*   * @stack: stack
*    * @line_number: line number
*/
void f_pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
stack_t *tmp = *stack;
while (tmp != NULL)
{
printf("%d\n", tmp->n);
tmp = tmp->next;
}
(void)line_number;
}

/**
 *  * f_pint - prints the value at the top of the stack
 *   * @stack: stack
 *    * @line_number: line number
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

/**
 *  * push_err - prints error messsage if push isn't found
 *   * @opcode: opcode
 *    * @line_number: line number
 */
void push_err(char *opcode, unsigned int line_number)
{
fprintf(stderr, "L%d: can't %s, stack too short\n",
line_number, opcode);
}

/**
 *  * free_stack - frees the stack
 *   * @stack: stack to be freed
 */

void free_stack(stack_t *stack)
{
stack_t *tmp;
while (stack != NULL)
{
tmp = stack;
stack = stack->next;
free(tmp);
}
}
