#include "monty.h"

/**
 *  * f_push - function
 *   * @stack: stack
 *    * @line_number: line number
 *     * @value: value of the string
 */

void f_push(stack_t **stack, unsigned int line_number)
{
int n, j = 0, flag = 0;
if (stack_s.arg)
{
if (stack_s.arg[0] == '-')
j++;
for (; stack_s.arg[j] != '\0'; j++)
{
if (stack_s.arg[j] > 57 || stack_s.arg[j] < 48)
flag = 1; }
if (flag == 1)
{ fprintf(stderr, "L%d: usage: push integer\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE); }}
else
{ fprintf(stderr, "L%d: usage: push integer\n", line_number);
free_stack(*stack);
exit(EXIT_FAILURE); }
n = atoi(stack_s.arg);
if (stack_s.n == 0)
addnode(stack, n);
else
addqueue(stack, n);
}
