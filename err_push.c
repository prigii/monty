#include "monty.h"
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

