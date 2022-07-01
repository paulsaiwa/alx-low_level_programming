#include <stdio.h>
/**
 * main - Prints out digit numbers of base 10 to 0.
 * Return: Always 0.
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
