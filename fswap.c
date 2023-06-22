#include "monty.h"
/**
 *  * f_swap - adds the top two elements of the stack.
 *   * @head: stack head
 *    * @counter: line_number
 *     * Return: no return
 */
void f_swap(stack_t **stack, unsigned int line_number)
{
stack_t *h;
int len = 0, aux;
h = *stack;
while (h)
{
h = h->next;
len++;
}
if (len < 2)
{
fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE);
}
h = *stack;
aux = h->n;
h->n = h->next->n;
h->next->n = aux;
}
