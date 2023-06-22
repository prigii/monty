#include "monty.h"
/**
 *  * f_pall - prints the stack
 *   * @head: stack head
 *    * @counter: no used
 *     * Return: no return
 *     */
void f_pall(stack_t **stack, unsigned int line_number)
{
stack_t *h;
(void)line_number;
h = *stack;
if (h == NULL)
return;
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
