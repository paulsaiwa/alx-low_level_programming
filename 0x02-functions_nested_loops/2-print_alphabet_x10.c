#include "main.h"
/**
 * main - function that prints 10 times the alphabet, in lowercase
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char c;
	int m;
	for (m = 0; m < 10; m++)
	{
		for ( c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
