#include <stdio.h>
/**
 * main - Print program that prints all the numbers of base 16 in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	number = 'a';

	while (number <= 'f')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}

