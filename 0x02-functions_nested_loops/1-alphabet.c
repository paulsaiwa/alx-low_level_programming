#include "main.h"
/**
 * function: prototype for printing lower alphabet character using _putchar function
 */
void print_alphabet(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
	return (0);
}

