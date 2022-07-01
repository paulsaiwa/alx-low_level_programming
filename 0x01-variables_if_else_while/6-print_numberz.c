#include <stdio.h>
/**
 * main - Prints out digit numbers of base 10 to 0.
 * Return: Always 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar("%d", num);
	putchar("\n");
	return (0);
}
