#include "monty.h"
/**
 *  * f_pint - prints the top
 *   * @head: stack head
 *    * @counter: line_number
 *     * Return: no return
 */
void f_pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
fclose(bus.file);
free(bus.content);
free_stack(*stack);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}
