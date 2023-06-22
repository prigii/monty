#include "monty.h"
/**
 *  * f_pop - prints the top
 *   * @head: stack head
 *    * @counter: line_number
 *     * Return: no return
 **/
void f_pop(stack_t **stack, unsigned int line_number)
{
stack_t *h;
if (*stack == NULL)
{
fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
h = *stack;
*stack = h->next;
free(h);
}
