#include "monty.h"
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
