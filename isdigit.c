#include "monty.h"
/**
 * _isdigit - this is a function to show whether a string is a digit
 * @value: the value of the string or digit
 * Return: void
 */
int _isdigit(char *value)
{
int i;
if (value == NULL)
return (0);
for (i = 0 ; value[i] != '\0'; i++)
{
if (value[i] == '-' && i == 0)
continue;
if (!isdigit(value[i]))
return (0);
}
return (1);
}
