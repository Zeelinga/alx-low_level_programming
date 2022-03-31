#include "main.h"
/**
 * _puts_recursion - replace dest with src string till end value
 * @str: pointer to the string we're wanting printed
 * Return: void
 */
void _puts_recursion(char *str)
{
	if (!*str)
		_putchar('\n');
	else
	{
		_putchar(*str);
		_puts_recursion(++str);
	}
}
