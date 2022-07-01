#include <stdio.h>
/**
 * main -  program that prints all
 * possible combinations of single-digit numbers.
 * Return: Always 0;
 */
int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		if (number != '9')
		{
			putchar(',');
			putchar(' ');
		}
		number++;
	}
	putchar('\n');
	return (0);
}

