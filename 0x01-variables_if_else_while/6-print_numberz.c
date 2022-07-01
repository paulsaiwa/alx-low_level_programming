#include <stdio.h>
/**
 * main - Prints out digit numbers of base 10 to 0.
 * Return: Always 0.
 */
int main(void)
{
	int number='0';

	while (number <= '10')
		putchar(number);
	number++;
	putchar(number);
	return (0);
}
