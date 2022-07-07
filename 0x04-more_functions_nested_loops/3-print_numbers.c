#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int a = '0';
		while (a < '9')
			_putchar('%d', a);
		a++;
		_putchar('\n');
}
